#include <stdio.h>
#include <math.h>

double calcCosineSimilarity(double v1[], double v2[], int size)
{
    double numerator = 0.0;
    double denominator = 0.0;

    for (int i = 0; i < size; i++) {
        numerator += v1[i] * v2[i];
    }

    double temp = 0.0;
    for (int i = 0; i < size; i++) {
        temp += v1[i] * v1[i];
    }
    denominator = sqrt(temp);
    temp = 0;
    for (int i = 0; i < size; i++) {
        temp += v2[i] * v2[i];
    }
    denominator *= sqrt(temp);

    return numerator / denominator;
}

int main(void)
{
    int size = 10;
    double vec1[] = {8.2, 15.3, 6.2, 5.9, 7.0, 6.8, 12.9, 9.8, 3.4, 4.8};
    double vec2[] = {7.3, 17.0, 6.9, 7.2, 6.3, 7.5, 11.8, 10.3, 2.9, 4.7};
    double vec3[] = {6.9, 12.5, 5.3, 8.0, 7.9, 7.7, 10.3, 11.0, 2.4, 4.3};
    double vec4[] = {3.9, 2.5, 5.9, 1.0, 3.4, 15.2, 8.5, 1.2, 17.3, -4.4, -5.4};
    double vec5[] = {-13.7, 25.3, -30.9, -20.0, 19.7, -15.2, 35.3, 14.6, -3.0, 29.9};

    printf("vector1とvector2のコサイン類似度: %.5f\n", calcCosineSimilarity(vec1, vec2, size));
    printf("vector1とvector3のコサイン類似度: %.5f\n", calcCosineSimilarity(vec1, vec3, size));
    printf("vector1とvector4のコサイン類似度: %.5f\n", calcCosineSimilarity(vec1, vec4, size));
    printf("vector1とvector5のコサイン類似度: %.5f\n", calcCosineSimilarity(vec1, vec5, size));
 
    return 1;
}