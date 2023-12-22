#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create(struct node *list)
{
   int i,n;
   struct node *newnode,*temp;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter value:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(list==NULL)
     {
       list=temp=newnode;
     }
     else
     {
       temp->next=newnode;
       temp=newnode;
     }
   }
   return list;
}
struct node* swap(struct node *list,int m,int n)
{
  struct node *temp1,*temp2;
  int i,j,t;
  for(i=1,temp1=list; temp1!=NULL&&i<m; i++,temp1=temp1->next);
  for(j=1,temp2=list; temp2!=NULL&&j<n; j++,temp2=temp2->next);
  t=temp1->data;
  temp1->data=temp2->data;
  temp2->data=t;
  return list;
}
void disp(struct node *list)
{
   struct node *temp;
   for(temp=list; temp!=NULL; temp=temp->next)
   {
     printf("%d\t",temp->data);
   }
}
int main()
{
   struct node *list=NULL;
   int m,n;
   printf("\ncreate list\n");
   list=create(list);
   printf("display before swap:");
   disp(list);
   printf("\nenter m position to swap:");
   scanf("%d",&m);
   printf("\nenter n position to swap:");
   scanf("%d",&n);
   list=swap(list,m,n);
   printf("\nafter swap");
   disp(list);
}
