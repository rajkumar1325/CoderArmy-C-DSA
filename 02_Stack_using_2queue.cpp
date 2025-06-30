#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    queue<int> que1;
    queue<int> que2;
    vector<int>nums = {1,2,3,4,5};

    for(int n: nums){
        que2.push(n);

        // push all the element of que1 into que2
        while (!que1.empty()){
            que2.push(que1.front());
            que1.pop(); //pops front element.
        }
        
        swap(que1, que2); // reset que2 as all elements are already moved to queue1

        
    }

    while (!que1.empty()){
        cout<<que1.front();
        que1.pop();
    }
    
}
