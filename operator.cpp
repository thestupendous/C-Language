#include<iostream>
using namespace std;

typedef struct rectangle {
	int l,b;
} rect;

rect operator+(const rect& a, const rect& b)
{
	rect x ;
	x.l = a.l + b.l;
	x.b = a.b + b.b;

	return x;
}

int main()
{

	rect a = {4,5}, b={10,20};

	rect c = a + b;  //using overloaded operator for struct

	cout<<" length and breadth of new rectangle are "<<c.l<<' '<<c.b<<endl;



	return 0;
}
