#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
 
char board[30][30];
void printSolution(int n){
    for (int i = 0; i <n; i++){
        for (int j = 0; j < n; j++)
            cout << board[i][j];
        cout << endl;
    }
}
bool isSafe(int row, int col,int n){
    int i, j;
    for (i=0; i<col; i++)
        if (board[row][i] == 'q')
        	return false;
    for (i=n; i<col; i--)
        if (board[row][i] == 'q')
        	return false;
    for (i=n; i<row; i--)
        if (board[i][col] == 'q')
        	return false;
    for (i=0; i<row; i++)
        if (board[i][col] == 'q')
        	return false;
    for (i=row, j=col; i<n && j<n; i++, j++)
        if (board[row][i] == 'q')
        	return false;
    for (i=row, j=col; i>=0 && j<n; i--, j++)
        if (board[i][j] == 'q')
            return false;
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j] == 'q')
            return false;
    for (i=row, j=col ; j>=0 && i<n ; i++, j--)
        if (board[i][j] == 'q')
            return false; 
    return true;
}
bool solveNQUtil(int row,int n){
    if (row >= n)
        return true;
    for (int i=0 ; i<n ; i++){
        if (isSafe(row,i,n)){
            board[row][i] = 'q';
            if (solveNQUtil(row+1,n))
                return true;
            board[row][i] = '.';
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<n ;j++){
    		board[i][j] = '.';
		}
	}
	solveNQUtil(0,n);
	printSolution(n);
}
