#include<stdio.h>
void greeting();
int Cal();
void Downing(int,float);
float Mul(int K,float J);
int a=5;
void main()
{
    int i=0 ,j=9;
    float a=5.6,result;
    for(i=0;i<5;i++){
    greeting();}
    i=Cal();
    printf("\n    Cal = %d\n",i);
    Downing(j,a);
    result=Mul(j,a);
     printf("\n    Result = %.2f\n",result);

}
void Downing(int K,float J){
    int i =2;
    J=J-i+a;
    K=K-i+a;
    printf("\n    K= %d  J= %.2f\n",K,J);
}
float Mul(int K,float J){
return K*J;
}
void greeting(){
    printf("========================\n");
    printf("\t  Bye!!\n");
    printf("========================\n");
}
int Cal(){
    int i=5, j=10;
    for(;i<10;i++){
        j=j*i;
    }
    return j ;
}
