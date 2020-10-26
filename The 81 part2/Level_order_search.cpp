#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Node *root=NULL;
struct Queue
{
    int size1;
    int front1;
    int rear;
    Node **Q;
};

void create(struct Queue *q,int size1)
{
    q->size1=size1;
    q->front1=q->rear=-1;
    q->Q=(Node**)malloc(q->size1*sizeof(Node*));

}

void enqueue(struct Queue *q,Node* x)
{
    if(q->rear==q->size1-1)
        cout<<"Queue is Full";
    else
    {
        q->rear=(q->rear+1)%q->size1;
        q->Q[q->rear]=x;
    }
}

Node* dequeue(struct Queue *q)
{
 Node* x=NULL;
 if(q->front1==q->rear)
        cout<<"Queue is Empty\n";
 else
 {
   q->front1=(q->front1+1)%q->size1;
   x=q->Q[q->front1];
 }
 return x;
}

void display(struct Queue q)
{

    for(int i=q.front1+1;i<=q.rear;i++)
        cout<<q.Q[i]<<" ";
    cout<<endl;
}

int isempty(struct Queue q)
{
    return q.front1==q.rear;
}
void create()
{
    struct Node *p,*t;
    int x;
    struct Queue q;

    create(&q,100);
    cout<<"Enter root value"<<endl;
    cin>>x;
    root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
 enqueue(&q,root);

 while(!isempty(q))
 {

     p=dequeue(&q);
     cout<<"Enter left child of "<<p->data<<endl;
      cin>>x;
     if(x!=-1){
  t=new Node;
t->data=x;
t->lchild=t->rchild=NULL;
p->lchild=t;
enqueue(&q,t);
     }

 cout<<"Enter right child of "<<p->data<<endl;
 cin>>x;
 if(x!=-1)
 {
     t=new Node;
     t->data=x;
     t->lchild=t->rchild=NULL;
     p->rchild=t;
     enqueue(&q,t);
 }


}
}
void preorder( Node *p)
{
   if(p)
   {
       cout<<p->data<<" ";
       preorder(p->lchild);
       preorder(p->rchild);
   }
}

void levelOrder(struct Node *root)
{
  struct  Queue q;
  create(&q,100);

  cout<<root->data<<" ";
  enqueue(&q,root);

  while(!isempty(q))
  {
      root=dequeue(&q);
      if(root->lchild)
      {
          cout<<root->lchild->data<<" ";
          enqueue(&q,root->lchild);
      }
      if(root->rchild)
      {
          cout<<root->rchild->data<<" ";
          enqueue(&q,root->rchild);
      }
  }
}
int main()
{
    create();

cout<<"----------preorder traversing---------"<<endl;
preorder(root);
cout<<endl;
cout<<"---------level order traversing---------"<<endl;
levelOrder(root);
}

