// Dynamic : dont know about the size, how much it gonna be
// creating in dynamic way requires "new" keyword

#include<stdio.h>
#include<vector>
using namespace std;

/*
class Node{
    public: //make it public so that it can be accessed from another fn()
        int data; //stores values
        Node *next; //next is a pointer that stores the value of next node
};

int main(){   
    Node *Head; //stores starting address
    Head = new Node; // creating an object of CLASS
    Head->data = 5;
    Head->next = NULL;
}

*/

                                            // DOING THE SAME THING USING CONSTRUCTOR
class Node{
    public: //make it public so that it can be accessed from another fn()
        int data; //stores values
        Node *next; //next is a pointer that stores the value of next node
        
        Node(int value){
            data = value;
            next = NULL;
    }
};

int main(){   
    Node *Head; //stores starting address
    Head = new Node(6); // creating an node 
}
