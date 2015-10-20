#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	double S=0;
	int i,n;
	do{cout<<"kilk elem n=";
	cin>>n;
	}
	while(n<=1);
	double a[n];
	for(i=0;i<n;i++)
	{cout <<"a["<<i+1<<"]=";
	cin>>a[i];
	if(i%2) S+=a[i];
	}
	cout <<"Suma ="<<S<<endl;
	return 0;
}
