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
    Node *Head = NULL;

    for (int  i = 1; i < 5; i++)
    {
        Node *temp = new Node(i); //create a node regardless of its position 
        if(Head == NULL){
            Head = temp;
        }
        else{
            temp->next = Head;
            Head = temp;
        }
    }
        
        
        // TRAVERSING
        while (Head != NULL){
            cout<<Head->data<<" ";
        Head = Head->next;
    }
    
}