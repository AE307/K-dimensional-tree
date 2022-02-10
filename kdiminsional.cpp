#include "kdiminsional.h"

/*int  kdiminsional :: newnode(int arr[]) {
	 Node* temp = new Node;

	for (int i = 0; i < k; i++)
		temp->x[i] = arr[i];

	temp->left = temp->right = NULL;
	cout<<temp;
}*/
kdiminsional::kdiminsional()
{
	this->root = NULL;
}
Node::Node(int arr[k])
{
	for (int i = 0; i < k; i++)
		this->point[i] = arr[i];

	this->left = this->right = NULL;
	//cout << temp;
}
void kdiminsional::inserttree(Node* &treeRoot, int point[] , int depth)
{
	Node* ptr = new Node(point);
	//cout << point[0] << " " << point[1] <<" "<<(treeRoot==NULL)<<endl;
	// Calculate current dimension (cd) of comparison
	int cd = depth % k;
	if (treeRoot == NULL)
	{
		treeRoot = ptr;
		//cout << (treeRoot == NULL)<<endl;
		//cout<< (this->root == NULL) << endl;
	}
	else if (point[cd] < treeRoot->point[cd])
	{
		//cout << "left" << " "<<endl<<treeRoot->point[cd]<<endl;
		
		inserttree(treeRoot->left, point, depth+1);
	}
	else 
	{
		//cout << "right" << " " << endl << treeRoot->point[cd]<<endl;
		inserttree(treeRoot->right, point, depth + 1);
	}
	
	//cout << point[0] << " " << point[1] << endl;
}
void kdiminsional::insert(int point[])
{
	//cout << point[0] << " " << point[1] << endl;

	return inserttree(this->root,point, 0);
}
bool kdiminsional::aresame(int point1[], int point2[])
{
	for (int i = 0; i < k; ++i)
	{
		if (point1[i] != point2[i])
		{
			return false;
		}
	}
	return true;
}
bool kdiminsional::searchtree(Node* &treeRoot,int point[], int depth)
{
	//cout << point[0] << " " << point[1] << " " << (treeRoot == NULL) << endl;
	int cd = depth % k;
	if (treeRoot == NULL)
	{
		//cout << "falsee"<<endl;
		return false;
	}
	else if (aresame(treeRoot->point, point))
	{
		//cout << "true" << endl;
		return true;
	}
	else if (point[cd] < treeRoot->point[cd])
	{
		//cout << "left" << " " << endl << treeRoot->point[cd] << endl;
		return searchtree(treeRoot->left, point, depth + 1);
	}
	else
	{
		//cout << "right" << " " << endl << treeRoot->point[cd] << endl;
		return searchtree(treeRoot->right, point, depth + 1);
	}
}
bool kdiminsional::search(int point[])
{
	return searchtree(this->root,point, 0);
}
Node* kdiminsional::minNode(Node* x, Node* y, Node* z, int d)
{
	Node* res = x;
	if (y != NULL && y->point[d] < res->point[d])
		res = y;
	if (z != NULL && z->point[d] < res->point[d])
		res = z;
	return res;
}
Node* kdiminsional::findMinRec(Node* treeRoot, int d, int depth)
{
	
	if (treeRoot == NULL)
		return NULL;

	
	int cd = depth % k;

	
	if (cd == d)
	{
		if (treeRoot->left == NULL)
			return treeRoot;
		return findMinRec(treeRoot->left, d, depth + 1);
	}

	
	return minNode(treeRoot,findMinRec(treeRoot->left, d, depth + 1),findMinRec(treeRoot->right, d, depth + 1), d);
}
Node* kdiminsional::findMin(Node* treeRoot, int d)
{
	// Pass current level or depth as 0
	return findMinRec(treeRoot, d, 0);
}
void kdiminsional::copyPoint(int p1[], int p2[])
{
	for (int i = 0; i < k; i++)
		p1[i] = p2[i];
}
Node* kdiminsional::deleteroot(Node* root, int point[], int depth)
{
	int cd = depth % k;
	if (root == NULL)
	{
		cout << "not found" << endl;
		return NULL;
	}
	else if (aresame(root->point, point))
	{
		if (root->right != NULL)
		{

			Node* min = findMin(root->right, cd);


			copyPoint(root->point, min->point);


			root->right = deleteroot(root->right, min->point, depth + 1);
		}
		else if (root->left != NULL)
		{
			Node* min = findMin(root->left, cd);
			copyPoint(root->point, min->point);
			root->right = deleteroot(root->left, min->point, depth + 1);
		}
		else
		{
			delete root;
			return NULL;
		}
		return root;
	}
		if (point[cd] < root->point[cd])
			root->left = deleteroot(root->left, point, depth + 1);
		else
			root->right = deleteroot(root->right, point, depth + 1);

		return root;

}
Node* kdiminsional::deleteNode(int point[])
{
	// Pass depth as 0
	return deleteroot(this->root, point, 0);
}

