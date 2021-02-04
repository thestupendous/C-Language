#include<iostream>
using namespace std;
//#include<string>
#include<cstring>

int main()
{
	//editing and changing string, both allowed
	char * str = strdup("Man vs Wild");
	str[0] = 'W';
	cout<< str<< endl;
	str = strdup("abra ka dabra");
	cout << str << endl;

	//editing not allowed, but string can be changed, meaning, new string can replace the existing string
	const char * str1 = strdup("Man vs Wild");
	//str1[0] = 'W';   //Error: because str can't change data 
	//cout<< str1<< endl;
	str1 = strdup("abra ka dabra");
	cout << str1 << endl;

	//string can not be replaced  but same string can be edited
	char *const str2 = strdup("Man vs Wild");
	str[0] = 'W';
	cout<< str2<< endl;
	//str2 = strdup("abra ka dabra");  //Error: can't point to other value
	//cout << str2 << endl;

	//editing and changing bot NOT allowed
	const char * const str3 = strdup("Man vs Wild");
	str3[0] = 'W';
	cout<< str<< endl;
	str3 = strdup("abra ka dabra");
	cout << str3 << endl;

	return 0;
}
