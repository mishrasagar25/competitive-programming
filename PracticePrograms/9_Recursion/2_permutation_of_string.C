#include<stdio.h>
#include<conio.h>

void swap(char * ,char *);
void permutation(char *s , int i , int n)
{
  static int count;
  int j;
  if(i == n)
  {
   count++;
   printf("%d: %s\n",count,s);
  }
  else
  {
    for(j=i;j<=n;j++)
    {
     swap((s+i),(s+j));
     permutation(s,i+1,n);
     swap((s+i),(s+j)); //backtrack
    }
  }
}

void swap(char *s1 ,char *s2)
{
  char ch;
  ch = *s1;
  *s1 = *s2;
  *s2 = ch;
}


void main()
{
 char *str;
 clrscr();
 printf("enter a string : ");
 gets(str);
 permutation(str,0,strlen(str)-1);
 getch();
}