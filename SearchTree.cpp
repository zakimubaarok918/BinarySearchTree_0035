#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
    string data;
    Node* leftchild;
    Node* rightchild;

    // Constructor for the node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};    

class BinaryTree

public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; // initializing ROOT to NULL
    }

    // insert a new node into the binary tree
    void insert(string value)
    {
       Node *newNode = new Node(element, NULL, NULL);
    
       newNode->info = element;
       newNode->leftchild = NULL;
       newNode->rightchild = NULL;

       Node *parent = NULL;
       Node *currentNode = NULL;
      