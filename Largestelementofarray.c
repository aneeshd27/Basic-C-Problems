/*Program to find the largest element of the array*/
#include <stdio.h>
int main()
{
  int a[100],max,size;
  int i;
    printf("Enter the array size \n");
    scanf("%d",&size);
    printf("Enter array elements \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Largest element of the array  %d\n",max);
    return 0;
}