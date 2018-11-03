/*Поиск графа( или дерева) в длину. 
Просто заводим двумерный массив. 
В ачейке a[x,(номер_ячейки)] будем хранить номера лошадей, которых быстрее лошадь X. 
Потом просто обходим (рекурсивно) вниз помечая вершины, где уже были,
единичкой (в отдельном массиве), пока уже будет некуда идти. 
Если были помечены все ячейки - наша поняша самая быстрая, иначе - нет.
*/
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
		if(graph[v][i] == 1 && used[i]== false)
			dfs(graph,i);
	}
}

int main() {
	int K;
	cin>>n>>K;
	K--;
	vector<vector<int> > g(n,vector<int>(n,0));

	while(true)
	{
		int x,y;
		cin>>x;
		if(x==0)
			break;
		cin>>y;
		g[x-1][y-1] = 1;
	}
	dfs(g,K);
	used[K] = true;
	for(int i =0; i < n; i++)
	{
		if(used[i] == false)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}