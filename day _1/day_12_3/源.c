#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    long int No;
//    float score1, score2, score3;
//    scanf("%ld;%f,%f,%f", &No, &score1, &score2, &score3);
//    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", No, score1, score2, score3);
//    return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if ('A' <= ch && ch <= 'z')
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
        getchar();

    }
    return 0;
}