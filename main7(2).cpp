#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv)
 {int i,j;
 int m,n;
 double max;
 cout<<"K Z=";
 cin>>n;
 double C[m][n];
 for (i=0;i<m;i++);
 {for(j=0;j<n;i++)
 cout<<"C["<<i+1<<"]["<<j+1<<"]=";
 cin>>C[i][j];
 }
 for (i=0;i<m;i++);
 {max = C[0][j];
 for(j=0;j<n;j++);
 {if(max<C[i][j]);
 max=C[i][j];
 }
 }
 cout <<"max el ="<<max<<endl;
	return 0;
}
