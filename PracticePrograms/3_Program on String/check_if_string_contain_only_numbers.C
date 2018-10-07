//program to check if a String contains only digits

#include<stdio.h>
#include<conio.h>

void main()
{int len,i,check=1 ;
 char *s;
 clrscr();
 printf("enter your string : ");
 scanf("%s",s);
 len=strlen(s);
 for(i=0;i<len;i++)
 {
    if(s[i]<48 && s[i]>57)
    {
      check=0;
    }
 }
  if(check==1)
	printf("also string");
  else
	printf("only numbers");
  getch();
}