#include<stdio.h>
#define N 10
int swap(int *a,int *b);//交换的函数
void com(int *a, int *max, int *max_pos, int *min, int *min_pos, int *k, int *l);//比较函数
void f1(void);
void f2(void);
main(void)
{
    int x;
    printf("**********\n");
    printf("Main Meun:\n");
    printf("1.交换两数组的值\n2.输出最大最小值和其位置\n3.quit\n");
    printf("**********\n");
    printf("Please enter you choice:");
    scanf("%d", &x);
    while(x!=3)
    {
        switch(x)
        {
            case 1:f1();break;
            case 2:f2();break;
            default:return main();
        }
        scanf("%d", &x);
    }
}
void f1(void)
{
//使用指针交换俩数组的值201812021900
    int i;
    int a[] = {0, -5, 8, 3, 40};
    int b[] = {4, 8, 6, -7, 23};
    printf("Before swap:a=");//输出交换前的数
    for(i=0;i<5;i++)
    {
        printf("%d ", a[i]);

    }
    printf(" ,b=");
    for(i=0;i<5;i++)
    {
        printf("%d ", b[i]);

    }
    //for(i=0;i<5;i++)

    swap(a, b);//调用交换函数
    printf("\n\nAfter swap:a=");//输出交换后的函数
    for(i=0;i<5;i++)
    {
        printf("%d ", a[i]);

    }
    printf(" ,b=");
    for(i=0;i<5;i++)
    {
        printf("%d ", b[i]);

    }
    printf("\n");
    printf("Please enter you choice:");
    return;
}
void f2(void)
{
//比较十个数的大小，输出值和位置201812041730#define N 10
    int a[N], i, j=0, max, max_pos[9]={0}, min, min_pos[9]={0};
    int k=0, l=0;
    printf("Please enter %d numbers:", N);
    for(i=0;i<N;i++)
    scanf("%d", &a[i]);
    for(i=0;i<N-1;i++)//判断大小值存在与否
    {
      if(a[i]==a[i+1])
        j++;
      if(j==N-1)
      {
        printf("\nERROR:Not have the max or min\n");
        printf("\n\nPlease enter you choice:");
        return;
      }
    }
    com(a, &max, max_pos, &min, min_pos, &k, &l);
    printf("\nMax=%d ,Min=%d\n", max, min);
    printf("Max_pos=");
    for(i=0;i<k;i++)
        printf("%d, ", max_pos[i]);
    printf("Min_pos=");
    for(i=0;i<l;i++)
        printf("%d, ", min_pos[i]);
    printf("\n\nPlease enter you choice:");
    return;
}
int swap(int *a,int *b)//交换的函数
{
    int i;
    for(i=0;i<5;i++)
    {
        int temp;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
void com(int *a, int *max, int *max_pos, int *min, int *min_pos, int *k, int *l)//比较函数，k,l为记录重复大小值得数
{
    int i;
    *k=*l=0;
    *max=*min=a[0];
    *max_pos=*min_pos=0;
    for(i=1; i<N; i++)//判断大小
    {
        if(a[*max_pos]<a[i])
        {
            *max=a[i];
        }
        if(a[*min_pos]>a[i])
        {
            *min=a[i];
        }
    }
    for(i=0;i<N;i++)//记录位置
    {
        if(*max==a[i])
        {
            max_pos[*k]=i;
            *k=*k+1;
        }
        if(*min==a[i])
        {
            min_pos[*l]=i;
            *l=*l+1;
        }
    }
}
