#include<stdio.h>
 
int main()
{
    long long int d=0,a=0,b=1,c=0,i;
    for(i=0; b<4000000; i++)
    {
        c= a+b;
        if(c%2==0)
        {
            d=d+c;
        }
 
        a=b;
        b=c;
    }
    printf("%lld",d);
    return 0;
}