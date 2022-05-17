/*
 * the tree implementation done here is of 
 * a strictly increasing binary tree
 * meaning left-child < root < right-child
 */
#include<iostream>
#include<vector>

// #define node treenode
// #define nodep treenode *

using namespace std;

typedef struct treenode {
	int data;
	treenode* left;
	treenode* right;

	treenode(int val=0) {
		// cout<<"hell0\n";
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}

}node,*nodep;

/*
 * this function takes an integer array as input
 * and returns the pointer to root of bst tree:
 * the array should be sorted in ascending order,
 * the tree is  complete binary tree
 */
nodep arrayToBst(int *array,int len,int start, int end) {
	if ( (start>end) || (start<0 || end>=len ))return NULL;
	nodep n = new node(array[start]);
	if (start==end) return n;  //seems like this line isn't doing anything


	int mid = (start+end)/2;
	n->data = array[mid];
	n->left = arrayToBst(array,len,start, mid-1);
	n->right = arrayToBst(array,len,mid+1, end);

	return n;
}

void levelOrder() {}

/*
 * inorder traversal of binary tree,
 * need not be a bst
 */
void inorder(nodep head,vector<int> * inArray, vector<int> *levelArray,int count) {
	if (head==NULL) return;

	inorder(head->left,inArray,levelArray,count+1);

	(*inArray).push_back(head->data);
	(*levelArray).push_back(count);
	

	inorder(head->right,inArray,levelArray,count+1);

}


int main()
{
	// nodep head = new node(8);
	// head->left = new node(2);
	// head->right = new node(20);
	// cout<<head->data<<' '<<head->left->data<<' '<<head->right->data<<'\n';
	nodep head;

	// vector<int> array;
	int array[] = {2,5 ,20,21,43,50,200,313,9213};
	int length = sizeof(array)/sizeof(array[0]);

	head = arrayToBst(array,length,0,length-1);

	vector<int>inArray;
	vector<int>levelArray;
	inorder(head,&inArray,&levelArray,0);
	cout<<'[';
	for(int i=0;i<inArray.size();i++){
		cout<<inArray[i]<<' ';
	}cout<<']';
	cout<<'\n';

	cout<<'[';
	for(int i=0;i<levelArray.size();i++){
		cout<<levelArray[i]<<' ';
	}cout<<']';
	cout<<'\n';



	return 0;
}
