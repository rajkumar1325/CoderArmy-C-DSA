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
    // create a linkedlist
    Node * head = NULL;
    Node * tail = NULL;
    
    int i=1;
    while(i<=10){
        Node * temp = new Node(i); //crating node

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp; //linking 
            tail = temp; //move
        }

        i++;
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
        odd->next = odd->next->next; //skip the next in each iteration and link to next
        odd = odd->next; //moving
    }


    
    cout<<"\n Printing the values after inserting \n";
    // printing the linked-list
    while (head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    
}
