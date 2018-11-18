#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void Pig(int);
int main(){
int i;
for(i=0;i<50;i++){
    system("cls");
    Pig(i);
    Sleep(50);
}
for(i=0;i<50;i++){
    system("cls");
    Pig(50-i-1);
    Sleep(50);
}
}
void Pig(int x){
    int i;
    for(i=0;i<x;i++){printf("\n");
    }
    for(i=0;i<x;i++){printf(" ");
    }
 printf("^(oo)^");
}

