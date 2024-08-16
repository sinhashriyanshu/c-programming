#include<stdio.h>
int main()
{
  int n,count=0,i;
  printf("Enter the Numbers");
  scanf("%d",&n);
  if (n==0);
  while(n!=0)
{
 n=n/10;
count++;
}
printf("The Number Of Digits is %d",count);
}
