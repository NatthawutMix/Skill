#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	int n,m;
	cin >> n;
	while(n < 0 || n >= 100){
		cin >> n;
	}
	cin >> m;
	while(m < 0 || m >= 100){
		cin >> m;
	}
	int g[n][m];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> g[i][j];
		}
	}
	for(int i=0  ; i<n ; i++){
		for(int j=0 ; j<m ; j++){			
			for(int k=0 ; k<n ; k++){
				if(g[k][j] > g[i][j]){			
					for(int f=0 ; f<m ; f++){
						if(g[i][f] > g[i][j]){
							cout << "NO";
							return 0;	
						}												
					}
				}
			}						
		}
	}	
	cout << "YES";
}
