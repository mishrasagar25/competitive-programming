#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==1 || n==2)
		return 1;
	else
	 return (fib(n-1)+fib(n-2));
}
int main()
{
	int n;
	cout<<"enter the no. of element upto which you want fibonnaci series";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<fib(i)<<endl;
	}
}
