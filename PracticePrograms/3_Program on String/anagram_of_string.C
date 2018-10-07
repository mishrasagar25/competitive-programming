//program to check if two given strings are anagrams of Each other. Two strings are anagrams if they are written using the same exact letters, ignoring space, punctuation and capitalization. Each letter should have the same count in both strings. For example, Army and Mary are anagram of each other.

#include<stdio.h>
#include<conio.h>

void convert_case(char *s)
{
  int i;
  for(i=0;i<strlen(s);i++)
  {
   if(s[i] >= 'A' && s[i] <= 'Z')
   {
	s[i] += 32;
   }
  }
}

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
 char *s,*s1,dup[100];
 int count1[100],count2[100]={0},i,c1=0,c2=0,check1=0,check2=0;
 clrscr();
 printf("enter first string : ");
 scanf("%s",s);
 printf("enter second string : " );
 scanf("%s",s1);

 convert_case(s);
 convert_case(s1);

 for(i=0;i<strlen(s);i++)
 {
   if(i==0)
   {
	dup[0]=s[0];
	count1[0]=1;
	c1++;
   }
   else
   {
      int n=search(s[i],dup,c1);
	if(n!=-1)
	{
	 count1[n]++;
	}
	else
	{
	 dup[c1]=s[i];
	 count1[c1]=1;
	 c1++;
	}
   }

 }


 for(i=0;i<strlen(s1);i++)
 {
   int n=search(s1[i],dup,c1);
   if(n!=-1)
	count2[n]++;
   else
   {
	check1++;
   }
 }

 if(check1<0)
 {
  for(i=0;i<c1;i++)
	if(s[i]!=s1[i])
		check2++;
 }

 if(check2>0 || check1>0)
 {
	printf("given strings are not anagrams of each other");
 }
 else
	printf("given strings are anagrams of each other");

 getch();
}