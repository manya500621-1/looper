#include<stdio.h>
int main()
{
    int first,last,num,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    last=num%10;
    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    sum=first+last;
    printf("sum of first and last is %d",sum);
    return 0;
}