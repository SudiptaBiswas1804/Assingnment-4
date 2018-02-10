//Programme for bubble sort in linkedlist
#include <iostream>
using namespace std;

//Contruction of the node
struct node{
	int data;
	node *next;
};

//The linkedlist class
class linkedlist{
	private:
	node *head;
	node *tail;
	public:
		linkedlist(){
			head=NULL;
			tail=NULL;
		}
		
		//Addition function - function for adding an element at one end 
		void addnode(int n){
			node *temp=new node;
			temp->data=n;
			if(head==NULL){
				head=temp;
				tail=temp;
			}
			else{
				tail->next=temp;
				tail=temp;
			}
		}
		//Displaying function - function for displaying the elements of the linked list
		void displaynode(){
			node *temp=new node;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL"<<endl;
		}
		
		//To count the number of elements in the list
		int countnode() 
		{       int count=0;
		        node *temp=new node;
	                    temp= head;
	                    while(temp!=NULL)
                                    { temp=temp->next;
                                      count++;
                                    }
	                    return count;
                        }	
	
		//Sorting function - function for bubble sorting of the linked list
		int sortnode(int n){
			node *cur=new node;
			node *prev=new node;
			for(int i=0; i<n; i++){
				prev=head;
				for(int j=0; j<(n-i)-1; j++){
					if(prev->data>prev->next->data){
						cur->data=prev->data;
						prev->data=prev->next->data;
						prev->next->data=cur->data;
					}
				prev=prev->next;
				}
			}
			return 0;
			
		}
		
};

int main(){
	int n;
	linkedlist l;
	l.addnode(2);
	l.addnode(1);
	l.addnode(6);
	cout<<"The elements of linked list without sorting is : "<<endl;
	l.displaynode();
	n=l.countnode();
            l.sortnode(n);
	cout<<"The elements of linked list with sorting is : "<<endl;
            l.displaynode();
            return 0;
}
