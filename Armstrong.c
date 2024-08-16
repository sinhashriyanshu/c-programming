#include<stdio.h>
int main()
{
  int n,a,b,sum,last,count=0,prod,i;
  printf("Enter the Numbers");
  scanf("%d",&n);
  b=n=a;
  while(n!=0)
{
 n=n/10;
count++;
}
sum=0;
while(a!=0)
{
last = a%10;
  a=a/10;
prod=1;
for(i=1;i<=count;i++)
  prod = prod*last;
sum= sum+prod;
}
if(sum==b)
  printf("%d is Armstrong",b);
else 
  printf("%d is not Armstrong",b);
}

  
