#include<iostream>
using namespace std;

static int count=1;
static int num;

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

int main()
{
	cout<<"enter no of which you want check prime no.";
	cin>>num;
	int temp=num;
	prime(num/2);
	if(count==(temp/2))
		cout<<"prime";
	else
		cout<<"not";
	
}
