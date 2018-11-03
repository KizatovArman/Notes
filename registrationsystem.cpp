#include <iostream>
#include <string>
#include <map>

using namespace std;

	int n;
	string s;
	map< string,int > my_map;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(my_map[s]++)
			cout<<s<<my_map[s]-1<<"\n";
		else
			cout<<"OK\n";
	}
	return 0;
}