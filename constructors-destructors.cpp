#include<iostream>
#include<cmath>
using namespace std;

class stack {
		char *data;      // these data members are private by default
		int top;
	public:
		stack(): top(-1), data(new char[200]){
			cout<<"constructor was called for stack\n";
		}

		~stack();

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
int init_bre(int b){
	cout<<"initialisation of breadth\n";
	return b;
}

int init_len(int l){
	cout<<"initialisation of length\n";
	return l;
}

class rect {

	public:
	int len;
	int bre;
		rect(int len, int bre) :
			bre(init_bre(bre)),  //notice that breadth var comes first before length variable in intialiser list
			len(init_len(len))
		{
			cout<<"constructor body for rect\n len= "<<len<<", bre="<<bre<<endl;
		}

		~rect(){
			cout<<"destructor for rect\n len= "<<len<<", bre="<<bre<<endl;
		}

};

stack::~stack(){
	cout<<"destructor was called for stack\n";
	delete [] data;
}

int main()
{

	//reversing a string using stack
	stack s;
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


	rect *r = new rect(3,9); //constructor is called when new operator is used for creating object
							 //this means that automatic call won't be made for destructor
	r[0].len = 90;

	rect r1(100,500);


	return 0;
}

