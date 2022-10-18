#include <stdio.h>

enum gender {Male, Femal, Other };
enum season {Spring, Summer, Autumn, Winter};
enum month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

enum season select(void)
{
    int s;
    enum month selected_season;
    do {
        printf("月: ");
        fscanf(stdin, "%d", &s);
        switch (s) {
            case Dec:
            case Jan:
            case Feb: selected_season = Winter; break;
            case Mar:
            case Apr:
            case May: selected_season = Spring; break;
            case Jun:
            case Jul:
            case Aug: selected_season = Summer; break;
            case Sep:
            case Oct:
            case Nov: selected_season = Autumn; break;
            default:
                printf("月は1～12を入力してください");
                break;
        } 
    } while (s < Jan || s > Dec);
    return selected_season;
}

int main(void)
{
    enum season selected;
    switch (selected = select()) {
        case Spring: puts("春です。"); break;
        case Summer: puts("夏です。"); break;
        case Autumn: puts("秋です。"); break;
        case Winter: puts("冬です。"); break;
        default: puts("...");
    }
}
