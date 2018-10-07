#include<stdio.h>

struct complex{
	int realpart,imaginary;
};

int main()
{
	struct complex c1,c2,c3;
	int num;
	printf("Enter value of a and b complex number a + ib.\n");

    printf("value of complex number a is = ");

    scanf("%d", &c1.realpart);

    printf("value of complex number b is = ");

    scanf("%d", &c1.imaginary);
    
    printf("Enter value of c and d complex number c + id.\n");

    printf("value of complex number c is = ");

    scanf("%d", &c2.realpart);

    printf("value of complex number d is = ");

    scanf("%d", &c2.imaginary);
    
    printf("press 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division\n : ");
    scanf("%d",&num);
    
    switch(num)
    {
    	case 1:
    		c3.realpart = c1.realpart + c2.realpart;
    		c3.imaginary = c1.imaginary + c2.imaginary;
    		break;
    	case 2:
			c3.realpart = c1.realpart - c2.realpart;
    		c3.imaginary = c1.imaginary - c2.imaginary;
    		break;
    	case 3:
    		c3.realpart = c1.realpart * c2.realpart;
    		c3.imaginary = c1.imaginary * c2.imaginary;
    		break;
    	case 4:
    		c3.realpart = c1.realpart / c2.realpart;
    		c3.imaginary = c1.imaginary / c2.imaginary;
    		break;
		
	}
	
	printf("a+ib : %d+i%d",c3.realpart,c3.imaginary);
    
}
