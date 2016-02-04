#include<stdio.h>

int reverse(int a)
{
    int rev=0,mod;
    while(a)
    {
        mod = a%10;
        a=a/10;
        rev=(rev*10)+mod;
    }
    return rev;
}

int main()
{
    long int x,y,z,i,j,max=0;
    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
        {
            x=i*j;
            y=x;
            z=reverse(y);
            if(z==x)
               // printf("%ld X %ld = %ld\n",i,j,x);
                max=(x>max)?x:max;
        }
    }
    printf("%d",max);
    return 0;
}