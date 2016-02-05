#include<stdio.h>

int main()
{
 int rs=0,i=20;
 bool flag=false;
 
while(!flag)
 {
 rs+=20;
 for(i=20; i>0; i--)
 {
 if(rs%i!=0)
 {
 break;
 }
 }
 if(i==0)
 {
 flag = true;
 }
 }
 printf("%d",rs);
}