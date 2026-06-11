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