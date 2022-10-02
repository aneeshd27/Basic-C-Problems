/*Program to calculate the sum of first 25 natural numbers*/
#include <stdio.h>
int main()
{
 int sum=0;
 int i;
 for(i=1;i<=25;i++)
 {
     sum+=i;
 }
printf("Sum of first 25 numbers %d \n",sum);

    return 0;
}