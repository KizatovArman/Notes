#include <iostream>
#include <stack>
using namespace std;

stack<char> st;

int main() {
	int chisl1;
	cin>>chisl1;
	string s;
	int cnt = 0;
	bool ok = true;
	for (int i = 0; i < chisl1; i++){
	cin >> s;	
	for (int i = 0 ; i < chisl1; i++){
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '[' || s[i] == '{' || s[i] == '(')
			st.push(s[i]);
		else {
			if (st.empty() == true) { // ()]
				ok = false;
				break;
			}
			if (s[i] == ']' && st.top() != '[') {
				ok = false;
				break;
			}
			if (s[i] == '}' && st.top() != '{') {
				ok = false;
				break;
			}
			if (s[i] == ')' && st.top() != '(') {
				ok = false;
				break;
			}
			if (st.size() > 0 || ok == false)
		cout << "NO"<<endl;
			else
		cout << "YES"<<endl;
			st.pop();
			
		}
	}
	
}
}	
	return 0;
}