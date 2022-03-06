/**************************************************************************/
/                                                                          /
/                                                        :::      :::::::: /
/   rush-01.c                                          :+:      :+:    :+: /
/                                                    +:+ +:+         +:+   /
/   By: ahommaru <ahommaru@student.42.fr>          +#+  +:+       +#+      /
/                                                +#+#+#+#+#+   +#+         /
/   Created: 2020/02/14 22:03:09 by ahommaru          #+#    #+#           /
/   Updated: 2020/02/16 17:15:03 by ahommaru         ###   ########.fr     /
/                                                                          /
/**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    debug(int **board)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 1 || j == 5)
                printf(" ");
            if (board[i][j])
                printf("%d", board[i][j]);
            else
                printf(" ");
        }
        if (i == 0 || i == 4)
            printf("\n");
        printf("\n");
    }
    printf("\n");
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

void    print(int **board)
{
    int i;
    int j;

    i = 1;
    while (i < 5)
    {
        j = 1;
        while (j < 5)
        {
            ft_putchar(board[i][j] + '0');
            if (j != 4)
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int     set_outside(int **board, char input[])
{
    int i;

    i = 1;
    while (i < 5)
    {
        board[0][i] = *input - '0';
        board[5][i] = *(input + 8) - '0';
        board[i][0] = *(input + 16) - '0';
        board[i][5] = *(input + 24) - '0';
        input += 2;
        i++;
    }
    return (0);
}

void    copy_row(int dest[], int src[], int include_outside)
{
    int i;

    if (include_outside)
    {
        i = 0;
        while (i < 6)
        {
            dest[i] = src[i];
            i++;
        }
    }
    else
    {
        i = 1;
        while (i < 5)
        {
            dest[i] = src[i];
            i++;
        }
    }
}

void    set_left_num(int pattern[6])
{
    int max;
    int left;
    int i;

    max = pattern[1];
    left = 1;
    i = 2;
    while (i < 5)
    {
        if (max < pattern[i])
        {
            left++;
            max = pattern[i];
        }
        i++;
    }
    pattern[0] = left;
}

void    set_right_num(int pattern[6])
{
    int max;
    int right;
    int i;

    max = pattern[4];
    right = 1;
    i = 3;
    while (i > 0)
    {
        if (max < pattern[i])
        {
            right++;
            max = pattern[i];
        }
        i--;
    }
    pattern[5] = right;
}

void    make_perm(int perm[5], int pattern_arr[24][6])
{
    while (++perm[1] < 5)
    {
        perm[2] = 0;
        while (++perm[2] < 5)
        {
            if (perm[1] == perm[2])
                continue;
            perm[3] = 0;
            while (++perm[3] < 5)
            {
                if (perm[1] == perm[3] || perm[2] == perm[3])
                    continue;
                perm[4] = 0;
                while (++perm[4] < 5)
                {
                    if (perm[1] == perm[4] || perm[2] == perm[4] || perm[3] == perm[4])
                        continue;
                    copy_row(pattern_arr[perm[0]], perm, 0);
                    set_left_num(pattern_arr[perm[0]]);
                    set_right_num(pattern_arr[perm[0]]);
                    perm[0]++;
                }
            }
        }
    }
}

void    init_board(int **board)
{
    int i;
    int j;

    i = 0;
    while (i < 6)
    {
        j = 0;
        while (j < 6)
        {
            board[i][j] = 0;
            j++;
        }
        i++;
    }
}

int     compare_col_with_pattern(int **board, int pattern[6], int n_col)
{
    int i;

    i = 0;
    while (i < 6)
    {
        int b = board[i][n_col];
        int p = pattern[i];
        if (board[i][n_col] != pattern[i])
            return (-1);
        i++;
    }
    return (0);
}

int     check_cols(int **board, int pattern_arr[24][6])
{
    int n_col;
    int pa_index;

    n_col = 1;
    while (n_col < 5)
    {
        pa_index = 0;
        while (pa_index < 24)
        {
            if (!compare_col_with_pattern(board, pattern_arr[pa_index], n_col))
                break ;
            pa_index++;
        }
        if (pa_index == 24)
            return (-1);
        n_col++;
    }
    return (0);
}

int     *solve(int *board, int pattern_arr[24][6], int depth)
{
    int i;
    int **new_board;
    int **ans;

    if (depth == 4)
        return !check_cols(board, pattern_arr) ? board : 0;
    new_board = malloc(sizeof(int )  6);
    i = 0;
    while (i < 6)
    {
        new_board[i] = malloc(sizeof(int) * 6);
        if (board)
            copy_row(new_board[i], board[i], 1);
        i++;
    }
    i = 0;
    while (i < 24)
    {
        if (board[depth + 1][0] == pattern_arr[i][0] && board[depth + 1][5] == pattern_arr[i][5])
        {
            copy_row(new_board[depth + 1], pattern_arr[i], 1);
            ans = solve(new_board, pattern_arr, depth + 1);
            if(ans)
                return (ans);
        }
        i++;
    }
    i = 0;
    while (i < 6)
    {
        free(new_board[i]);
        i++;
    }
    free(new_board);
    return (0);
}

int main(int argc, char *argv[])
{
    int i;
    int perm[5];
    int pattern_arr[24][6];
    int **board;

    perm[0] = 0;
    perm[1] = 0;
    make_perm(perm, pattern_arr);
    board = malloc(sizeof(int )  6);
    i = 0;
    while (i < 6)
    {
        board[i] = malloc(sizeof(int) * 6);
        i++;
    }
    init_board(board);
    if (set_outside(board, argv[1]))
    {
        ft_putstr("Error");
        return (0);
    }
    int **ans;
    ans = solve(board, pattern_arr, 0);
    if (ans)
        print(ans);
    else
        ft_putstr("Error");
    return (0);
}

