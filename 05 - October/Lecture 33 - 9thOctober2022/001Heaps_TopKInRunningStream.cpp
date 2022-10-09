/*

Given an infinite stream of non-negative integers, design an algorithm to output the 
top-K integers every time you encounter -1.

Example : Input = 4, 1, 2, -1, 3, -1 7 0 1 2 -1 8 -1 . . . ; K = 3
          Output = 1 2 4
                   2 3 4
                   3 4 7
                   4 7 8
                   . . .

*/

#include<iostream>
#include<queue>

using namespace std;

void printMinHeap(priority_queue<int, vector<int>, greater<int>> minHeap) {
    while(!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();priority_queue<int, vector<int>, greater<int>> minHeap
    }
}

int main() {

    int k = 3;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // 1. build a minHeap of size k using the first k values from the stream

    int x;
    for(int i=0; i<k; i++) {
        cin >> x;
        minHeap.push(x);
    }


    while(true) {
        cin >> x;
        if(x == -1) {
            // print the contents of the minHeap
            printMinHeap(minHeap);
        } else {
            if(x > minHeap.top()) {
                minHeap.pop();
                minHeap.push(x);
            }
        }
    }


    return 0;
}




