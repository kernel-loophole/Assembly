#include<stdio.h>
extern int sumi(int x,int y);
extern int multi(int x,int y);
extern int  subtr(int x,int y);
extern int divi(int x,int y);
int main()
{
    int total;
    int vlaue;
    int vlaue1;
    int choice;
    printf("press 1 for add");
    printf("press 2 for subraction");
    printf("press 3 for mult");
    printf("press 4 for div");
    scanf(choice);
    if (choice==1)
    {
    printf("enter the  first value: ");
    scanf(vlaue1);
    printf("enter the second value:");
    scanf(vlaue);
    total=sumi(vlaue,vlaue1);
    printf("the total is:",total);
        
    }
    else if (choice==2)
    {
       printf("enter the  first value: ");
    scanf(vlaue1);
    printf("enter the second value:");
    scanf(vlaue);
    total=subtr(vlaue,vlaue1);
    printf("the total is:",total);
        
        
    }
    else if (choice==3)
    {
    printf("enter the  first value: ");
    scanf(vlaue1);
    printf("enter the second value:");
    scanf(vlaue);
    total=multi(vlaue,vlaue1);
    printf("the total is:",total);
        
    }
    
    else if (choice==4)
    {
        printf("enter the  first value: ");
    scanf(vlaue1);
    printf("enter the second value:");
    scanf(vlaue);
    total=divi(vlaue,vlaue1);
    printf("the total is:",total);
        
    }
    else
    {
        printf("invlid choice:");

    }
    
    

    
    return 0;
    

}