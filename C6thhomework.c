#include<stdio.h>
#define N 10
int swap(int *a,int *b);//�����ĺ���
void com(int *a, int *max, int *max_pos, int *min, int *min_pos, int *k, int *l);//�ȽϺ���
void f1(void);
void f2(void);
main(void)
{
    int x;
    printf("**********\n");
    printf("Main Meun:\n");
    printf("1.�����������ֵ\n2.��������Сֵ����λ��\n3.quit\n");
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
//ʹ��ָ�뽻���������ֵ201812021900
    int i;
    int a[] = {0, -5, 8, 3, 40};
    int b[] = {4, 8, 6, -7, 23};
    printf("Before swap:a=");//�������ǰ����
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

    swap(a, b);//���ý�������
    printf("\n\nAfter swap:a=");//���������ĺ���
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
//�Ƚ�ʮ�����Ĵ�С�����ֵ��λ��201812041730#define N 10
    int a[N], i, j=0, max, max_pos[9]={0}, min, min_pos[9]={0};
    int k=0, l=0;
    printf("Please enter %d numbers:", N);
    for(i=0;i<N;i++)
    scanf("%d", &a[i]);
    for(i=0;i<N-1;i++)//�жϴ�Сֵ�������
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
int swap(int *a,int *b)//�����ĺ���
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
void com(int *a, int *max, int *max_pos, int *min, int *min_pos, int *k, int *l)//�ȽϺ�����k,lΪ��¼�ظ���Сֵ����
{
    int i;
    *k=*l=0;
    *max=*min=a[0];
    *max_pos=*min_pos=0;
    for(i=1; i<N; i++)//�жϴ�С
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
    for(i=0;i<N;i++)//��¼λ��
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
