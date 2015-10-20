#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	double u,g,w,v;
	cout <<"vvedit u=";
	cin >>u;
	cout <<"vvedit g=";
	cin >> g;
	w=sin(u-2*g)+exp(g)*(sqrt(u+g));
	v=pow((g-2*u),2)-u*cos(g)/(3-4*u);
	cout<<"w="<<w<<endl<<"v="<<v<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
