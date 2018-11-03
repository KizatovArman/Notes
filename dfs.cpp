#include <iostream>
#include <vector>

using namespace std;
int n;
vector<bool> used(110, false);

void dfs(vector<vector<int> > graph, int v)
{
	used[v] = true;
	for(int i =0;i <n;i++)
	{
		if(graph[v][i] == && !used[i])
			dfs(graph,i);
	}
}
int main()
{
	cout<<"YEAH";
	return 0;
}