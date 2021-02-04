#include<iostream>
using namespace std;
#include<cmath>
#include"myfunc.h"
double circumference(double radius,double pi=3.14)
{
	return ( 2 * pi * radius ) ;
}

int main()
{
	double r = 5;

	cout<< "for r="<<r<<" circumference is = "<<circumference(5)<<endl;;
	//cout<<M_PI<<endl;
	cout<< "for r="<<r<<" and using precise value of PI circumference is = "<<circumference(5,M_PI)<<endl;;
	
	cout<<"sum of 2 3 5 = "<<sumofprimes(2,3,5)<<endl;
	cout<<"sum of 2 3 97 = "<<sumofprimes(2,3)<<endl;
	return 0;
}



