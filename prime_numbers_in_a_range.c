#include<stdio.h>
int primeNumberCheck(int num);
int main()
{
    int lower,upper;
    printf("Please enter the lower range\n");
    scanf("%d",&lower);
    printf("Please enter the upper range\n");
    scanf("%d",&upper);
    for(int i=lower;i<=upper;i++)
    {
        int result=primeNumberCheck(i);
        if(result==-1)
        {
            printf("%d ",i);
        }
    }
    return 0;
    
}

int primeNumberCheck(int num)
{
    int flag=-1;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            continue;
        }
    }
    return flag;  
}