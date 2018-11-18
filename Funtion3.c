#include<stdio.h>
#include<stdlib.h>
int Fac(int round);
int main()
{
    int N,round,sum;
    printf("Input :");
    scanf("%d",&N);
    for(round=N;round>=0;round--){
        sum=Fac(round);
        printf("%d! = %d\n",round,sum);
    }
}
int Fac(int round){
int i,sum=1;
for(i=1;i<=round;i++){
    sum=sum*i;
}
return sum;
printf("Input :");
}
