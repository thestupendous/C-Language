#include<iostream>
#include<cstring>
using namespace std;

class myvars {
	public:
		int a,b, *p;

		myvars(int x=0,int y=0,int z=0):
			a(x),b(y),p(new int(z)){
				cout<<" constructor for myvars\n";
			}
// ******** uncomment the below constructor to enable deep copying and eliminate the disastrous problem with m1,m2 and m3 objects
//		myvars(const myvars& mv):
//			a(mv.a),b(mv.b),p(new int(*(mv.p))){
//				cout<<"copy constructor for myvars\n";
//			}

		myvars& operator= (const myvars& mv){
			if (this==&mv) return *this; //read below comment first, a solution to self copy (Ex- obj1=obj1)
			a = mv.a; b=mv.b;
		    delete p;         //this frees the previous value p was holding, to avoid memory leakage. NOTE: may prove disastrous in case of self copy, bcause delete is done befory copying
			*p= *mv.p ;
			cout<<"copy assignment operator for myvars\n";
			return *this;
		}

		void print(){
			cout<<a<<' '<<b<<' '<<*p<<endl;
		}

};


int main()
{
	myvars m1(1,2,3);

	cout<<"obj1 values "; m1.print();
cout<<"\t\t--.\n";
	myvars m2(m1);							//shallow copy is done here bcause compiler provided copy constructor does bit-copy
	cout<<"obj2 values "; m2.print();		// the result is p variables of both m1 and m2 are pointing to same integer, changing one affects the other object
	* m2.p = 99;
	cout<<"updated value of * (obj2.p) to 99, now value of *(obj1.p) = "<<*m1.p<<endl;
cout<<"\t\t--.\n";
	
	myvars m3;
	m3=m2;
	cout<<"obj2 values "; m2.print();
cout<<"\t\t--.\n";



	return 0;
}
