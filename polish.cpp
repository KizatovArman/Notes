#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int make_numb(string s)
{
	int x = 0;
	for(int i = s.size()-1;i>=0; i--)
	{
		x =x +((s[i] - 48) * pow(10,s.size() - 1 - i));
	}
	return x;
}

int main() {
	string s,k;
	stack<int> st;
	getline(cin,s);
	stringstream ss;
	ss<<s;
	while(ss>>k)
	{
		if(k == "+")
		{
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(b+a);
		}
		else if(k == "-")
		{
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(b-a);
		}
		else if(k == "*")
		{
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(b*a);
		}
		else
		{
			int y = make_numb(k);
			st.push(y);
		}
	}
	cout<<st.top()<<"\n";
	return 0;
}