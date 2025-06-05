/*
We cant update "Head" pointer-node, as it must point Head(starting), so for traversing.
create a new pointer that points the address of current node, or move along with node.
        tail->next = temp;    //tail is at last, to add at last update its next pointer
        tail = temp;    //update tail to point new node.
*/

/*
        OR WE CAN GO TO THERE LIKE
                tail = head;
                while(tail != Null){
                    tail = tail->next;
                }
                        //WHENEVER IT MOVES TO END, IT STOPS --> THEN WE CAN ADD A NEW NODE  

                Node *temp =  new Node(10);
                tail->next = temp; //create link
                tail = temp; //move tail to point to end

        
*/



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
int main(){
    Node *head=NULL;
    Node *tail = NULL;

    for (int i = 0; i < 10; i++){
        Node *temp = new Node(i);
        if (head == NULL){
            head = temp;
            tail = temp; //update tail too
        }

        else{
            tail->next = temp; //link to new node
            tail = temp; //move to next node

        }
        
    }
    

    // TRAVERSING
    while (head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    
}