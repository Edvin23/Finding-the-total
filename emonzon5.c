//Edvin Monzon
//CSC - 321
//Lab #5

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(void)
{

	int x = 5;
	int y = 10;
	int total = 0;

	total = x+y*x/y-x%y;

	printf("Total is %d " , total);
}
