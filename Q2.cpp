#include <iostream>
using namespace std;

class Feature
{  
   public:
   	string name;
   	Feature(string n)
   	{
   		name=n;
	   }
	virtual void analyze()=0;
	virtual ~Feature() {};
};
class LandFeature :public Feature
{
	public:
		LandFeature(string n):Feature(n){}
		void analyze()
		{
			cout<<"Land feature is detected:"<<name<<endl;
		}
};
class WaterFeature :public Feature
{
	public:
		WaterFeature(string n):Feature(n){}
		void analyze()
		{
			cout<<"Water feature is detected:"<<name<<endl;
		}
};
class Node
{
  public:
  int FeatureId;
  Feature *f;
  Node *next;
  Node(int id,Feature *feature)	
  {
  	FeatureId=id;
  	f=feature;
  	next=NULL;
  }
};
class SinglyLinkedList 
{
	public:
		Node *head;
SinglyLinkedList()
{
	head=NULL;
}

void InsertAtEnd(int id,Feature *f)
{
	Node *newnode=new Node(id,f);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	Node *temp=head;
	while(temp->next!=NULL)                                                
	{
		temp=temp->next;
	}
		temp->next=newnode;
  }

void deletebyId(int id)
{
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
		return;
	}
	if(head->FeatureId==id)
	{
		Node *temp=head;
		head=head->next;
		delete temp;
		return;
	}
	Node *curr=head;
	Node *prev=NULL;
while(curr!=NULL)
{
	if(curr->FeatureId==id)
	{
		break;
	}
prev=curr;
curr=curr->next;
	
}
if(curr==NULL)
{
	cout<<"Feature not found"<<endl;
	return;
}
prev->next=curr->next;
delete curr;
cout<<"Feature with "<<id<<" is deleted"<<endl;
}
void displayAll()
{
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
		return;
	}
Node*temp=head;
while(temp!=NULL)
{
	cout<<temp->FeatureId<<")";
	Feature *feature=temp->f; 
	feature->analyze(); 
	temp=temp->next; 
}
}
  void reverseList() 
  {
    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;

    while (curr!=NULL) 
	{
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
        }
        head=prev;
    }
};
int main() 
{
    SinglyLinkedList list;

    list.InsertAtEnd(1,new LandFeature("Forest"));
    list.InsertAtEnd(2,new WaterFeature("Waterfall"));
    list.InsertAtEnd(3,new LandFeature("Mountain"));
    list.InsertAtEnd(4,new WaterFeature("Stream"));

    cout<<"All Features"<<endl;
    list.displayAll();

    cout<<"Deleting Feature ID 2"<<endl;
    list.deletebyId(2);
    list.displayAll();

    cout<<"Reversing the List"<<endl;
    list.reverseList();
    list.displayAll();
    return 0;
}



