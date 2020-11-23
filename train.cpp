#include <iostream>
#include <stdio.h>
#include <algorithm> 
#include <vector>

using namespace std;

struct node{
	int value,pos;
	struct node *next,*prev;
};
struct node *head=NULL,*tail=NULL;

void *print(struct node *head){
	struct node *p;
	p=head; 
	while(p!=NULL)
	{	cout << p->value ;
		p=p->next;
		//if(p!=NULL)
		//	cout << endl;
	}
	return 0;
}
int main (){
	int n,k;
	cin >> n >> k;
	struct node *ptr[n];
	for(int i=1 ; i<=n ;i++){
		if(i==1){
			ptr[i] = new struct node;
			ptr[i]->prev = NULL;
			ptr[i]->value = i;
			head = ptr[i];
		}
		else if(i == n){
			ptr[i] = new struct node;
			ptr[i]->next = NULL;
			ptr[i]->value = i;
			ptr[i]->prev = ptr[i-1];
			ptr[i]->prev->next = ptr[i];
			tail = ptr[i];
		}
		else{
			ptr[i] = new struct node;
			ptr[i]->value = i;
			ptr[i]->prev = ptr[i-1];
			ptr[i]->prev->next = ptr[i];
		}		
	}
	while(k>0){
		int x,y;
		cin >> x >> y;
		if(ptr[x]->prev == NULL){
			head = ptr[y]->next;
			head->prev = NULL;
			tail->next = ptr[x];
			tail = ptr[y];
			tail->next = NULL;
		}
		else if(ptr[x]->prev!=NULL && ptr[y]->next != NULL){
			ptr[x]->prev->next = ptr[y]->next;
			ptr[y]->next->prev = ptr[x]->prev;
			tail->next = ptr[x];
			ptr[x]->prev = tail;
			tail = ptr[y];
			tail->next = NULL;
		}
		else{
			//cout << k << " : ";
			k--;
			continue;
		}
		print(head);
		cout << endl;
		//cout << endl;
		//cout << k << " : ";
		k--;
	}
	print(head);	
}
