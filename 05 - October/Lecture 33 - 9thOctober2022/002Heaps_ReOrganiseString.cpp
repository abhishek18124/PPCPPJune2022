
#include<iostream>
#include<queue>

using namespace std;

string reOrganiseString(string str) {

    int freq[26] = {0};

    for(char ch : str) {
        freq[ch-'a']++;
    }

    priority_queue<pair<int, char>> maxHeap;

    for(int i=0; i<26; i++) {
        if(freq[i] > 0) {
            // ith char is part of the input str
            maxHeap.push({freq[i], i+'a'}); // make_pair(freq[i], i+'a')
        }
    }

    string out = "";

    while(!maxHeap.empty()) {
        if(maxHeap.size() == 1) {
            pair<int, char> lastPair = maxHeap.top(); maxHeap.pop();
            if(lastPair.first == 1) {
                out += lastPair.second;
            } else {
                // we cannot reorganise the given string
                out = "";
            }

        } else {
            pair<int, char> firstMax = maxHeap.top(); maxHeap.pop();
            pair<int, char> secondMax= maxHeap.top(); maxHeap.pop();

            out += string(1, firstMax.second) + string(1, secondMax.second);

            firstMax.first--;
            secondMax.first--;

            if(firstMax.first > 0) {
                maxHeap.push(firstMax);
            }

            if(secondMax.first > 0) {
                maxHeap.push(secondMax);
            }
        }
    }

    return out;

}

int main() {

    string str = "aaab";

    cout << reOrganiseString(str) << endl;

    return 0;
}