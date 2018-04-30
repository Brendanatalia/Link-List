#include<iostream>
using namespace std;

struct node 
{
  int data;
  node *next;
}; 
node *head;
void init()
{
    head = NULL;
}

bool isEmpty()
{
    if (head == NULL)
        return 1;
    return 0;
}

void insertDepan(int databaru);
void insertBelakang(int databaru);
void deleteDepan();
void deleteBelakang();
void insertNode();
void deleteNode();


int main(){
	init();
	int data,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		insertDepan(data);
	}
	

void insertDepan(int databaru){
	node *baru;
	baru= new node();
	baru->data=databaru;
	baru->next=baru;
	if(isEmpty()==1){
		head=baru;
		head->next=head;	
	}
	else{
		node *bantu;
		bantu=head;
		do{
			bantu=bantu->next;
		}
		while(bantu->next!=head);
		baru->next=head;
		head=baru;
		bantu->next=head;
	}
	  if (head!=NULL){
        node *bantu;
        bantu = head;
        do{
            cout<<bantu->data;
            bantu=bantu->next;
        }while (bantu!=head);
    } else {
        cout<<"List Kosong";
    }
}

void insertBelakang(int databaru){
	node *baru, *bantu;
	baru= new node();
	baru->data=databaru;
	baru->next=NULL;
	if(isEmpty()==1){
		head=baru;
		head->next=NULL;	
	}
	else{
		bantu=head;
		do{
			bantu=bantu->next;
		}
		while(bantu->next!=head);
		baru->next=NULL;
		bantu->next=head;
	}
	if (head!=NULL){
        bantu = head;
        do{
            cout<<bantu->data;
            bantu=bantu->next;
        }while (bantu!=head);
    } else {
        cout<<"List Kosong";
    }

}
	void hapusDepan (){
	TNode *hapus,*bantu;
	if (isEmpty()==0){
		int d;
		hapus = head;
		d = head->data;
		if(head->next != head){
			bantu = head;
			while(bantu->next!=head){
				bantu=bantu->next;
			}
			head = head->next;
			delete hapus;
			bantu->next = head;
		}else{
			head=NULL;
		}
		cout<<"terhapus";
	} else cout<<"Masih kosong";
}
		void hapusTengah(){
		TNode *bantu,*hapus;
		int d;
		if (isEmpty()==0){
			if(head!=tail){
				hapus = bantu;
				d = hapus->data;
				head = head->next;
				delete hapus;
			} else {
				d = tail->data;
				head=tail=NULL;
			}
		cout<<("%d terhapus\n",d);
		} 
		else cout<<("Masih kosong\n");
	}

void hapusBelakang(){
	TNode *bantu,*hapus;
	int d;
	if (isEmpty()==0){
		bantu = head;
		if(head!=tail){
			while(bantu->next!=tail){
				bantu = bantu->next;
				}
			hapus = tail;
			tail=bantu;
			d = hapus->data;
			delete hapus;
			tail->next = NULL;
		}else {
			d = tail->data;
			head=tail=NULL;
			}
		cout<<d<<" terhapus\n";
	} else cout<<"Masih kosong\n";
}

void clear(){
	TNode *bantu,*hapus;
	bantu = head;
	while(bantu!=NULL)
	{
		hapus = bantu;
		bantu = bantu->next;
		delete hapus;
	}
	head = NULL;
	tail = NULL;
}

	
