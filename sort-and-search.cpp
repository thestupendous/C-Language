#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int ccompare (const void *a, const void *b)
{
	return ( *(int*)a  < *(int*)b );
}

bool cppcompare (int i,int j)
{
	return (i>j);
}

//bool charcompare(char a,char b)
//{
//	return (a<b);
//}

int main(){
	
	int data[]  = {2 ,90 ,-12 , 0b111111, 328, 48};
	int data2[]  = {2 ,90 ,-12 , 0b111111, 328, 48};

	//sorting the c way
	//start ptr, # elements, size, func pointer
	qsort(data, 6, sizeof(int), ccompare);

	for (int i=0;i<6;i++)
		cout<< data[i]<< ' ';
	cout<<endl;


	//sorting c++ way
	//start ptr, end ptr, func pointer
	sort (data2, data2+6, cppcompare);
	cout<<"sorted c++ way\n";

	for (int i=0;i<6;i++)
		cout<< data2[i]<< ' ';
	cout<<endl;

	bool found = binary_search(data,data+6,63,cppcompare);
	cout << "result of binary search : "<<found<<endl;
	int index;
	if(found)
	{
		index = ( lower_bound(data,data+6,63,cppcompare) - data );	
	}
	cout<<"index is : "<<index<<endl;

//	char *name = "c++ Language\0";
 //   sort(name,name+11,charcompare);
//	cout<<"sorted string is : "<<name;	

	return 0;
}

