#include<stdio.h>
#include<conio.h>

int length;
void swap(char * , int , int);
void rev(char *s)
{
	static pos = 0,len=0;
	if(pos >= length/2)
		return;
	else
	{       len++;
		swap(s , pos , length-len);
		pos++;
	}
}

void swap(char *s , int i , int j)
{
 char temp;
 temp = s[i];
 s[i] = s[j];
 s[j] = temp;
}
void main()
{       char *s = "sagar";
	clrscr();
	length = strlen(s);

	rev(s);
	printf("%s",s);
	getch();
}