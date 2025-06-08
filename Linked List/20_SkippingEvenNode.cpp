#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


int main(){

    vector<int> hello = {1,2,3,4,5, 6};
    // vector<int> hello = {1,2,3,4,5,6,7,8,9,10};
    // create a linkedlist
    Node * head = NULL;
    Node * tail = NULL;
    
    for (int i: hello){
    
        Node * temp = new Node(i); //crating node

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp; //linking 
            tail = temp; //move
        }

    }

    
    cout<<"\n Original Array \n";
    // printing the linked-list
    Node * traverse = head; //as head can be used further
    while (traverse != NULL){
        cout<<traverse->data<<" -> ";
        traverse = traverse->next;
    }
    

    

    // CREATING A LINKED-LIST OF ODD INDICES
    Node *odd = head;
    while(odd != NULL){
        if(odd->next != NULL){ //it means we have only 1 node left, leave it
            odd->next = odd->next->next; //skip the next in each iteration and link to next
            odd = odd->next; //moving
        } 
    }


    
    cout<<"\n Printing the values after inserting \n";
    // printing the linked-list
    while (head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    
}
