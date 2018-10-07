//program of counting vowel and consonant

#include<stdio.h>
#include<conio.h>

void main()
{int len,i,v=0,c=0;
 char *s;
 clrscr();
 printf("enter your string : ");
 scanf("%s",s);
 len=strlen(s);
 for(i=0;i<len;i++)
 {
   if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
	v++;
   else
	c++;
 }

  printf("%d Vowels and %d consonants ",v,c);
  getch();
}