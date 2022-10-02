/* Program to calculate the sum and average of the array elements*/
#include <stdio.h>
int main()
{
  int a[100],sum,size;
  float avg=0.0;
  int i;
    printf("Enter the array size: \n");
    scanf("%d",&size);
    printf("Enter array elements \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    avg=sum/size;
    printf("Sum of numbers %d \n",sum);
    printf("Average of numbers %.1f \n",avg);

    return 0;
}