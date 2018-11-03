#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
	int n,x;
	cin>>n;
	vector<int> a;
	for (int i = 0; i < n; i++){
		cin>>x;
		a.push_back(x);
	}

	sort(a.begin(),a.end());
	for (int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}