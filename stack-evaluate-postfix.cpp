#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	string exp;
    cin>> exp;

	double res;
	
	stack<char> st;	
	int op1,op2;

	for(int i=0;i<exp.size();i++)
	{
		switch (exp[i]){
			case '+' :
				op2 = st.top();st.pop();
				op1 = st.top();st.pop();
				st.push(op1+op2);
				break;
			case '-' :
				op2 = st.top();st.pop();
				op1 = st.top();st.pop();
				st.push(op1-op2);
				break;
			case '/' :
				op2 = st.top();st.pop();
				op1 = st.top();st.pop();
				st.push(op1/op2);
				break;
			case '*' :
				op2 = st.top();st.pop();
				op1 = st.top();st.pop();
				st.push(op1*op2);
				break;
			default:
				st.push(exp[i]-'0');
		}
	}

	res = st.top(); st.pop();

	cout<<"result is : "<<res<<endl;

	return 0;
}
					

