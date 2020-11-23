#include <iostream>
#include <stdio.h>

using namespace std;

int board[12][12];
int c=1;

void print(int n){
	int i,j;
    for (i=2 ; i<n+2 ; i++){
        for (j=2 ; j<n+2 ; j++)
            	cout<< board[i][j]<< " " ;
        if(i<n+1)
        	cout << endl;
    }
}


bool solve(int row,int col,int n){
	//print(n);
	//cout << endl;	
	if(c==n*n)
		return true;
	if(board[row+2][col+1] == 0){//5
		c++;
		board[row+2][col+1] = c;
		if(solve(row+2,col+1,n)){
			return true;
		}
		board[row+2][col+1] = 0;
		c--;	
	}
    if(board[row+1][col+2] == 0){//1
		c++;
		board[row+1][col+2] = c;
		if(solve(row+1,col+2,n)){
			return true;
		}
		board[row+1][col+2] = 0;
		c--;
	}
	if(board[row-1][col+2] == 0){//2
		c++;
		board[row-1][col+2] = c;
		if(solve(row-1,col+2,n)){
			return true;
		}
		board[row-1][col+2] = 0;
		c--;
	}
	if(board[row+1][col-2] == 0){//3
		c++;
		board[row+1][col-2] = c;
		if(solve(row+1,col-2,n)){
			return true;
		}
		board[row+1][col-2] = 0;
		c--;
	}
	if(board[row-1][col-2] == 0){//4
		c++;
		board[row-1][col-2] = c;
		if(solve(row-1,col-2,n)){
			return true;
		}
		board[row-1][col-2] = 0;
		c--;
	}
	if(board[row+2][col-1] == 0){//6
		c++;
		board[row+2][col-1] = c;
		if(solve(row+2,col-1,n)){
			return true; 
		}
		board[row+2][col-1] = 0;
		c--;
	}
	if(board[row-2][col+1] == 0){//7
		c++;
		board[row-2][col+1] = c;
		if(solve(row-2,col+1,n)){
			return true;
		}
		board[row-2][col+1] = 0;
		c--;
	}
	if(board[row-2][col-1] == 0){//8
		c++;
		board[row-2][col-1] = c;
		if(solve(row-2,col-1,n)){
			return true;
		}
		board[row-2][col-1] = 0;
		c--;
	}
    return false;
}

int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n+4 ; i++){
    	for(int j=0 ; j<n+4 ;j++){
    		if(i<2 || j<2 || j>n+1 || i>n+1){
    			board[i][j] = 1;
			}
			else
    			board[i][j] = 0;
		}
	}
	int r,c;
	cin >> r >> c;
	board[r+1][c+1] = 1;
	if(solve(r+1,c+1,n)==false)
		board[r+1][c+1] = 0;
	print(n);        	
}
