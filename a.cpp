#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main() {
	
	int floor = 1;
	int time = 0;
	while(floor <= 60) {
		int k = rand() % 6 + 1;
		if(k % 2 == 0 ) floor++;
		else {
			if ( floor > 1 )
			floor-- ;	
		}
		time++;
//		cout << floor << endl;
	}
	cout << time << endl;
}
