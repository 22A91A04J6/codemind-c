#include<stdio.h>
int main()
{
    int a,i,dig,pro=1,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        dig=a%10;
        sum=sum+dig;
        pro=pro*dig;
        a=a/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}