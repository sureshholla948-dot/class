#include<stdio.h>
int main(){
    char name;
    float basicsalary=50000,grosssalary;
    int yearsofexperience=7,bonus;
    printf("enter the name:%c",name);
    scanf("%c",&name);
    printf("enter basic salary:%.2f\n",basicsalary);
    scanf("%f",&basicsalary);
    printf("enter the years of experience:%d\n",yearsofexperience);
    scanf("%d",&yearsofexperience);
    if (yearsofexperience<2)
    {
        bonus=0;
   
    }
    else if(yearsofexperience<=5)
    {
        bonus=basicsalary*0.10;
    }
    else 
    {
        bonus=basicsalary*0.20;
    }
       grosssalary=basicsalary+bonus;
}