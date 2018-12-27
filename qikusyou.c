#include<stdio.h>//201811141030
#define nu 6
int YH(int a[][nu],int n);//声明该数组型三角函数
void f1(),f2();
void main(void)
{
    int x;
    printf("***********\nMain Menu\n");
    printf("1.杨辉三角\n2.单词数的计算\n3.退出\n");
    printf("***********\n");
    printf("Please enter your choice:");
    scanf("%d",&x);
    while(x!=3)
    {
        switch(x)
    {
        case 1:f1();break;
        case 2:f2();break;
        default:main();
    }
        scanf("&d",&x);
    }
}
void f1()//杨辉三角问题，201811072130
{
    int n=6;
    int b[6][6];//调用该函数，以数组参数形式返回
    YH(b,n);
    return main();
}
int YH(int a[][nu],int n)
{
    int i,j,c=2;
    for(i=0;i<n;i++)//做出外面的三角
    {
        a[i][0]=1;
        a[i][i]=1;
    }
    //printf("%d",n);
    for(j=1;j<5;j++)//形成内部的三角
    {
        for(i=c;i<n;i++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
        c++;    //printf("nihao");
    }
    //printf("nihao");
    for(i=0;i<n;i++)//输出三角
    {
        for(j=0;j<=i;j++)
        {
            printf("%-5d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //printf("\nPlease enter your choice:");
    return 0;
}
//用于计算一个英文文章里的单词数 201811140915
void f2()
{
    char s[100000];
    int i,j=0;
    printf("\nPlease enter your English article:\n");
    scanf(" ");//将换行符读走
    gets(s);//输入文章
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')//用于计算空格，即单词数
            j++;
    }
    printf("\nThe number of words in your article is:%d\n\n",j+1);
    return main();
}
