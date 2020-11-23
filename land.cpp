#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int x,y;
	vector <int> c1,c2;
	int c=1;
	cin >> x >> y;
	for(int i=0 ; i<x ; i++){
		for(int j=0 ; j<y ; j++){
			int a;
			cin >> a;
			c1.push_back(a);
		}
		for(int k=0 ; k<y ; k++){
			int a;
			cin >> a;
			c2.push_back(a);
		}
	}
	int end=1;
	while(end==1){
		for(int i=0 ; i<y ; i++){
			cout << c1[i] << "," <<c2[i] << endl;
			cout << c2[i]*c <<endl;
			if((c2[i]*c)%c1[i] != 0 || (c2[i]*c)/c1[i] != c){
				c++;
				break;
			}
			if((c2[i]*c)/c1[i] == c){
				end=2;
			}
		}
	}
}
