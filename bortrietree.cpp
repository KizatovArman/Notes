#include <iostream>
#include <vector>

using namespace std;

int cnt =0;
string s;
class Node{
public:
	char ch;
	Node *a[26];
	Node(char ch)
	{
		this -> ch = ch;
		for(int i =0;i <26;i++)
		{
			a[i] = NULL;
		}
	}
};

class Trie{
public:
	Node *root;
	Trie()
	{
		root = new Node('+');
	}

	void insert(int k)
	{
		//bool inserted = false;
		Node *node = root;
		for(int i = k; i <s.size();i++)
		{
			int pos = s[i] -'a';
			if(node->a[pos] != NULL)
			{
				node = node->a[pos];
				//cout<<node->ch<<endl;
			}
			else
			{
				//inserted = true;
				Node *temp = new Node(s[i]);
				node-> a[pos] = temp;
				node=node->a[pos];
				//cout<<node->ch<<endl;
				cnt++;
			}
		}
		//return inserted;
	}
};

int main(){
	cin>>s;
	Trie *t = new Trie();
	for(int i= 0;i < s.size();i++){
		t->insert(i);
	}
	cout<<cnt;
	return 0;
}