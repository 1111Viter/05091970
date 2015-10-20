#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
double const C=1.231;
double const D=1.152;
int main(int argc, char** argv) {
	double A,x,y;
	cout <<"x=";
	cin >>x;
	cout <<"y=";
	cin >>y;
	if(x>y) A=tan(C)+x*exp(y);
	if(x<=y) A=log10(10)+ D*x;
	cout <<"A="<< A<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
