#include <iostream>

using namespace std;

int main (){
	int a,b;
	cin>>a>>b;
	int a1=a;
	int b1=b;
	int gcd,gcd1,gcd2;
	if (a>b){
	for (int i = 1; i <= a; i++){
		if (a%i==0 and b%i==0){
			gcd1=i;
		}
	}
	gcd=gcd1;
}
	else if (a<b){
		for (int i = 1; i <= b; i++){
			if (a%i==0 and b%i==0){
				gcd2=i;
			}
	}
	gcd=gcd2;
}
	else if (a==b){
		gcd=a;
	}
	cout<<gcd;
	return 0;
}