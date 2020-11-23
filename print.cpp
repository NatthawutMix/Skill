#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> c;
	int n;
	cin >> n;
	for(int i=0 ; i<n ; i++){
		int x;
		cin >> x;
		if(n==1){
			cout << 1;
			return 0;
		}
		if(n==2){
			cout << 2;
			return 0;
		}
		c.push_back(x);
	}
	int min=100000;
	int count=0;
	int end=0;
	int l=-1;
	int b;
	int ms=0;
	while(1){
		int size=0;
		for(int i=0 ; i<c.size();i++){
			//cout << "min:"<< min << endl;
			if(c[i]==0)
				b++;
			if(l==-1)
				l=i;
			if(c[i] != 0){
				size++;
				if(min == c[i])
					ms++;
				if(min>c[i]){
					min=c[i];
				}
			}
			if(c[i] == 0 || i == c.size()-1){
				if(size !=0){
					//cout << "left:" << l <<endl;
					//cout << "size:"<< size << endl;
					//cout << "min:" << min <<endl;
					//cout << "ms:" << ms <<endl;
					if(size<=min){
						count+=size;
						for(int j=l ; j<size+l ; j++){
							c[j]=0;						
							b=0;						
						}											
					}
					else{
						count+=min;
						for(int j=l ; j<size+l ; j++){
							c[j]-=min;
							b=0;
						}												
					}
				}			
				if(size !=0){
					for(int i=0 ; i<c.size() ; i++){
						cout << c[i] <<" ";
					}
					cout << endl;
				}
				l=-1;
				size=0;
				min=100000;
				ms=0;
				if(b==c.size()){
					end=2;
				}
								
			}			
		}
		if(end==2)
			break;				
	}	
	cout << count;
}
