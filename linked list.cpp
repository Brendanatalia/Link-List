#include <iostream>
using namespace std;

struct node{
int data;
node *next;
};

class linkedlist
{
private:
node *head, *tail;
public:
linkedlist()
{
head=NULL;
tail=NULL;
}
};//kita pake head and tail aja yaa guys, oke mi, okelah mi

 void buatnode(int value){ //ini tambah data di belakang gaesss
    node *baru =new node;
    baru->data=value;
    baru->next=NULL;
    if(head==NULL){
	head=baru;
	tail=baru;
    baru=NULL;      
    }
    else
    {	
    tail->next=baru;
    tail=baru;
}
}

void tampilan(){
    node *baru=new node;
    baru=head;
    while(baru!=NULL)
    {
      cout<<baru->data<<"  ";
      baru=baru->next;
    } 
}
  
    void tambahdepan(int nilai)
  {
    node *baru=new node;
    baru->data=nilai;
    baru->next=head;
    head=baru;
  }
   void tambahtengah(int letak, int nilai)
  {
    node *sebelum=new node;
    node *sesudah=new node;
    node *baru=new node;
    sesudah=head;
    for(int i=1;i<letak;i++)
    {
      sebelum=sesudah;
      sesudah=sesudah->next;
    }
    baru->data=nilai;
    sebelum->next=baru;	
    baru->next=sesudah;
  }
  
  void hapusdepan()
  {
    node *baru=new node;
    baru=head;
    head=head->next;
    delete baru;
  }

void hapusbelakang()
  {
    node *sesudah=new node;
    node *sebelum=new node;
    sesudah=head;
    while(sesudah->next!=NULL)
    {
      sebelum=sesudah;
      sesudah=sesudah->next;	
    }
    tail=sebelum;
    sebelum->next=NULL;
    delete sesudah;
  }
void hapusLetak(int letak)
  {
    node *skrg=new node;
    node *sbl=new node;
    skrg=head;
    for(int i=1;i<letak;i++)
    {
      sbl=skrg;
      skrg=skrg->next;
    }
    sbl->next=skrg->next;
  }

int main(){
	list obj;
	obj.buatnode(27);
	obj.buatnode(6);
	obj.buatnode(13);
	obj.buatnode(18);
}
