//One of the most common string interview questions: Find the first non-repeated (unique) character in a given string. for Example if given String is "Morning" then it should print "M". This question demonstrates efficient use of Hashtable. We scan the string from left to right counting the number occurrences of each character in a Hashtable. Then we perform a second pass and check the counts of every character. Whenever we hit a count of 1 we return that character, that’s the first unique letter. Be prepared for follow-up question for improving memory efficiency, solving it without hash table as well.


#include<stdio.h>
#include<conio.h>

int search(char c, char dup[] ,int len)
{
  int i;
  for(i=0;i<len;i++)
  {
   if(dup[i]==c)
	return i;
  }
  return -1;
}
void main()
{
 char *s,dup[100];
 int count[100],i,c=0;
 clrscr();
 printf("enter your string : ");
 scanf("%s",s);

 for(i=0;i<strlen(s);i++)
 {
   if(i==0)
   {
	dup[0]=s[0];
	count[0]=1;
	c++;
   }
   else
   {
      int n=search(s[i],dup,c);
	if(n!=-1)
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

 for(i=0;i<c;i++)
 {
  if(count[i]==1)
  {
	printf("%c",dup[i]);
	break;
  }

 }
 getch();
}