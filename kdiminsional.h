#pragma once
#include <iostream>
using namespace std;
typedef int point;
const int k = 2;
class Node {
public:
    int point[k];
    Node* left;
    Node* right;
  

    //Node* root;
    Node(int arr[k]);
//public: class Node* newnode(int arr[])
//{
//    Node* temp = new Node;
//    for (int i = 0; i < k; i++)
//    {
//        temp->point[i] = arr[i];
//    }
//    temp->left = temp->right = 0;
//    return temp;
//}
};
class kdiminsional
{
public:
    Node* root;
public:
    kdiminsional();
    bool searchtree(Node* &treeRoot,int point[] , int depth);
    void inserttree( Node* &treeRoot,int point[], int depth);
    bool aresame(int y[], int z[]);
    bool search( int point[]);
   void insert(int point[]);
   Node* minNode(Node* x, Node* y, Node* z, int d);
   Node* deleteroot(Node* root, int point[], int cd);
   Node* deleteNode(int point[]);
   Node* findMinRec(Node* treeRoot, int d, int depth);
   Node* findMin(Node* treeRoot, int d);
   void copyPoint(int p1[], int p2[]);
};





