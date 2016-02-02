#include<stdio.h>
 
int main()
{
    long long int a,b;
    //b=17;
    b=600851475143;
    int f=2,hf;
    while(b>1)
    {
        if(b%f==0)
        {
            hf=f;
            b=b/f;
            while(b%f==0)
            {
                b=b/f;
            }
 
        }
        f=f+1;
    }
    printf("%d",hf);
    return 0;
}