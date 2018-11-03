#include <iostream>
#include <cstring> 

using namespace std; 

const int alphabebt_size =28;

struct vertex
{	
	int prefix_cnt =0;
	int next[alphabebt_size];
	bool isleaf = false;
};

vertex t[1000010];
int size = 1;
 
void add(string s)
{
	int v =0;
	for(int i =0;i <s.length(); i++)
	{
		int x = s[i] - 'a';
		if(t[v].next[x] ==-1)
		{
			memset(t[size].next,255,sizeof t[size].next);
			t[v].next[x] = size++;
		}
		v= t[v].next[x];
		t[v].prefix_cnt++;
	}
	t[v].isleaf = true;
}

int getprefix(string s)
{
	int v=0;
	for(int i =0;i <s.length(); i++)
	{
		int x = s[i] - 'a';
		if(t[v].next[x] ==-1)
		{
			return 0;
		}
		v =t[v].next[x];
	}
	return t[v].prefix_cnt;
}


int main() 
{ 
	memset(t[0].next,255,sizeof t[0].next);

	string str;
	int n,m;
	cin>>n>>m;
	for(int i =0;i <n;i++)
	{
		cin>>str;
		add(str);
	}
	for(int j = 0;j < m; j++)
	{
		cin>>str;
		cout<<getprefix(str)<<endl;
	}
	return 0; 
} 
