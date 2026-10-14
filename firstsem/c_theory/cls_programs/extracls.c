#include<stdio.h>    //header file defined to perform input and output operation

int main(){
    int firstnumber,sum;     //declared a variable 'firstnumber' of 'integer' type
    int secondnumber;
    firstnumber=100;
    secondnumber=200;   //variable initialization
    sum=firstnumber+secondnumber;
    
    
    float first,second,difference;
    printf("enter the first number:");
    scanf("%f",&first);
    printf("enter the secondnumber:");
    scanf("%f",&second);
    difference=first-second;
    printf("the difference is:%f",difference);


}