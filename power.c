#include<stdio.h>

/* Function to calculate x raised to the power y */
int power(int a, int n)
{
	if(n==0)
        return 1;
	if(n==1)
        return a;
    return power(a, n-1) * a;


}

/* Program to test function power */
int main()
{
	int a = 2;
	int n = 3;

	printf("%d^%d=%d",a, n, power(a, n));
	return 0;
}
