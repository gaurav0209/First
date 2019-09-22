#include<stdio.h>
#include<string.h>
void main()
{
  char str[30],s[30];
  int i,n,j,flag=1;

  printf("Enter the sentence:\n");
  for(i=0;i<strlen(str);i++)
    {


  gets(str[i]);
}
  printf("enter the word \n");
  gets(s);
  for(i=0;i<strlen(str);i++)
  {
     if(strcmp(str[i],s)!=0)
     {
         flag=0;;
     }

  }
  if(flag==1)
  {
      printf("yes");
  }
}
