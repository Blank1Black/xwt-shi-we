 #define _CRT_SECURE_NO_WARNINGS 1

//BC41
//#include <stdio.h>
//int main()
//{
//    int great = 0;
//    while (scanf("%d", &great) != EOF)
//    {
//        if (great >= 140)
//        {
//            printf("Genius\n");
//        }
//    }
//    return 0;
//}

//BC48

//#include<stdio.h>
//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch >= 'a' && ch <= 'z')
//        {
//            ch = ch - ('a' - 'A');
//            printf("%c\n", ch);
//        }
//        else if (ch >= 'A' && ch <= 'Z')
//        {
//            ch = ch + ('a' - 'A');
//            printf("%c\n", ch);
//        }
//    }
//    return 0;
//}

//BC47
//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch >= 'A' && ch <= 'z')
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}
#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0; 
//    int c = 0;
//    int t = 0;
//    while (scanf("%d%d%d", &a ,&b, &c) != EOF)
//    {
//        t = a > b ? a : b;
//        t = c > t ? c : t;
//        printf("%d\n", t);
//    }
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int ch ;
    int count = 0;
    while ((ch = getchar()) != '0' && ch != EOF)
    {
        if (ch == 'A')
            count++;
        else if(ch == 'B')
            count--;
    }
    if (count > 0)
        printf("A\n");
    else if (count < 0)
        printf("B\n");
    else
        printf("E\n");
    return 0;
}