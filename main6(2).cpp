#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	int i,n,k,b =0;
	cout<<"Kilk elem n=";
	cin>>n;
	cout<<"Vedit b=";
	cin >> b;
	double a[n],maxvid;
	for(i=1;i<=n;i++);
	{cout<<"a["<<i<<"]=";
	cin>>a[i];
	}
	if(a[1]<=b);
	{for(i=1;i<=n;i++);
	if(a[i]==0) k+=1;
	cout<<"a[1]<=b,otje kilk elem yaki=0 =";
	cout<<k<<endl;
}
	else
	{for(i=1;i<=n;i++);
	{maxvid=a[i];
	}
	}
	cout <<"a[1]>b, otj max el="<<maxvid<<endl;
	return 0;
}
