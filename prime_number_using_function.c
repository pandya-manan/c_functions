#include<stdio.h>
void primeNumberCheck(int num);
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    primeNumberCheck(number);
    return 0;
}

void primeNumberCheck(int num)
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
    if(flag==-1)
    {
        printf("The number %d is a prime number",num);
    }
    else 
    {
        printf("The number %d is not a prime number",num);
    }
}