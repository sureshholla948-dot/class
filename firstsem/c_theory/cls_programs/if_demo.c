//pgm to determain whether the given no is below or not

#include<stdio.h>
int main(){
    int num;
    int checknumber=100;
    printf("enter the any integer no:");
    scanf("%d",&num);
    if(num>checknumber){
        //if blocks executes whwen ever condition is true
        printf("%d is greater than %d",num,checknumber);
    }
    else{
        printf("%d is smaller than %d",num,checknumber);
    }
}