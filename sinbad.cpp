#define N 4
#include <iostream>
#include <stdio.h>

using namespace std;

void set(int g[N][N], int x ,int y){
	if(g[x][y] == 1){
		g[x][y] = 0;
	}
	else
		return;
	set(g,x-1,y+1);
	set(g,x-1,y);
	set(g,x-1,y-1);
	set(g,x,y+1);
	set(g,x,y+1);
	set(g,x+1,y);
	set(g,x+1,y-1);
	set(g,x,y-1);
}

int main(){
	int n,m;
	int count = 0;
	cin >> m >> n;	
	int g[n][m];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> g[i][j];
		}
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(g[i][j] == 1){
				count++;
			}
			set(g, i, j);
		}
	}
	cout << count;	
}
