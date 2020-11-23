#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int x,y,z;
	vector <int> c;
	cin >> x >> y >> z;
	int g[y+2][x+2];
	int s[y][x];
	for(int i=0 ; i<y+2 ; i++){
		for(int j=0 ; j<x+2 ; j++){
			if(i==0 || j==0 || i==y+1 || j == x+1){
				g[i][j] = 0;
			}
			else
				cin >> g[i][j];
		}
	}
	for(int i=1 ; i<y+1 ; i++){
		for(int j=1 ; j<x+1 ; j++){
			if(z == 4){
				c.push_back(g[i][j]);
				c.push_back(g[i][j+1]);
				c.push_back(g[i][j-1]);
				c.push_back(g[i-1][j]);
				c.push_back(g[i+1][j]);
				sort(c.begin(),c.end());
				s[i-1][j-1] = c[c.size()/2];
				c.clear();
			}
			if(z == 8){
				c.push_back(g[i+1][j+1]);
				c.push_back(g[i+1][j-1]);
				c.push_back(g[i-1][j-1]);
				c.push_back(g[i-1][j+1]);
				c.push_back(g[i][j]);
				c.push_back(g[i][j+1]);
				c.push_back(g[i][j-1]);
				c.push_back(g[i-1][j]);
				c.push_back(g[i+1][j]);
				sort(c.begin(),c.end());
				s[i-1][j-1] = c[c.size()/2];
				c.clear();
			}
		}
	}
	cout << endl;
	for(int i=0 ; i<y ; i++){
		for(int j=0 ; j<x ; j++){
			cout <<  s[i][j] << " ";
		}
		if(i != y+1)
			cout << endl;
	}
}
