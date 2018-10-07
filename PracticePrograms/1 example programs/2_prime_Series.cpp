#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the no. upto which you want prime numbers series";
	cin>>n;
	
	for(int i=2;i<=n;i++)
	{	bool flag=true;
		
		for(int j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			 {
			 	flag=false;
				 break;	
			 } 
		}
		if(flag)
			cout<<i<<endl;
		
	}
		
}
