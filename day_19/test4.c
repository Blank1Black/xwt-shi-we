 #define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int a[6], i, j, t;
//    for (i = 0; i < 6; i++)
//        scanf("%d", &a[i]);
//    for (i = 1; i < 6; i++)
//    {
//        t = a[i]; //�����������ݴ��ڱ���t��	
//        for (j = i - 1; j >= 0; j--)
//            if (t > a[j])
//                a[j + 1] = a[j];//δ�ҵ�����λ�ã�����һ��λ��
//            else 
//                break;
//        a[j + 1] = t;       	//�ҵ�����λ�ã���ɲ���
//    }
//    for (i = 0; i < 6; i++)
//        printf(" %d  ", a[i]);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int arr[40] = { 0 };
    int i = 0;
    int j = 0;
    int n = 0;
    int t = 0;
    int z = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        t = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (t < arr[j])
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = t;

    }
    for (z = 0; z < 5; z++)
    {
        printf("%d ", arr[z]);
    }
    return 0;
}
