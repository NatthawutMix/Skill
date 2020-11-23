#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int x;    
    cin >> x;
    int lst[x+2][x+2];
    for(int i=0 ; i<x+2 ; i++){
    	for(int j=0 ; j<x+2 ; j++){
			if(i==0 || j==0 || i==x+1 || j==x+1){
				lst[i][j] = -1;
			}
			
			else{			
			int y;
	    	cin >> y;
			lst[i][j] = y;   	
			}
		}
	}
	
	for(int i=1 ; i<x+1 ; i++){
    	for(int j=1 ; j<x+1 ; j++){
    		if(lst[i][j] > lst[i][j+1]-1 || lst[i][j] < lst[i][j+1]+1){
    			if(lst[i][j+1] != -1){
    				cout << lst[i][j] << lst[i][j+1] << "#1";
    				cout << "NO";
    				return 0;
				}
    			
			}
			if( lst[i][j] > lst[i+1][j]-1 || lst[i][j] < lst[i+1][j]+1 ){
				if(lst[i+1][j] != -1){
					cout << lst[i][j] << lst[i][j+1];
					cout << "NO";
					return 0;
				}			
			}
    		
    	}    	
    }
    cout << "YES";
}
