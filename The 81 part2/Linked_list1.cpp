#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node* link;
};

Node* head=new Node();

Node* create_list(int n)
{
 Node* ptr;
 ptr=head;

 int a;
 for(int i=0;i<n;i++)
 {
     cin>>a;
     if(i==0)
     {
         ptr->data=a;
     }
     Node* new_node;
     new_node=new Node();
     new_node->data=a;
     ptr->link=new_node;
     ptr=new_node;

 }
 return head;
}

void travese(Node *h)
{
    Node* ptr=h;
    while(ptr->link!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }

}
int main()
{
  Node *n;
  int size1;
  cin>>size1;
  n=create_list(size1);
   travese(n);
}
