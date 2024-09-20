// Write a program to find the LCM of two numbers entered by the user.

#include<stdio.h>

int main()
{
    int a,b,lcm=1;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            lcm=i;
        }
    }
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}
