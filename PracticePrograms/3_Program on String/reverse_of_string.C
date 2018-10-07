//program of reversing the string

#include<stdio.h>
#include<conio.h>

void main()
{int len,i ;
 char *s;
 clrscr();
 printf("enter your string : ");
 scanf("%s",s);
 len=strlen(s);
 for(i=0;i<len/2;i++)
 {
   char temp = s[i];
   s[i] = s[(len-1)-i];
   s[(len-1)-i]=temp;
 }
 printf("%s",s);
 getch();
}