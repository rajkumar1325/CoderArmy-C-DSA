#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    queue<int> que;
    vector<int>nums = {1,2,3,4,5};

    for(int n: nums){
        que.push(n);

        // rotate the queue to bring back last element to first. {just 1 less than the actual size, as if it will be size, it will become same.}
        for (int i = 0; i < que.size()-1; i++){
            que.push(que.front());
            que.pop();
        }
        
    }

    while (!que.empty()){
        cout<<que.front();
        que.pop();
    }
    
}
