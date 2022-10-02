#include <stdio.h>
/*Program to search a character entered by user in a string*/
#include<string.h>
int main()
{
 char s[100];
 int i,c=0;
 char ch;
 int pos=-1,flg=0;
 printf("Enter a string: \n");
 gets(s);
 printf("Enter character to be searched: \n");
 scanf("%c",&ch);
 printf("original string \n");
 printf("%s \n",s);
 printf("\n");
  for(i=0;i<strlen(s);i++)
 {
     if(s[i]==ch)
     {
         pos=i;
         flg=1;
         break;
     }

 }
 if(flg==1)
 {
     printf("Character %c is found at location %d \n",ch,pos);
 }
 else
 {
     printf("Character  not found \n");
 }


    return 0;
}

