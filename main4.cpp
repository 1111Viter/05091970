#include <iostream>
#include <math.h>
#define a 2.1
using namespace std;
int main(int argc, char** argv) {
	double S;
	int i,n;
	cout <<"N=";cin>>n;
	S=0;
	for(i=1; i<=n; i++)
	{S+=pow(1/i,2)+pow(a,i);}
	cout <<"S="<<S<<endl;
	return 0;
}
