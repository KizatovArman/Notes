#include <iostream>

using namespace std;

struct STACK
{
	int steck[100000];
	int size;
	//string str = "";
	STACK()
	{
		size = 0;
	}
	void PUSH_N(int x)
	{
		size++;
		steck[size] = x;
		cout<<"ok\n";
	}
	void POP()
	{
		if(size>0)
		{
			cout<<steck[size]<<endl;
		size--;
		}
		else{
			cout<<"error\n";
		}
	}
	void BACK()
	{
		if(size>0){
		cout<<steck[size]<<endl;}
		else
		{
			cout<<"error\n";
		}
	}
	void SIZE()
	{
		cout<<size<<endl;
	}
	void CLEAR()
	{
		size = 0;
		cout<<"ok\n";
	}
	void EXIT()
	{
		size = 0;
		cout<<"bye";
	}

};


int main() {
	string s;
	
	bool ok = true;
	STACK st;
	while(ok)
	{
		cin>>s;
		if(s == "push")
		{
			int ch1;
			cin>>ch1;
			st.PUSH_N(ch1);
		}
		if(s == "pop")
		{
			st.POP();
		}
		if(s == "back")
		{
			st.BACK();
		}
		if(s=="size")
		{
			st.SIZE();
		}
		if(s=="clear")
		{
			st.CLEAR();
		}
		if(s=="exit")
		{
			st.EXIT();
			ok = false;
		}
		
	}
	return 0;
}