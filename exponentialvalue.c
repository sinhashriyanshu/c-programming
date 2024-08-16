#include<stdio.h>
int main()
{
  int a,i,b,prod;
  printf("Enter the Base");
  scanf("%d",&a);
  printf("Enter the Power");
  scanf("%d",&b);
  prod=1;
for(i=1;i<=b;i++)
  prod = prod*a;

printf("The Answer is %d",prod);
}
