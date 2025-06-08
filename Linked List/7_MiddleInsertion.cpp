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
    
    while(1){
        int n = 0; //resets in every iteration
        cout<<"Enter your number {0 for break}";
        cin>>n;

        if(n ==0) break; //exit condition

        Node * temp = new Node(n); //crating node


        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp; //linking 
            tail = temp; //move
        }


    }


    cout<<"\n Printing the values \n";
    // printing the linked-list
    Node * traverse = head; //as head can be used further
    while (traverse != NULL){
        cout<<traverse->data<<" -> ";
        traverse = traverse->next;
    }
    

    // INSERTING AT SPECIFIC POSITION
    int position;
    cout<<"Enter your position ";
    cin>>position;

    Node *idx = head;
    for(int i=1; i<position; i++){
        idx = idx->next;
    }

    // after this loop we are at that specific position
    Node * temp1 = new Node(1000);
    Node * temp2 = idx->next;
    idx->next = temp1;
    temp1->next = temp2;

 
    

    
    cout<<"\n Printing the values after inserting \n";
    // printing the linked-list
    while (head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    
}