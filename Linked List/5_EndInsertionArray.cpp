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
    vector<int> nums = {23, 54, 23, 78, 4, 89};
    Node *head=NULL;
    Node *tail=NULL;
    
    for(int i : nums){
        Node *temp = new Node(i);

        if(head == nullptr){
            head = temp;
            tail = temp;
        }

        else{
            tail->next = temp; //link
            tail = temp; //move
        }
    }


    // TRAVERSING
    while (head != nullptr){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    
}