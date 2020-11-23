#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n==1){
		int z;
		cin >> z;
		if(z!=0){
			cout << 1 << " " << 1 <<endl;
			cout << 1;
			return 0;
		}			
	}
	int g[n][n];
	char s[n];
	int c;
	for(int j=-1 ; j<n ; j++){
		gets(s);
		for(int i=0 ; i<strlen(s) ; i++){
			//cout << strlen(s);
			g[j][i] = s[i]-48;
			if(s[i]-48 != 0){
				c++;
			}
		}
	}
	int x;
	int o,p;
	int count=0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(g[i][j] != 0 ){
				if(c<count*count){
					break;
				}
				c--;
				int a=0 ;
				while(1){
					if(g[i][j+count] == 0 || g[i+count][j] == 0){
						break;
					}
					else if(g[i][j+a] == 0 || g[i+a][j] == 0)
						break;
					else
						a++;					
				}
				if(a>count){
					x=a;
					while(a>0){
						int k=0;
						while(k<x){
							if(g[i+a-1][j+k] == 0){
								x--;
								break;
							}
							else
								k++;
						}
						a--;
						k=0;
					}
					if(x > count){
						c-=x*x;
						count = x;
						o = i+1;
						p = j+1;
					}
				}
			}
		}
	}
	cout << o << " " << p << endl;
	cout<< count*count;
}
