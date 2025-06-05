#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
        int value;
        Node * next;

        Node(int val){ //constructor
            value = val;
            next = NULL;
        }
};

// INSERTION AT THE STARTING
        // 1. crete a node 
        // 2. in the "next" point it to the head.
        // 3. point head to the current node    
int main(){

    Node *Head=NULL;
    

    // check if linked-list exists
    if(Head == NULL){ //not created yet... Create a new one
        Head = new Node(12);
    }

    //if linked-list already created
    else{        
        Node *temp = new Node(6); //create a node with value 6 and have address stored in 'temp'
        temp->next = Head;
        Head = temp;
    }

    cout<<Head->value<<"->"<<Head->next<<endl;
    Head = Head->next;
    cout<<Head->value<<" "<<Head->next;

}
