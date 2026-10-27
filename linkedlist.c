#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertionbetween(struct node *ptr,int val,int index)
{
  return ptr;

}
struct node *deleteatend(struct node *ptr)
{struct node *pt=ptr;
while(pt->next->next!=NULL){
    pt=pt->next;
}
free(pt->next);
pt->next=NULL;
return ptr;


struct node *deleteatstart(struct node *ptr)
{struct node *temp=ptr;
ptr=ptr->next;
free(temp);
return ptr;}