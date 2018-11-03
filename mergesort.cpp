#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int num(string s)
{
	int k = 0;
	for (int i = s.size() - 1; i >= 0; i--) k += ((s[i] - 48) * pow(10, s.size() - 1 - i));
	return k;
}


int cnt =0;
void merge(int *a,int l,int r)
{
	int mid = (l+r)/2;
	int i =l;
	int j = mid+1;
	int k =l;

	int temp[500010];

	while(i <=mid && j <= r)
	{
		if(a[i] < a[j]){
			temp[k++] = a[i++];
		}
		else{
			temp[k++] = a[j++];
		}
		cnt++;
	}
	while(i<=mid)
	{
		temp[k++] = a[i++];
		cnt++;
	}
	while(j<=r)
	{
		temp[k++] =a[j++];
		cnt++;
	}
	for(int i =l;i <=r;i++)
	{
		a[i] = temp[i];
	}
}

void mergesort(int *a, int left, int right)
{
	if(left>=right)
	{
		return;
	}
	
	int m = (right+left)/2;
	mergesort(a, left,m);
	mergesort(a, m+1,right);

	merge(a,left,right);
	
}

int main()
{
	/*string s,k;
	getline(cin,s);
	stringstream ss;
	ss<<s;
	while(ss>>k)
	{
		int x = num(k);
		a[i] = x;
		i++;
	}*/
	int n;
	cin>>n;
	int a[500010];
	for(int i =0;i < n; i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int j =0;j < n-1;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<a[n-1]<<"\n"<<cnt<<endl;
	return 0;
}















