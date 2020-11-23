#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n,m;
	cin >> m >> n;
	int g[n][m];
	int s[n][m];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> g[i][j];
		}
	}
	int c=0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(g[i][j] == 1){
				if(g[i-1][j-1] == 1){
					c++;
				}
				if(g[i-1][j] == 1){
					c++;
				}
				if(g[i-1][j+1] == 1){
					c++;
				}
				if(g[i][j+1] == 1){
					c++;
				}
				if(g[i+1][j+1] == 1){
					c++;
				}
				if(g[i+1][j] == 1){
					c++;
				}
				if(g[i+1][j-1] == 1){
					c++;
				}
				if(g[i][j-1] == 1){
					c++;
				}
				if(c<2){
					cout << "No";
					return 0;
				}
				else
					c=0;
			}				
		}
	}
	cout << "Yes";
	/*for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ;j++){
			cout << g[i][j] << " ";
		}
		cout << endl;
	}*/
}
