#include <iostream>

using namespace std;

int Fibo(int n)
{	
	int firstnum = 1;
	int secondnum = 1;
	int next,prev;

	if(n == 1 or n == 2)//print first two terms of the sequence
		return 1;
	//for other terms
	else {
		int k = 2;
		while(k<n)
		{	
			next = firstnum + secondnum;
			firstnum = secondnum;//first = prev;
			secondnum = next;
			k++;

		}
		return next;
	}
}

int main() {
	int a;
	cin>>a;
	cout<<Fibo(a);

	return 0;
}