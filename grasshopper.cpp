#include<bits/stdc++.h>

using namespace std;

const int N = 100100;
const int INF = int(2e9);


int a,b,d[N];

int main() {

  cin >> a >> b;        
  
  for(int i = 1;i <= N;i ++) d[i] = INF;

  queue<int> q;

  q.push(a);  
  d[a] = 0;
  
  while(q.size()) {
    int v = q.front();
    q.pop();
    if(v * 2 <= b && d[v * 2] > d[v] + 1) {
      d[v * 2] = d[v] + 1;
      q.push(v * 2);
    }
    if(v + 3 <= b && d[v + 3] > d[v] + 1) {
      d[v + 3] = d[v] + 1;
      q.push(v + 3);
    }
  }
  if(d[b] == -1) {
    cout << "NO PATH";
  } else {
    cout << d[b];
  }
  return 0;
}