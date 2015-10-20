#include <iostream>
#include <stdio.h>
#include <math.h>
double Function(double x)
{ return sin(x)+exp(2*x)-tan(x);
}
int main(int argc, char** argv) {
	double x=0;
	do
	{printf("F(%f)=%f\n",x,Function(x));
	x+=0.05;
	}
	while(x<=0.5);
	return 0;
}
