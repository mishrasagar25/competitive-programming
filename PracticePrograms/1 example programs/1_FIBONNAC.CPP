//program of fibonnaci serien upto n elements

#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int a=0,b=1,n;
 cout<<"no. of elements in series";
 cin>>n;
 cout<<"fibonnaci series upto "<< n <<"elements"<<endl;
 cout<<a<<endl<<b<<endl;
 for(int i=0;i<n-2;i++)
 {
   int c=a+b;
   cout<<c<<endl;
   a=b;
   b=c;
 }
 getch();
}