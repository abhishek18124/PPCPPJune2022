/*

    Given k sorted arrays, merge them and print the sorted output.

    k = 3
    Input : {
                {1, 3, 5, 7}, 
                {2, 4, 6, 8}, 
                {0, 9, 10, 11}
            }

    Output: 0 1 2 3 4 5 6 7 8 9 10 11 

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class triple {

    public :

    int val;
    int row;
    int col;

    triple(int val, int row, int col) {
        this->val = val;
        this->row = row;
        this->col = col;
    }

};

class tripleComparator {

    public :

    bool operator()(triple a, triple b) {
        // return b->data < a->data;

        if(b.val < a.val) {
            // we need a swap for a minHeap
            return true;
        }

        // we don't need a swap for a minHeap 
        return false;

    }

};


int main() {

    vector<vector<int>> inp = {{1, 3, 5, 7}, 
                               {2, 4, 6, 8}, 
                               {0, 9, 10, 11}};

    int k = inp.size(); // num. of rows

    vector<int> out;

    priority_queue<triple, vector<triple>, tripleComparator> minHeap;

    for(int i=0; i<k; i++) {
        minHeap.push(triple(inp[i][0], i, 0));
    }

    while(!minHeap.empty()) {

        triple t = minHeap.top(); minHeap.pop();

        // int val = t.val; // v[0]
        // int row = t.row; // v[1]
        // int col = t.col; // v[2]

        out.push_back(t.val);

        if(t.col + 1 < inp[t.row].size()) {
            minHeap.push(triple(inp[t.row][t.col+1], t.row, t.col+1));
        }

    }

    for(int i=0; i<out.size(); i++) {
        cout << out[i] << " ";
    }

    cout << endl;

    return 0;
}



