#include<stdio.h>
int main()
{
    int count=0,rem,num;
    printf("enter a number:");
    scanf("%d",&num);
    
    while(num!=0)    {
        num=num/10;
        
        count++;
    }

    printf("%d",count);
    
    return 0;

}