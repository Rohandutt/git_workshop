#include<stdio.h>
int main()
{
int i,n;
long f;
printf("\nEnter a number whose factorial is to be calculated:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{f*=i;}
printf("\nThe factorial is %ld",f);
return 0;
}

