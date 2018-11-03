#include <iostream>

using namespace std;

struct QUEUE
{
	int qu[100000];
	int start;
	int finish;
	QUEUE()
	{
		start = 0;
		finish = 0;
	}
	void push(int val)
	{
		qu[finish] = val;
		finish++;
	}
	void pop()
	{
		if(finish - start ==0)
		{
			cout<<"error\n";
		}
		else
		{
			int a = qu[start];
			start++;
			cout<<a<<endl;
		}	
	}
	void front()
	{
		if(finish - start ==0)
		{
			cout<<"error\n";
		}
		else 
		{
			cout<<qu[start]<<endl;
		}
	}
	int size()
	{
		return finish -start;
	}
	string clear()
	{
		finish = 0;
		start = 0;
		return "ok";
	}
	string exit()
	{
		return "bye";
	}
};

int main(){
	string s;
	QUEUE q;
	bool ok = true;
	while(ok)
	{
		cin>>s;
		if(s == "push")
		{
			int ch1;
			cin>>ch1;
			q.push(ch1);
			cout<<"ok\n";
		}
		if(s == "pop")
		{
			q.pop();
		}
		if(s == "front")
		{
			q.front();
		}
		if(s == "size")
		{
			cout<<q.size()<<endl;
		}
		if(s == "clear")
		{
			cout<<q.clear()<<endl;
		}
		if(s == "exit")
		{
			cout<<q.exit()<<endl;
			ok = false;
		}

	}
	return 0;
}