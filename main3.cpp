#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
	double x;
	int a,b;
	cout <<"a=";
	cin >>a;
	cout << "b=";
	cin >> b;
	switch(a){
		case 1:switch(b){
			case 1: cout<< "x=0";break;
			case 0:cout<<"x=1";break;
			default: cout <<"Pomulka"; break;}
		case 0:switch(b){
			case 0: cout <<"x=0";break;
			case 1: cout<<"x=1";break;
			default: cout <<"Pomulka";break;}	
	}
	return 0;
}
