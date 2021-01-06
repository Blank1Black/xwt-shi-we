 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, p;
    double circumference = 0;
    double area = 0;
    scanf("%lf%lf%lf", &a, &b, &c);
    circumference = a + b + c;
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2lf area=%.2lf", circumference, area);
    return 0;
}
#include<stdio.h>
int main()
{
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &t);
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
    return 0;
}