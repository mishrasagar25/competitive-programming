//program to find duplicate character , duplicate character occurence , occurence of characters

#include<stdio.h>
#include<conio.h>

int search(char c , char dup[] , int n)
{
  int i;
  for(i=0;i<n;i++)
  {
	if(c==dup[i])
		return i;
  }
  return -1;
}
void main()
{
 int i,j,c=0,count[100];
 char *s,dup[100];
 clrscr();
 printf("enter your string : ");
 scanf("%s",s);
 for(i=0;i<strlen(s);i++)
 {
    if(i==0)
    {
       dup[c]=s[c];
       count[c]=1;
       c++;
    }
    else
    {
       int n = search(s[i],dup,c);
       if(n != -1)
       {
	 count[n]++;
       }
       else
       {
	 dup[c]=s[i];
	 count[c]=1;
	 c++;
       }
    }
 }

 printf("alphabets \t no. of occurence\n");
 for(i=0;i<c;i++)
 {
    printf("%c \t \t\t %d\n",dup[i],count[i]);
 }
 printf("duplicate character    no. of occurence\n");
 for(i=0;i<c;i++)
 {
   if(count[i]>1)
   {
    printf("%c \t \t \t%d\n",dup[i],count[i]);
   }
 }
 getch();

}