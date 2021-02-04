#include<iostream>
using namespace std;


class complex {
	private:
		int re,im;
	public:
		void print(){
			cout<<re<<" + "<<im<<"i\n";
		}

};

//this function gives error
//void printcomplex(complex &c){
//			cout<<c.re<<" + "<<c.im<<"i\n";
//}

int main()
{

	complex c1 = {2,5};
	c1.print();

	return 0;
}
