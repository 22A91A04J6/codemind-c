//average of two number
#include<stdio.h>
float average(int a,int b)
{
    float c=(a+b)*0.5;
    return c;
}
int main()
{
    int a,b;
    float xl;
    scanf("%d%d",&a,&b);
    xl=average(a,b);
    printf("Average of %d and %d is: %0.2f",a,b,xl);
}