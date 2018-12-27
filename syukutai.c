#include<stdio.h>
#define n 10
void f1(),f2();
int main(void)
{
    int a;
    printf("***********\n");
    printf("Main Menu\n");
    printf("1.计算非负数个数与和\n");
    printf("2.换大小\n");
    printf("3.退出\n");
    printf("***********\n");
    printf("Please enter your choice:");
    scanf("%d",&a);
    while(a!=3)
    {
        switch(a)
        {
            case 1:f1();break;
            case 2:f2();break;
            default:main();
        }
        scanf("%d",&a);
    }
}
//201811151955输入二十个整数计算非负数个数与和
void f1()
{
    int i,j=0,sum=0;
    int a[20]={0};
    printf("Please enter a int number and press enter than you will enter 20 numbers\n");
    for(i=0;i<20;i++)
    {
        printf("Number%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        if(a[i]>=0)
        {
            j++;//计算非负数个数
            sum=a[i]+sum;//计算非负数和
        }
    }
    printf("\nNumbers=%d\n\nSum=%d\n\n",j,sum);
    printf("Please enter your choice:");
}
void f2()
{//201811152050交换十个整数最大最小值的位置
    int s[n];
    int i,x=0,y=0,max,min,emp;
    printf("Please enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("\nBefore swap:");
    for(i=0;i<n;i++)
        printf("%d ",s[i]);
    printf("\n");
    max = s[0];
    min = s[0];
    for(i=0;i<n;i++)
    {
        if(max<s[i])
        {
            max = s[i];
            x = i;
        }
        if(min>s[i])
        {
            min = s[i];
            y = i;
        }
    }
    //printf("%d",x);
    emp = s[x];
    //printf("bbb");
    s[x] = s[y];
    s[y] = emp;
    //printf("\n%d %d %d %d",max,x,min,y);
    printf("\nAfter swap:");
    for(i=0;i<n;i++)
        printf("%d ",s[i]);
    printf("\n");
    printf("Please enter your choice:");
}
