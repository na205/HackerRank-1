#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//	Author: Tatparya Shankar

/* you only have to complete the function given below.
Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void visit( node* root ){
	//	Visit node
	cout << root -> data << " ";
}

//	Recursive Solution
void Postorder(node *root) {

	if( root == NULL )
		return;

	Postorder( root -> left );
	Postorder( root -> right );
	visit( root );

}
