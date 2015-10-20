#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv)
 {int i,j;
 int m,n;
 cout<<"K r =";
 cin>> m;
 cout<<"K S=";
 cin>>n;
 double C [m][n],x[m];
 for(i=1;i<=m;i++)
 {cout <<"C["<<i<<"]["<<j<<"]=";
 cin >>C[i][j];
 }
 for(i=1;i<=m;i++);
 {for(j=1;i<=n;j++);
 }
 {if (C[i][j]>0);
  x[i]+=C[i][j];
 }
 cout<<"x["<<i<<"]="<<x[i]<<endl;
	return 0;
}
