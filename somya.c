#include<stdio.h>
void main()
{
int a,b,t;
printf("enter two no:");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("ater swipe a=%d b=%d",a,b);
}
