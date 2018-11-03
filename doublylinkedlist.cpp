#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>

using namespace std;

queue <pair<string,int> > q;

struct Node
{
	int val;
	Node *next, *prev;

	Node(int _val)
	{
		val = _val;
		next = NULL;
		prev = NULL;
	}
};

struct DLinkedList
{
public:
	Node *head, *tail;
	DLinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void insert(int x)
	{
		auto node = new Node(x);
		if( head == NULL)
		{
			head = node;
			tail = node;
			return;
		}
		else
		{
			head -> prev = node;
			node -> next = head;
			head = node;
		}
	}

	void DELETEFIRST()
	{
		head = head -> next;
		if(head!=NULL)
		{
			head->next = NULL;
		}
		else
		{
			tail = NULL;
		}
	}
	void DELETELAST()
	{
		tail = tail -> prev;
		if(tail!= NULL)
		{
			tail -> next = NULL;
		}
		else
		{
			head =NULL;
		}
	}
	void DELETE(int x)
	{
		auto cur = head;
		while (cur && cur -> val !=x)
		{
			cur = cur -> next;
		}
		if(!cur) return;
		if(cur == head) DELETEFIRST();
		else
			if(cur == tail) DELETELAST();
			else{
				cur->next->prev = cur->prev;
				cur->prev->next = cur->next;
			}
	}

	void print(){
		auto cur = head;
		while(cur)
		{
			if(cur != head) cout<<" ";
			cout<<(cur->val);
			cur = cur->next;
		}
		cout<<endl;
	}
};

void solve(int test_case) {
	int n,x;
	string s;
	auto dLinkedList = new DLinkedList();
	cin>>n;
	for(int i =1; i <= n; i++)
	{
		cin>>s;
		if(s == "insert")
		{
			cin>>x;
			dLinkedList->insert(x);
		}
		if(s=="delete")
		{
			cin>>x;
			dLinkedList->DELETE(x);
		}
		if(s=="deleteFirst")
		{
			cin>>x;
			dLinkedList->DELETEFIRST();
		}
		if(s=="deleteLast")
		{
			cin>>x;
			dLinkedList->DELETELAST();
		}
	}

	dLinkedList-> print();

	exit(0);
}
int main()
{
	int test_case = 0;
	while(++test_case){
		solve(test_case);
	}
}