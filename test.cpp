#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int board[30][30];
void print(int n){
	int i,j;
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++)
            	cout<< board[i][j]<< " " ;
        if(i<n+1)
        	cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n; i++){
    	for(int j=0 ; j<n ;j++){
    			board[i][j] = 0;
		}
	}
	board[1][2]+(2,1) = 1;
	print(n);
}
