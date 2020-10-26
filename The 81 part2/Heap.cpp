#include<bits/stdc++.h>
using namespace std;


int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2*i+1;
}
int parent(int i)
{
    return i/2;
}

void max_heapify(int heap[],int heap_size,int i)
{
    int l,r,largest,t;
    l=left(i);
    r=right(i);

    if(l<=heap_size&&heap[l]>heap[i])
    {
        largest=l;
    }
    else
        largest=i;
}
int main()
{
  int heap_size=9;
  int heap[]={0,9,7,17,3,5,12,10,1,2};

}
