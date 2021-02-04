#include<iostream>
#include<cmath>
using namespace std;
class point {
	public:
		int x,y;
};

class rect { //uses point class
	public:
		point tl,br; //points top-left and bottom-right

		int area(){
			int len = abs( tl.x - br.x );
			int bre = abs( tl.y - br.y );
			return len * bre ;
		}
};

class stack {
		char data[200];      // these data members are private by default
	public:
		int top;

		bool empty(){
			return (top==-1);
		}

		char ret_top(){
			return data[top];
		}

		void push(char c){
			data[++top] = c;
		}

		char pop(){
			return data[top--];
		}
};

class complex {
	public:
		double re,im;

		double norm(){
			return sqrt( re*re + im*im );
		}

		void print(){
			cout<< re <<" + "<<im<<"i\n";
			cout<< "normal = "<< norm()<< endl;
		}
};

int main()
{
	rect box = { {1,2},{5,1} };
//	cout<< "rectangle is "<<box.tl<<", "<<box.br<<endl;
	cout<<"area : "<<box.area()<<endl;

	//reversing a string using stack
	stack s;
	s.top = -1;
	char str[] = "ABCEDF";
	for(int i=0;i<6;i++)
	{
		s.push(str[i]);
	}
	
	while (! s.empty())
	{
		cout<<s.pop();
	}
	cout<<endl;

	complex c1 = { 3,4 };
	c1.print();

	return 0;
}

