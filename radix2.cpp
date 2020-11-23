#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int main (){
	int x,y,z;
	vector <int> s;
	cin >> x;
	for(int i=0 ; i<x ; i++){
		cin >> y >> z;
		do{
			s.push_back(y%z);
			y/=z;
		}while(y>0);
		for(int j=s.size)-1 ; j>=0 ; j--){
			cout << s[j];
		}
		cout << endl;
		s.clear();
	}	
}
