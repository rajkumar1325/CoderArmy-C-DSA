#include<stdio.h>
#include<vector>
using namespace std;


class Node{
    public: //make it public so that it can be accessed from another fn()
        int data; //stores values
        Node *next; //next is a pointer that stores the value of next node
};

int main(){    
    Node A1; // creating an object of CLASS
    A1.data = 5;
    A1.next = NULL;
}
