#include<stdio.h>
#include<conio.h>

int n;
int a[]={234,2,23,52,51,12};

void insertElement(int pos , int element , int size)
{ int i;
  for(i=size;i>pos;i--)
  {
   a[i] = a[i-1];
  }
  a[pos] = element;
  n++;
}

void deleteElement(int pos)
{ int i;
  for(i=pos;i<n-1;i++)
  {
    a[i] = a[i+1];
  }
  n--;
}

void main()
{
 int i,insert_pos,delete_pos,insert_element;
 clrscr();
 printf("enter position at which you want to insert element : ");
 scanf("%d",&insert_pos);
 printf("enter element to insert : ");
 scanf("%d",&insert_element);
 n = sizeof(a)/sizeof(a[0]);
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);
 printf("after inserting\n");
 insertElement(insert_pos-1 , insert_element , n);
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);

 printf("enter the position at which you want to delete element");
 scanf("%d",&delete_pos);
 deleteElement(delete_pos-1);
 printf("after delete element at position %d \n" , delete_pos-1);
 for(i=0;i<n;i++)
	printf("%d\n",a[i]);
 getch();
}