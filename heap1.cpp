#include <iostream>

using namespace std;

/*void heapify(int *a, int n, int i)
{
	int largest = i;
	int left = 2*i +1;
	int right = 2*i+2;

	if(left < n && a[left] > a[largest])//if left child is larger than root
		largest = left;

	if(right < n && a[right] > a[largest])//if right child larger than root
		largest = right;

	if(largest != i)//if largest is not root
	{
		swap(a[i],a[largest]);
		heapify(a,n,largest);//recursively heapify the affected subb-tree
	}
}

void heapsort(int *a, int n)
{
	//build heap 
	for(int i = n/2-1; i >= 0; i--)
	{
		heapify(a,n,i);
	}
	for(int i = n-1; i >=0; i--)
	{
		//move current root to end
		swap(a[0], a[i]);
		//call max heapify on the reduced heap
		heapify(a, i,0);
	}
}*/

void heapsort(int *a, int i)
{
	if(2*i+1>=n)
		return;
	int index = 2*i +1;
	if(2*i +2<n && a[2*i +2] > a[index])
}

int main (){
	int n;
	cin>>n;
	int arr[10002];
	for(int i =0;i < n; i++)
	{
		cin>>arr[i];
	}
	heapsort(arr,n);
	for(int i =0;i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}