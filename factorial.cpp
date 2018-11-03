#include <iostream>

using namespace std;

int Fact(int a)
{
	if(a!=1)
		return a*Fact(a-1);
	else if(a==0)
		return 1;
	else
		return 1;
}

int main() {
	int a;
	cin>>a;
	cout<<Fact(a);
	return 0;
}