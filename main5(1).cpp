#include <iostream>
#include <stdio.h>
#include <math.h>
double Functoin(double x){
	return sin(x)+exp(2*x)-tan(1);
}
int main(int argc, char** argv) {
	double x=0;
	while(x<=0.5){
	
	printf ("F(%f)=%f\n",x,Functoin(x));
	x+=0.05;
}
	return 0;
}
