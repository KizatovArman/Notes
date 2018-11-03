#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

/*void swap(int* a, int* b)
{
	int t =*a;
	*a = *b;
	*b = t;
}
*/
/*
int partition(int *a, int low, int high)
{
	int pivot = a[high]; //pivot
	int i = low; //index of smaller element

	for (int j = low; j <= high-1; j++)
	{
		//if current element is smaller than or equal to pivot
		if(a[j] <= pivot)
		{     //increment index of smaller element
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[i], a[high]);
	return i;
}

/*quick sort
low - starting index
high - ending index
*/
/*
void quickSort(int a[], int low,int high)
{
	if(low<high)
	{
		/* pi is partitioning index, a[p] is now
		at right place*/
		//int pi = partition(a,low,high);

		//seperately sort elements before partition and after
		//quickSort(a,low,pi-1);
		//quickSort(a,pi+1, high);
	//}
//}

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
	int cnt =0;
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i < n; i++)
	{
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for(int i = 0; i < n ;i++)
	{
		if(a[i] !=a[0] && a[i] != a[n-1])
			cnt++;
	}
	cout<<cnt;
	return 0;
}