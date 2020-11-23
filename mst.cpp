#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct node{
	int par,u,v,size;
	struct node *next;
};

struct node *N(int i){
	struct node *tmp;
	tmp = new struct node;
	tmp->par = i;
	tmp->size = 1;
	tmp->next = NULL;
	return tmp;
}

struct node *find(struct node *p){
	struct node *tmp;
	if(p->next == NULL)
		return p;
	else{
		tmp = find(p->next);
		p->next = tmp;
		return tmp;		
	}		
}

int main(){
	int count;
	int x,y;
	cin >> x >> y;
	vector <pair<int,pair<int,int> > > c;
	struct node *p[x];
	for(int i=1 ; i<=x ; i++){
		p[i] = N(i);
	}
	int a = 0;
	while(a<y){
		int u,v,w;
		cin >> u >> v >> w;
		c.push_back(make_pair(w,make_pair(u,v)));
		a++;
	}
	sort(c.begin(),c.end());
	/*for(int i=0 ; i<y ; i++){
		cout << c[i].first << endl;
	}*/
	for(int i=0 ; i<y ; i++){
		struct node *tmp1,*tmp2;
		tmp1 = find(p[c[i].second.second]);
		tmp2 = find(p[c[i].second.first]);
		if(tmp1->par != tmp2->par){
			if(tmp1->size <= tmp2->size){
				tmp1->next = tmp2;
				tmp1->par = NULL;
				tmp2->size += tmp1->size;
				if(tmp2->size == x){
					count += c[i].first;
					cout << count;
					return 0;
				}
				else
					count += c[i].first;					
			}
			else{
				tmp2->next = tmp1;
				tmp2->par = NULL;
				tmp1->size += tmp2->size;
				if(tmp1->size == x){
					count += c[i].first;
					cout << count;
					return 0;
				}
				else
					count += c[i].first;
			}			
			
		}
	}
}
