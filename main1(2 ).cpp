#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	double y,x,a,b;
	cout <<"a=";
	cin >>a;
	cout << "x=";
	cin >>x;
	cout <<"b=";
	cin >>b;
	y=log10(tan(a*x))+(pow((b*x),2.0/7.0))/(arcsin(x))-exp(a+x);
	cout << "y="<<y<<endl;
	return 0;
}
