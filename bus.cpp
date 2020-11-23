#include <iostream>
#include <stdio.h>
#include <algorithm> 

using namespace std;

int main(){
	int n,d,r;	
	int sum=0;	
	while(1){
		cin >> n >> d >> r;
		while(n<0 || n>100){
			cin >> n;
		}
		while(d<0 || d>10000){
			cin >> d;
		}
		while(r<0 || r>5){
			cin >> r;
		}
		int s[n];
		int q[n];
		if(n>0 && d>0 && r>0){
			for(int i=0 ; i<n ; i++){
				cin >> s[i];
			}
			for(int j=0 ; j<n ; j++){
				cin >> q[j];
			}
			int i=0;
			sort(s,s+n);
			sort(q,q+n);
			while(i<n){
				for(int j=n-1 ; j>=0 ; j--){
					if(s[i]+q[j] > d){
						sum+= s[i]+q[j]-d;
					}
					i++;
				}
			}
			cout << sum*r << endl;
			sum=0;
		}		
		else{
			break;
		}			
	}	
	
}
