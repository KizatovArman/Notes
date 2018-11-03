#include <iostream>

using namespace std;

void quickSort(int *a,int l, int r)
{
	int init_l =l;
	int init_r =r;
	int mid = a[(l+r)/2];
	while(l<r)
	{
		while(a[l] < mid) l++;
		while(a[r] > mid) r--;
		if(l<=r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	if(init_l <r)
		quickSort(a,init_l,r);
	if(l < init_r)
		quickSort(a,l,init_r);
}

int main(){
	int n;
	cin>>n;
	int a[n],used[n];
	for(int i =0;i < n;i++){
		cin>>a[i];
		used[i] =0;
	}
	quickSort(a,0,n-1);
	for(int i =0;i < n; i++)
	{
		used[a[i]]++;
	}
	cout<<endl;
	int cnt =0;
	for(int i =0;i < n;i ++)
	{
		if(used[i] > 0)
			cnt++;
	}
	cout<<cnt;
	return 0;
}