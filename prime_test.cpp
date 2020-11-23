#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace  std;

int main(){
	int n;
	int s = 1;
	cin >> n;
	if (n<2){
		cout << "NO";
		s=2;
	}
	else{
		for(int i=2 ; i<=sqrt(n) ; ++i){
	    	if(n%i == 0){
	    		cout << "NO";
	    		s=2;
	    		break;
			}		
		}    
	}
	if(s==1){
		cout << "YES";
	}

}
