/*Program to check if number entered by user is prime or not*/
#include <stdio.h>
int main()
{
  int c=0,num;
  printf("Enter a number: \n");
  scanf("%d",&num);
  int i;
  for(i=1;i<=num;i++)
  {
      if(num%i==0)//2%1==0
      {
          c++;
      }
  }
  if(c==2)
  {
      printf(" %d is a Prime no \n",num);
  }
  else
  {
      printf("%d is Not a Prime no \n",num);
  }
    return 0;
}