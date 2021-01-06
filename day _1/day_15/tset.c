 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i = 0;
    float test[5] = { 0 };
    float aver = 0;
    float sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%f", &test[i]);
        sum = sum + test[i];
    }

    aver = sum / (float)5;
    printf("%.1f\n", aver);
    return 0;
}