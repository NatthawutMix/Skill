#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	int x;
	cin >> x;
	int y=2;
	while(x>1){
		if(x%y==0){
			cout << y << endl;
			x/=y;
		}
		else
			y++;
	}
}
