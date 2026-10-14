#include<stdio.h>
int main(){
    //intx=integer variable name which stores variable name
    int x=10;
    int*p;
    p=&x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
}