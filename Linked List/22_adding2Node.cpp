
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
    
    vector<int> num1 = {2, 4, 3, 8, 10};
    vector<int> num2 = {5, 6, 4};
    
    // Crating listnode 1;
    Node *h1=NULL;
    Node *t1 = NULL;
    for (int i : num1){
        Node *temp = new Node(i);
        if (h1 == NULL){
            h1 = temp;
            t1 = temp; //update tail too
        }
        else{
            t1->next = temp; //link to new node
            t1 = temp; //move to next node
        }
    }

    // Crating listnode 2;
    Node *h2=NULL;
    Node *t2 = NULL;
    for (int i : num2){
        Node *temp = new Node(i);
        if (h2 == NULL){
            h2 = temp;
            t2 = temp; //update tail too
        }
        else{
            t2->next = temp; //link to new node
            t2 = temp; //move to next node
        }
    }

    

    cout<<"\nPrinting 1st and 2nd \n";
    // TRAVERSING
    Node *trav1 = h1;
    while (trav1 != NULL){
        cout<<trav1->value<<" ";
        trav1 = trav1->next;
    }
    cout<<"\n";
    // TRAVERSING
    Node *trav2 = h2;
    while (trav2 != NULL){
        cout<<trav2->value<<" ";
        trav2 = trav2->next;
    }



    // ADDING BOTH NODES
    //              INSERTION IS AT THE END

    int carry =0;
    Node *head= NULL;
    Node *tail= NULL;

    cout<<"\nprinting the values of the index \n";
    while (h1 != NULL || h2 != NULL  || carry>0){

        // handle null cases
        int x = (h1 != NULL)? h1->value : 0;
        int y = (h2 != NULL)? h2->value : 0;

        
        int sum = x+y + carry;
        int remainder = (sum)%10;
        carry = sum/10;


        // cout<<"sum "<<sum<<endl;
        // cout<<"remainder "<<remainder<<endl;
        // cout<<"carry "<<carry<<endl;

        // create a node
        Node *temp = new Node(remainder);

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp; //link
            tail = temp; //move
        }

        // updating / moving to the next node
        // move only if not null ; else dont update
        if(h1 != NULL)  h1 = h1->next;
        if(h2 != NULL)  h2 = h2->next;

    }
    

        // TRAVERSING
    cout<<"\n\nAnswer the final\n";
    while (head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }

}