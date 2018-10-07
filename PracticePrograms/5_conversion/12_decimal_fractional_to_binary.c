#include<stdio.h>

int main()
{
	char decimal[20],real[20],fractional[20],binr[20],binf[20];
	int j,point,i=0,cr=0,cf=0,realv=0,f=1,temp;
	double fraction,frac=0;
	printf("enter decimal no. : ");
	scanf("%s",decimal);
	
	while(decimal[i] != '\0')
	{
		if(decimal[i]=='.')
		{
			point = i;
			break;
			
		}	
		real[i]=decimal[i];
		cr++;
		i++;	
	}
	real[i]='\0';
	
	i=0;
	j = ++point;
	
	while(decimal[j] != '\0')
	{
		fractional[i++] = decimal[j++];
		cf++; 
	}
	fractional[i] = '\0';
	
	for(i=0;i<cr;i++)
	{
		realv = realv*10 + (real[i]-'0');
	}
	
	for(i=0;i<cf;i++)
	{
		frac = frac*10 + (fractional[i] - '0');
		f = f*10;
	}
	
	frac = frac/f;
	i=0;
	while(realv)
	{
		binr[i++] = realv%2+'0'; 
		realv = realv/2;	
	}	
	
	binr[i] = '\0';
	
	for(i=0;i<5;i++)
	{
		frac = 2*frac;
		temp = (int) frac;
		frac = frac-temp;
		//printf("%d:%f\n",temp,frac);
		binf[i]= temp +'0';
	}
	binf[i] = '\0';
	printf("%s.%s",binr,binf);
	
}
