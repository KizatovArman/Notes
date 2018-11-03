#include <iostream>

using namespace std;



class Node{
public:
	int key;
	Node *left;
	Node *right;

	Node(int key){
		this->key = key;
		left = NULL;
		right = NULL;
	}
};

class BSTree{
public:
	Node *root;
	BSTree(){
		root = NULL;
	}

	Node* insert(Node *node, int key)
	{
		if(node == NULL)
		{
			node = new Node(key);
			return node;
		}
		if(key< node->key) {
			node->left = insert(node->left,key);
		}
		else
		{
			node->right = insert(node->right,key);
		}
		return node;
	}
	int Node_Height(Node *node)
	{
		int l, r,h=0;
		if(node != NULL)
		{
			l = Node_Height(node->left);
			r = Node_Height(node->right);
			h = ((l>r) ? l: r) +1;
		}
		else
			h =0;
		return h;
	}
	void inOrder(Node *node)
	{
		if(node == NULL)
		{
			return;
		}
		inOrder(node->left);
		cout<<node->key<<endl;
		inOrder(node->right);
	}
	void preOrder(Node *node){
		if(node == NULL)
			return;
		cout<<node->key<<endl;
		inOrder(node->left);
		inOrder(node->right);
	}
	void postOrder(Node *node){
		if(node == NULL)
			return;
		inOrder(node->left);
		inOrder(node->right);
		cout<<node->key<<"\n";
	}
	Node *minimum(Node *node)
	{
		if(node->left == NULL)
			return node;
		
		return minimum(node->left);
	}
	Node *maximum(Node *node)
	{
		if(node->right == NULL)
			return node;
		return maximum(node->right);
	}
	Node* del(Node *node, int key)
	{
		if(node == NULL)
			return NULL;
		if(key< node->key)
		{
			node->left = del(node->left,key);
		}
		else if(key> node->key)
		{
			node->right = del(node->right,key);
		}
		else if(node->left != NULL && node->right != NULL)
		{
			node->key = minimum(node->right)->key;
			node->right = del(node->right, node->key);
		}
		else if(node->left != NULL)
			node = node->left;
		else
			node = node->right;
		return node;
	}
	
};
int main(){
	BSTree *tree = new BSTree();
	int x,n;
	int h;
	while(cin>>x)
	{
		if(x == 0)
			break;
		tree->root = tree->insert(tree->root,x);
	}
	h = tree->Node_Height(tree->root);
	cout<<h;
	return 0;
}