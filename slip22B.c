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
       temp=list=newnode;
     }
     else
     {
       temp->next=newnode;
       temp=newnode;
     }
  }
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
void count(struct node *list)
{
   int ecnt=0,ocnt=0,cnt=0;
   struct node *temp;
   for(temp=list; temp!=NULL; temp=temp->next)
   {
      if(temp->data%2==0)
       ecnt++;
      else
       ocnt++;
    }
    for(temp=list; temp!=NULL; temp=temp->next)
    {
       if(temp->data>0)
       cnt++;
    }
  printf("\neven count=%d",ecnt);
  printf("\nodd count=%d",ocnt);
  printf("\nnon-zero count=%d",cnt);
}
int main()
{
  int i;
  struct node *list=NULL;
  printf("\n create list \n");
  list=create(list);
  printf("\ndisplay linkedlist\n");
  disp(list);
  count(list);
}
