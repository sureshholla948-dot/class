#include<stdio.h>
int read_array_size(){
    int size; //local variable
    printf("ENTER THE ARRAY SIZE [>4]:");
    scanf("%d",&size);
    return size;
}
int validation_array_size(int array_size){
    if(array_size>4){
        return 1;
    }
    return 0;
}

int main()
{
    int isvalid=1;
    int arraysize = read_array_size();  //calling method & stores return value
    //int isvalid = validation_array_size(arraysize);   //passing arraysize; int array_size=arraysize

    
    while (isvalid==1)
    {
       arraysize= read_array_size();
       int validated=validation_array_size(arraysize);
       if(validated==1)
       {

          break;        
       }
    }   printf("not valid");
       
    for(int i=0;i<arraysize;i++)
    {

    } 
}

