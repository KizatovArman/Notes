#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>

using namespace std;

int size;

struct Node {
    int val;
    Node *next, *prev;

    Node(int _val) {
        val = _val;
        next = NULL;
        prev = NULL;
    }
};

struct Deque {
public:
    Node *head, *tail;
    int sz;

    Deque() {
        head = tail = NULL;
        sz = 0;
    }

    void push_front(int x) {
        if(sz<size)
        {
            Node *node = new Node(x);
            sz++;
            if (head == NULL) {
                head = node;
                tail = node;
                return;
            } 
            else {
            head -> prev = node;
            node -> next = head;
            head = node;
            }
        }
        else
        {
            cout<<"The queue is full"<<endl;
        }
        
    }

    void push_back(int x) {

        if(sz < size){
            Node *node = new Node(x);
            sz++;
            if (tail == NULL) {
                head = node;
                tail = node;
                return;
            } 
            else {
                tail -> next= node;
                node -> prev = tail;
                tail = node;
            }
        }
        else
        {
            cout<<"The queue is full"<<endl;
        }
    }

    void pop_front() {
        sz--;
        head = head -> next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
    }

    void pop_back() {
        
        sz--;
        tail = tail -> prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
    }

    int front() {
        return head -> val;
    }

    int back() {
        return tail -> val;
    }

    bool empty() {
        return sz == 0;
    }

    void clear() {
        head = tail = NULL;
        sz = 0;
    }

    int size() {
        return sz;
    }

    void print() {
        auto cur = head;
        while (cur) {
            if (cur != head) cout << " ";
            cout << (cur -> val);
            cur = cur -> next;
        }
        cout << "\n";
    }
};

void solve(int test_case) {

    Deque *deque = new Deque();
    string cmd;
    int x;
    while (cin >> cmd) {
        if (cmd == "push_back") {
            cin >> x;
            deque -> push_back(x);
            cout << "ok\n";
        }
        if (cmd == "push_front") {
            cin >> x;
            deque -> push_front(x);
            cout << "ok\n";
        }
        if (cmd == "pop_back") {
            if (deque -> empty()) {
                cout << "error\n";
                continue;
            }
            cout << deque -> back() << "\n";
            deque -> pop_back();
        }
        if (cmd == "pop_front") {
            if (deque -> empty()) {
                cout << "error\n";
                continue;
            }
            cout << deque -> front() << "\n";
            deque -> pop_front();
        }
        if (cmd == "front") {
            if (deque -> empty()) {
                cout << "error\n";
                continue;
            }
            cout << deque -> front() << "\n";
        }
        if (cmd == "back") {
            if (deque -> empty()) {
                cout << "error\n";
                continue;
            }
            cout << deque -> back() << "\n";
        }
        if (cmd == "size") {
            cout << deque -> size() << "\n";
        }
        if (cmd == "clear") {
            deque -> clear();
            cout << "ok\n";
        }
        if (cmd == "exit") {
            cout << "bye\n";
            return;
        }
    }
}

int main() {
    solve(0);
}