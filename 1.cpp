#include <stdio.h>
int main()
{
int c=0,i;
for(i=0;i<1000;i++)
{
if((i%3==0)||(i%5==0))
{
c=c+i;
}
}
printf("%d",c);
return 0;
}