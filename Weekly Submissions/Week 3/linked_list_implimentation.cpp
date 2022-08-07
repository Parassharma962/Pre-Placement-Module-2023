#include<bits\stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int val){
		data=val;
		next=NULL;
	}
};
void insertAthead(node* &head,node* &tail,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		tail=n;
		return;
	}
	n->next=head;
	head=n;
}
void insertAtmiddle(node* &head,int val,int pos){
	node* n=new node(val);
	node* temp=head;
	while(temp->next->data!=pos){
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
}
void insertAtend(node* &head,node* &tail,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		tail=n;
		return;
	}
	tail->next=n;
	tail=n;
}
void deletehead(node* &head){
	node* todelete=head;
	head=head->next;
	todelete->next=NULL;
	delete(todelete);
}
void deleteAtmiddle(node* &head,int val){
	node* temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* todelete=temp->next;
	temp->next=temp->next->next;
	todelete->next=NULL;
	delete(todelete);
}
void deleteAttail(node* &head){
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node* todelete=temp->next;
	temp->next=NULL;
	delete(todelete);
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	node* head=NULL;
	node* tail=NULL;
	int n;
	cout<<"Enter the list size\n";
	cin>>n;
	int a[n];
	cout<<"Enter the list\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
		insertAtend(head,tail,a[i]);
	}
	display(head);
	deletehead(head);
	display(head);
	insertAthead(head,tail,6);
	display(head);
	insertAtmiddle(head,7,3);
	display(head);
	return 0;
}
