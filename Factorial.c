#include <stdio.h>
int main()
{
   int i,num;
   printf("Enter a number: \n");
   scanf("%d",&num);
    int f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    printf("Factorial of number %d is %d \n",num,f);
    return 0;
}