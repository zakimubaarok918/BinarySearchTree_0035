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
{
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

       search(element, parent, currentNode);

         if (parent == NULL)
         {
             ROOT = newNode;
             return;
         }

         if (element < parent->info)
         {
             parent->leftchild = newNode;
         }
         else
         {
             parent->rightchild = newNode;
         }
    }

    // This function searches the current node of the specified node
    // as well as the current node of its parrent
    void search(string element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = NULL;

        while ((currentNode != NULL) && (currentNode->info != element))
        {
            parent = currentNode;

            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;    
        }
    }    

    void inorder(Node *currentNode)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != NULL)
        {
            inorder(currentNode->leftchild);
            cout << currentNode->info << " ";
            inorder(currentNode->rightchild);
        }
    }

    void preorder(Node *currentNode)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != NULL)
        {
            cout << currentNode->info << " ";
            preorder(currentNode->leftchild);
            preorder(currentNode->rightchild);
        }
    }

    void postorder(Node *currentNode)
    {
        // Performs the postorder traversal of the tree

        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != NULL)
        {
            postorder(currentNode->leftchild);
            postorder(currentNode->rightchild);
            cout << currentNode->info << " ";
        }
    }
};    

int main()
{
    BinaryTree obj;

    while (true)
    {
        cout << "Menu" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Inorder Traversal" << endl;
        cout << "3. Preorder Traversal" << endl;
        cout << "4. Postorder Traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";

        char ch;
        cin >> ch;

        cout << endl;

        switch (ch)
        {
        case  '1':
            {
                cout << "Enter a word: ";
                string word;
                cin >> word;
                obj.insert(word);
                break;
            }      

        case '2':
            {
                obj.inorder(obj.ROOT);
                cout << endl;
                break;
            }   
            
       case '3':
            {
                obj.preorder(obj.ROOT);
                break
            }  

        case '4':
            {
                obj.postorder(obj.ROOT);
                break;
            }    

        case '5':
            {
                return 0;
            }    