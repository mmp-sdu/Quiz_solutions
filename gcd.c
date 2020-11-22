#include <stdio.h>
#include<math.h>
// compute greatest common divisor
int gcd(int n1, int n2)
{
	if(n1==0 || n2==0)
        return 0;
    else if(n1==n2)
        return n1;
    else if(n1>n2)
        return gcd(n1-n2, n2);
    else
        return gcd(n2, n1-n2);

}
int main()
{
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
	int m = gcd(n1,n2);
    printf("GCD of %d and %d is %d",n1, n2, m);

    return 0;
}
