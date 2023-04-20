#include <stdio.h>

double power(double n, int p);

int main(void)
{
    int exp;
    double x, xpow; // xpow = x^exp

    printf("Enter a number and the integer power:\n");

    while(scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3f to the power %d is %.5f\n", x, exp, xpow);
        printf("Please enter the next number:\n");
    }

    printf("Program Exit!\n");

    return 0;
}

double power(double n, int p)
{
    int i;
    double pow = 1;

    if( p == 0)
    {
	    if(n == 0)
		    printf("0 power 0 is undefined and useless, using 1 as it value.\n");
	    pow = 1;
    }
    
    else if(n == 0)
	    pow = 0;
    else if(p > 0)
    	for (i = 1; i <= p; i++)
	        pow *= n; // 1*n, n*n, n*n*n, n*n*n*n
	else
		for(i = 1; i <= -p; i++)
			pow *= 1/n;

    return pow;
}
