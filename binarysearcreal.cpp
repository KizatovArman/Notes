#include <iostream>
#include <cmath>

using namespace std;

void binary_search(int *a,int k,int size)
{
	int l =0;
	int r =size-1;
	while(l<r)
	{
		int medium = (l+r)/2;
		if(a[medium] < k)
		{
			l = medium+1;
		}
		else
		{
			r= medium;
		}
		
	}
	if(a[r] == k){
			cout<<"YES"<<endl;
		}
	if(a[r] != k)
	{
		cout<<"NO"<<endl;
	}
}

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i =0;i < n;i++)
	{
		cin>>a[i];
	}
	
	int b[k];
	for(int j =0;j <k;j++)
	{
		cin>>b[j];
	}
	for(int i =0;i <k;i++)
	{
		//cout << "ok" << endl;
		binary_search(a,b[i],n);
	}
	return 0;
}