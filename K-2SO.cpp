#include <iostream>
#include <stdio.h>
#include <algorithm> 
#include <vector>

using namespace std;

int main(){
	int x;
	cin >> x;
	int c[1000000]={};
	int c2[1000000]={};
	int n,m,y;
	y=0;
	int k=0;
	for(int i=0 ; i<x ; i++){
		cin >> n >> m;
		while(n>m){
			cin >> n >> m;
		}
		for(int j=n ; j<=m ; j++){
			if(y==0){
				c[y]=j;
				c2[y]++;
				y++;
			}
			else{
				while(k<y){
					if(j == c[k]){
						c2[k]++;
						if(c2[k] > c2[0]){
							int a,b;
							a = c2[0];
							c2[0] = c2[k];
							c2[k] = a;
							b = c[0];
							c[0] = c[k];
							c[k] = b;
						}
						k++;
						k=0;
						break;
					}
					else
						k++;
				}
				if(k == y){
					c[y] = j;
					c2[y]++;
					y++;
					k=0;
				}
			}
		}
	}
	cout << c[0];
}
