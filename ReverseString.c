/* Program to reverse a string in C*/
#include <stdio.h>
int main()
{
 char s[100];
 int i,c=0;
 printf("Enter a string: \n");
 scanf("%s",s);
 printf("original string \n");
 for(i=0;s[i]!='\0';i++)
 {
     printf("%c",s[i]);
     c++;
 }
 printf("\n");
 printf("reverse string \n");
 for(i=c-1;s[i]!=0;i--)
 {
     printf("%c",s[i]);
 }

    return 0;
}