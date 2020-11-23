#include <iostream>
#include <stdio.h>

using namespace std;

int main(){	
	int n,x;
	x=0;
	cin >> n;
	while(n<0 || n>=200){
		cin >> n;
	}
	x=n;
	n/=2;
	x+=n;
	cout << x;
	/*while(n>2){
		if(n != 4){	
			x += n/3;
			n = n/3+n%3;		
			
		}
		else{
			x += n/3+1;
			break;
		}
		
	}
	cout << x;*/
}

