#include<iostream>
#include<vector>
#include<array>
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

// as it returns a node
Node * RecursiveCreation(int arr[], int index , int size){
    if(index == size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = RecursiveCreation(arr, index+1, size); //recursive call
    return temp;
}


int main(){
    int nums[] = {34,54,23,2,56,87,67,321};
    int n = sizeof(nums)/sizeof(nums[0]);
    Node * head = RecursiveCreation(nums,0,n);


    // TRAVERSAL
    while (head!=NULL){
        cout<<head->value<<" -> ";
        head = head->next;
    }
    
}