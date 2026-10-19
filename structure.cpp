#include <iostream>
using namespace std;

class LINK
{
struct Node 
{
    int data;//main int data storing
    Node *link;//link stores the addrress of next node
}*START;

public:
    LINK()
    {
        START = NULL;
        int choice;
        do
    {   cout<<"1-->Create";
        cout<<endl<<"2-->Display";
        cout<<endl<<"3-->Insert";
        cout<<endl<<"4-->Exit";
        cin>>choice;
        switch(choice)
        {
            case 1:
            create();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
        }
    }
    while(choice>0&&choice<5);
    }

    void create()
    {
        int n;
        Node *prev;
        cout<<endl<<"NUMBER OF ITEMS";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            Node *temp;
            temp=new Node;
            cout<<"enter data";
            cin>>temp->data;
            temp -> link =NULL;
            if(START == NULL)
            {
                START=temp;
                prev=temp;
            }
            else
            {
                prev->link=temp;
                prev=temp;
            }
        }
    }

    void display()
    {
        Node *temp;
        temp=START;
        if(START == NULL)
        cout<<"linkedlist is empty";
        else
        {
            cout<<"DATA : ";
            while(temp!=NULL)
            {
                cout<<temp->data;
                temp=temp->link;//this will push the temp label to next node. temp is just a label given to nodes
            }
        }
    }
};
int main()
{
    LINK p;
}

