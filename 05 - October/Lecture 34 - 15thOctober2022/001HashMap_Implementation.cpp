/*

	Implementation of HashMap/HashTable

*/

#include<iostream>

using namespace std;

class node {

	public :

		int K;
		int V;
		node* next;

		node(int K, int V) {
			this->K = K;
			this->V = V;
			this->next = NULL;
		}

};

class HashMap {
	int N; //  to store the hash table capacity
	int M; //  to store the hash table size
	double L; // to store the load factor threshold

	node** T; // to store the pointer to the  dynamic
	          // array that represents the hash table

	int hashFn(int K) {
		// transform K into a hash index
		return K%N;
	}

	void transfer(node* head) {
		// 1. rehash (K, V) pairs present in the linkedList represented 
		//    by "head" pointer to the updated hashMap
		node* temp = head;
		while(temp) {
			insert(temp->K, temp->V);
			temp = temp->next;
		}
		
		// 2. release memory allocated for the linkedList represented
		//    by "head" pointer
		while(head) {
			temp = head->next;
			delete head;
			head = temp;
		}
	}

	void rehash() {

		// 1. save pointer to the current hashMap and its capacity
		node** oldT = T;
		int oldN = N;
		
		// 2. create a hashMap with double capacity
		N *= 2;
		T = new node*[N];
		for(int i=0; i<N; i++) {
			T[i] = NULL;
		}
		M = 0;

		// 3. transfer (K, V) pairs from old hashMap to the updated hashMap
		for(int i=0; i<oldN; i++) {
			transfer(oldT[i]);
		}
		
		// 4. release the memory allocated to the old hashMap
		delete [] oldT;

	}

	public :

		HashMap(int N=5, double L=0.7) {
			this->N = N;
			this->M = 0;
			this->L = L;

			T = new node*[N];
			for(int i=0; i<N; i++) {
				T[i] = NULL;
			}
		}

		void insert(int K, int V) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. create a node with the given (K, V) pair and insert it at
			//    head of the linkedList stored at the hash index
			node* n = new node(K, V);

			// 3. update the pointer to the head of the linkedList stored at 
			//    the hash index such that it holds the address of the newly
			//    created node
			n->next = T[hashIdx];
			T[hashIdx] = n;

			M++;

			// 4. rehash, if loadFactor exceeds the loadFactor Threshold
			double LF = M*1.0 / N;
			if(LF > L) {
				cout << "rehashing..." << LF << endl;
				rehash();
			}

		}

		node* find(int K) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. search for the node with the given key in the  linkedList 
			//    stored at the hash index
			node* temp = T[hashIdx];
			while(temp) { // temp != NULL
				if(temp->K == K) {
					// you've found the node with the given (K, V) pair
					return temp;
				}
				temp = temp->next;
			}
			return temp;

		}

		void erase(int K) {

			// 1. transform the key into hash index using the hash function
			int hashIdx = hashFn(K);

			// 2. delete the node with the given key from the linkedList 
			//    stored at the hash index
			node* temp = T[hashIdx];
			if(temp && temp->K == K) {
				// delete at head
				T[hashIdx] = temp->next;
				delete temp;
				M--;
			} else {	
				node* prev = NULL;
				while(temp) {
					if(temp->K == K) {
						// delete the temp node
						prev->next = temp->next;
						delete temp;
						M--;
					}
					prev = temp;
					temp = temp->next;
				}
			}

		}

		void printLinkedList(node* head) {
			while(head) { // head != NULL
				cout << "(" << head->K << ", " << head->V << ") ";
				head = head->next;
			}
			cout << endl;
		}

		void printHashMap() {
			// iterate over buckets in the hashMap
			for(int i=0; i<N; i++) {
				// print the linkedList stored ith bucket of the hashMap
				cout << i << " : ";
				printLinkedList(T[i]);
			}
			cout << endl;
		}

		int& operator[](int K) { // 12
			node* n = find(K);
			if(n == NULL) {
				// K does not exist in the hashTable
				int garbage;
				insert(K, garbage);
				n = find(K);
			}
			return n->V;
		}
};



int main() {
	
	// HashMap hashMap;

	// hashMap.insert(0, 0);
	// hashMap.insert(1, 1);
	// hashMap.insert(2, 4);
	// hashMap.insert(10, 100);
	// hashMap.insert(6, 36);

	// hashMap.printHashMap();

	// int K = 6;
	// node* n = hashMap.find(K);
	// n ? cout << n->V << endl : cout << K << " doesn't exits" << endl ;

	// hashMap.erase(K);
	// n = hashMap.find(K);
	// n ? cout << n->V << endl : cout << K << " doesn't exits" << endl ;

	// hashMap.printHashMap();

	// K = 0;
	// hashMap.erase(K);
	// hashMap.printHashMap();

	HashMap hashMap;

	hashMap.insert(0, 0);
	hashMap.insert(1, 1);
	hashMap.insert(7, 49);

	hashMap.printHashMap();

	hashMap.insert(3, 9);

	hashMap.printHashMap();

	hashMap[12] = 144; // I want to insert (12, 144) in the hashTable
	// hashMap.operator[](12) = 144;

	hashMap.printHashMap();
	
	cout << hashMap[12] << endl; // I want value corr. to 12 i.e. 144 to be printed
	// cout << hashMap.operator[](12) << endl; 

 	hashMap[12] = 0; // I want to update the value corr. to key 12 to 0
 	// hashMap.operator[](12) = 0;

 	hashMap.printHashMap();

	return 0;	
}