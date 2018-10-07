#include<iostream>
using namespace std;

void prime(int);
static int num;
static int count; 
int main()
{
	int n;
	cout<<"enter no. upto which you want prime series";
	cin>>n;
	
	for(int i=2;i<=n;i++)
	{
		count=1;
		num=i;
		prime(i/2);
		if(count==(i/2))
			cout<<i<<endl;
		
	}
}

void prime(int n)
{
	if(n==1)
		return;
	else
	{	
		if(num%n==0)
			return;
		else
		{
			count++;
			prime(n-1);
		}
	}
	
}
