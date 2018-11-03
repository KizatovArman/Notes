#include <iostream>
#include <cmath>

using namespace std;

int n;
int a[100002];

int getClosest(int c)
{
	int l =0;
	int r = n -1;
	int mid = (l+r)/2;
	for(int i =0;i <100;i++)
	{
		if(a[mid]>c)
			r= mid;
		else  
			l = mid;
	}
	if(l!=r)
		return (abs(a[r] -c) < abs (a[l] -c) ? r: l);
	return l;
}

int main()
{
	int k;
	scanf("%d%d" , &n,&k);
	for(int i =0;i <n;i++)
		scanf("%d", &a[i]);
	for(int j = 0, c; j < k ; ++j)
		scanf("%d", &c),printf("%d ", a[getClosest(c)] );
	return 0;
}