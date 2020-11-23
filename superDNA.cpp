#include<iostream>
#include<string>

using namespace std;

string c1,c2;
int main(){
	int x;
	cin >> x;
	string u,d;
	string q,w;
	int end=0;
	for(int i=0 ; i<x ; i++){	
		cin >> u >> d;
		if(u[0]<d[0])
			c2=u+d;
		else
			c2=d+u;
		c1="";
		int up,down;
		up = u.size();
		down = d.size();
		if(up<down){			
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
		else{
			for(int j=0 ; j<up ; j++){
				if(u.substr(j,down) == d){
					cout << u;
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
		if(down<up){
			for(int i=0 ;i<down;i++){
				q=u.substr(0,down-i);
				w=d.substr(i,down);
				if(w==q){
					c1 = d.substr(0,i)+u;
					if(c1.size()<c2.size()){
						c2=c1;
					}
					if(c1.size()==c2.size()){
						if(c1[0]<c2[0])
							c2=c1;
					}
				}
			}
			for(int i=1;i<down;i++){
				q=d.substr(0,i);
				w=u.substr(up-i,i);
				if(w==q){
					c1 = u+d.substr(i,down);
					if(c1.size()<c2.size()){
						c2=c1;
					}
					if(c1.size()==c2.size()){
						if(c1[0]<c2[0])
							c2=c1;
					}
				}
			}			
		}
		else{
			for(int i=0 ;i<up;i++){
				q=u.substr(i,up);
				w=d.substr(0,up-i);
				if(w==q){
					c1 = u.substr(0,i)+d;
					if(c1.size()<c2.size()){
						c2=c1;
					}
					if(c1.size()==c2.size()){
						if(c1[0]<c2[0])
							c2=c1;
					}
				}
			}
			for(int i=1;i<up;i++){
				q=d.substr(down-i,i);
				w=u.substr(0,i);
				if(q==w){
					c1=d+u.substr(i,down);
					if(c1.size()<c2.size()){
						c2=c1;
					}
					if(c1.size()==c2.size()){
						if(c1[0]<c2[0])
							c2=c1;
					}
				}
			}
		}
		cout << c2;
		if(i<x-1)
			cout << endl;
	}		
}
