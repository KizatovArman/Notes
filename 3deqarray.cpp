#include <iostream>

using namespace std;

struct DEQ
{
	int deq[100000];
	int size;
	int start,end;
	DEQ()
	{
		size =0;
		start = 0;
		end = 0;
	}
	void PUSH_FRONT(int x)
	{
		if(size == 100000)
		{
			cout<<"Full\n";
		}
		else if(size == 0)
		{
			deq[start] = x;
			size++;
		}
		else{
			if(start ==0)
			{
				start = 100000-1;
				deq[start] = x;
				size++;
			}
			else
			{
				start--;
				deq[start] = x;
				size++;
			}
		}
	}
	void PUSH_BACK(int x)
	{
		if(size == 100000)
		{
			cout<<"Full\n";
		}
		else if(size == 0)
		{
			deq[end] = x;
			size++;
		}
		else{
			if(end ==100000-1)
			{
				end = 0;
				deq[end] = x;
				size++;
			}
			else
			{
				end++;
				deq[end] = x;
				size++;
			}
		}
	}
	void POP_FRONT()
	{
		int ch;
		if(size != 0 && (start == end))
		{
			ch = deq[start];
			size --;
			cout<<ch<<endl;
		}
		else if(size == 0)
		{
			cout<<"error\n";
		}
		else
		{
			ch = deq[start];
			if(start == 100000-1)
			{
				start = 0;
				size--;
			}
			else
			{
				start++;
				size--;
			}
			cout<<ch<<endl;
		}
	}
	void POP_BACK()
	{
		int ch;
		if(size != 0 && (start == end))
		{
			ch = deq[end];
			size --;
			cout<<ch<<endl;
		}
		else if(size == 0)
		{
			cout<<"error\n";
		}
		else
		{
			ch = deq[end];
			if(end == 0)
			{
				end = 100000-1;
				size--;
			}
			else
			{
				end--;
				size--;
			}
			cout<<ch<<endl;
		}
	}
	void FRONT()
	{
		if(size==0)
			cout<<"error\n";
		else
			cout<<deq[start]<<endl;
	}
	void BACK()
	{
		if(size == 0)
			cout<<"error\n";
		else
			cout<<deq[end]<<endl;
	}
	int SIZE()
	{
		return size;
	}
	void CLEAR()
	{
		size=0;
		start =0;
		end =0;
	}
	string EXIT()
	{	
		size=0;
		start =0;
		end =0;
		return "bye";
	}
};

int main(){
	string s;
	bool ok = true;
	DEQ dq;
	while(ok)
	{
		cin>>s;
		if(s == "push_front")
		{
			int ch1;
			cin>>ch1;
			dq.PUSH_FRONT(ch1);
			cout<<"ok\n";
		}
		if(s == "push_back")
		{
			int ch2;
			cin>>ch2;
			dq.PUSH_BACK(ch2);
			cout<<"ok\n";
		}
		if(s == "pop_front")
		{
			dq.POP_FRONT();
		}
		if(s == "pop_back")
		{
			dq.POP_BACK();
		}
		if(s == "front")
		{
			dq.FRONT();
		}
		if(s == "back")
		{
			dq.BACK();
		}
		if(s == "size")
		{
			cout<<dq.SIZE()<<endl;
		}
		if(s == "clear")
		{
			dq.CLEAR();
			cout<<"ok\n";
		}
		if(s == "exit")
		{
			cout<<dq.EXIT()<<endl;
			ok = false;
		}

	}
	return 0;
}