#include<stdio.h>
int Get(int *n,int a[],char ch);
int BFSort(int *n,int a[],char ch);
int Sort(int *n,int a[]);
int i,temp,A[50],B[50],sizeA,sizeB,k;
int main()
{
    Get(&sizeA,A,'A');
    Get(&sizeB,B,'B');
    printf("Before sort ....\n");
    BFSort(&sizeA,A,'A');
    printf("\n");
    BFSort(&sizeB,B,'B');
    Sort(&sizeA,A);
    Sort(&sizeB,B);
    printf("\nAfter sort ....\n");
    BFSort(&sizeA,A,'A');
    printf("\n");
    BFSort(&sizeB,B,'B');
    printf("\nMin A Is %d",A[0]);
    printf("\nMin B Is %d",B[0]);
}
int Get(int *n,int a[],char ch)
{
    printf("Input %c size = ",ch);
    scanf("%d",n);
    for(i=0; i<*n; i++)
    {
        printf("%c%d : ",ch,i+1);
        scanf("%d",&a[i]);
    }
}
int BFSort(int *n,int a[],char ch)
{
    printf("%c:",ch);
    for(i=0; i<*n; i++) printf("%d ",a[i]);
}
int Sort(int *n,int a[])
{
    for(i=0; i<*n-1; i++)
    {
        for(k=i+1; k<*n; k++) if (a[i]>a[k])
            {
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
    }
}
