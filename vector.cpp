#include<iostream>
#include<vector>

using namespace std;

#define size 5

int main()
{
	vector<int> arr1;
	vector<int> arr2(size);

	arr2[3] = 921;
	for (int i=0;i<size;i++)
	{
		cout<<arr2[i]<< ' ';
	}
	cout<<endl;
	

	arr2.resize(10);
	for (int i=0;i<10;i++)
	{
		cout<<arr2[i]<< ' ';
	}


	return 0;
}
