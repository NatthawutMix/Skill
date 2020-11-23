#include <stdio.h>
#include <iostream>

using namespace std;

int tax(int n){
	int s=0;
	if (n <=100000){
		n-= n;
		return s;
	}
	if (n>0){
		n-=100000;
		if(n>900000){
			s+=(900000*6)/100;
			n-=900000;
		}
		else{
			s+=(n*6)/100;
			n-=n;
			return s;
		}		
	}
	if (n>0){
		if(n>4000000){
			s+=(4000000*12)/100;
			n-=4000000;
		}
		else{
			s+=(n*12)/100;
			n-=n;						
			return s;
		}
	}
	if (n>0){
		if(n > 5000000){
			s+=(5000000*20)/100;
			n-=5000000;
		}
		else{
			s+=(n*20)/100;
			n-=n;
			return s;
		}
	}
	if(n>0){
		s+=(n*32)/100;
		n-=n;		
		return s;
	}
}
int main(){
	int x;
	while(1){
		cin >> x;
		if (x==0){
			break;
		}
		cout << tax(x) << endl;
	}
	
}
