#include<iostream>

using namespace std;

int main() {
	

	char ch;

	int x = 0; // to store the net movement along the x-axis
	int y = 0; // to store the net movement along the y-axis

	while(true) {

		ch = cin.get();
		if(ch == '\n') {
			break;
		}

		if(ch == 'E') {
			x++;
		} else if(ch == 'W') {
			x--;
		} else if(ch == 'N') {
			y++;
		} else {
			y--;
		}

	}

	// cout << "dest : (" << x << ", " << y << ")" << endl;

	if(x >= 0 and y >= 0) {
		// dest. is in the 1st quadrant

		// print 'E' x times
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// print 'N' y times
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}


	} else if(x < 0 and y >= 0) {
		// dest. is in the 2nd quadrant

		// print 'N' y times
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}

		// print 'W' -x times
		for(int i=1; i<=-x; i++) {
			cout << 'W';
		}
 
	} else if(x < 0 and y < 0) {
		// dest. is in the 3rd quadrant

		// print 'S' -y times
		for(int i=1; i<=-y; i++) {
			cout << 'S';
		}

		// print 'W' -x times
		for(int i=1; i<=-x; i++) {
			cout << 'W';
		}

	} else {
		// dest. is in the 4th quadrant

		// print 'E' x times
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// print 'S' -y times
		for(int i=1; i<=-y; i++) {
			cout << 'S';
		}
	}

	
	return 0;
}




