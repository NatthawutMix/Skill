#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	int n;
	cin >> n;
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
	int x,y;
	int o,p;
	int end=1;
	int count=0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(g[i][j] != 0 || c > count*count ){
				if(c<count*count){
					end=2;
					break;
				}
				c--;
				int a=0 ;
				while(1){
					if(g[i][j+a] == 0 || g[i+a][j] == 0)
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
						o = i;
						p = j;
					}
				}
				if(end==2){
					break;
				}
			}
			if(end==2){
				break;
			}
		}
	}
	cout << o+1 << " " << p+1 << endl;
	cout<< count*count;
}
