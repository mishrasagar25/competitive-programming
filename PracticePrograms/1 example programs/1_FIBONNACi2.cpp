#include<iostream>
using namespace std;

int main()
{
	int a=1,b=1,n;
	cout<<"enter upto which you want fibonnaci series";
	cin>>n;	
	for(int i=0;i<n;i++)
	{
		cout<<a<<endl;
		int temp=a;
		a=b;
		b=temp+b;
	}
}
