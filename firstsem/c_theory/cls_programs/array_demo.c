#include<stdio.h>


int main(){
    int sub_marks[5],my_marks[5];
    sub_marks[0]=80;
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;
    printf("first subject mark: %d\n",sub_marks[0]);
    printf("second subject mark: %d\n",sub_marks[1]);
    printf("third subject mark: %d\n",sub_marks[2]);
    printf("fourth subject mark: %d\n",sub_marks[3]);
    printf("fifth subject mark: %d\n",sub_marks[4]);
    for(int i=0;i<5;i++){
    printf("enter %d subject mark:[int data]",i+1);
    scanf("%d",&my_marks[i]);
    printf("enter %d subject mark:[int data]",i+2);
    scanf("%d",&my_marks[1]);
    printf("enter %d subject mark:[int data]",i+3);
    scanf("%d",&my_marks[2]);
    printf("enter %d subject mark:[int data]",i+4);
    scanf("%d",&my_marks[3]);
    printf("enter %d subject mark:[int data]",i+5);
    scanf("%d",&my_marks[4]);
    }
    printf("my sub1mark: %d",my_marks[0]);
    printf("my sub2mark: %d",my_marks[1]);
    printf("my sub3mark: %d",my_marks[2]);
    printf("my sub4mark: %d",my_marks[3]);
    printf("my sub5mark: %d",my_marks[4]);
    
    
}





























