#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int x,y;
	x=y=0;
	char s[100];
	gets(s);
	if(strlen(s) < 101){
		for(int i=0; i<strlen(s);i++){
			if(s[i] == 'N'){
				y+=1;
			}			
			if(s[i] == 'S'){
				y-=1;
			}			
			if(s[i] == 'E'){
				x+=1;
			}				
			if(s[i] == 'W'){
				x-=1;
			}			
			if(s[i] == 'Z'){
				x=0;
				y=0;
			}		
		}
		cout << x << " "<< y;	
	}
	
}
