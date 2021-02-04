#include<iostream>
using namespace std;
#include<string>

class name{
	public:
		string fname,lname;
		name(string fn="",string ln=""):
			fname(fn),lname(ln){
				cout<<"default constructor called\n";
			}
		name(const name& n):
			fname(n.fname), lname(n.lname)
			{
				cout<<"copy constructor called\n";
			}
};

void print(name n){
	cout<<n.fname<<' '<<n.lname<<endl;
}
int main()
{
	name zoro;
	zoro.fname="Roronoa";
	zoro.lname="Zoro";

	print(zoro);

	return 0;
}
	
