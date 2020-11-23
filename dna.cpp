#include<iostream>
#include<string>

using namespace std;

string c1,c2;
int main(){
	int x;
	cin >> x;
	string u,d;
	int end=0;
	for(int i=0 ; i<x ; i++){	
		cin >> u >> d;
		c2=d+u;
		int up,down;
		up = u.size();
		down = d.size();
		for(int j=0 ; j<down ; j++){
			if(d.substr(j,up) == u){
				cout << d;
			if(i<x-1)
				cout << endl;
				end=2;
				break;
			}					
		}
		if(end==2){
			end=0;
			continue;
		}
	}
	
}
