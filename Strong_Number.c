
#include<stdio.h>
int main()
{
    int n,q,fact,result,rem,i;
    scanf("%d",&n);
    q=n;
    fact=1;
    result=0;
    while(q!=0)
    {
        rem=q%10;
        for(i=1;i<=rem;i++)
        {
            fact*=i;
        }
        result +=fact;
        fact=1;
        q=q/10;
    }
    if(result==n)
    {
        printf("The number %d is a strong number",n);
    }
    else

{
    printf("The number %d is not a strong number",n);
}
}