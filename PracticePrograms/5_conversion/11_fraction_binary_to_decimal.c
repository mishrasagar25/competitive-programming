#include<stdio.h>

int main(){
	
	char binary[20],real[20],fractional[20];
	int point , i=0 , j , temp , cr=0 , cf=0 , intr=0;
	double intf = 0.0,tempd,recP,decimal;
	printf("enter binary no : ");
	scanf("%s",&binary);
	
	while(binary[i] != '\0')
	{
		if(binary[i]=='.')
		{
			point = i;
			break;
			
		}	
		real[i]=binary[i];
		cr++;
		i++;	
	}
	real[i]='\0';
	
	i=0;
	j = ++point;
	
	while(binary[j] != '\0')
	{
		fractional[i++] = binary[j++];
		cf++; 
	}
	fractional[i] = '\0';
	
	j=0;
	for(i=cr-1;i>=0;i--)
	{	
		temp = real[i] - '0';
		intr = intr+(temp*power(j));
		j++;
	}
	
	for(i=0;i<cf;i++)
	{
		tempd = fractional[i] - '0';
		//recP = (1/power(i));
		//printf("%f\n",recP);
		intf = intf + (tempd * (1.0/power(i+1)));
	}
	
	decimal = intr+intf;
	printf("%f",decimal);
	
			
}

int power(int p)
{
	int result=1,i;
	
	for(i=1;i<=p;i++)
	{
		result = result*2;
	}
	return result;
}
