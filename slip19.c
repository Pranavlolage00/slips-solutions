
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
    printf("enter value :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(list==NULL)
    {
      temp=list=newnode;
    }else
    {
      temp->next=newnode;
      temp=newnode;
    }
  }
  return list;+
}
void disp(struct node *list)
{
  struct node *temp;
  for(temp=list; temp!=NULL; temp=temp->next)
  {
    printf("%d\t",temp->data);
  }
}
int search(struct node *list,int num)
{
   struct node *temp;
   int i;
   for(i=1,temp=list; temp!=NULL; i++,temp=temp->next)
   {
     if(temp->data==num)
     {
       return i;
       break;
     }
   } 
   return 0;
}
int main()
{
   struct node *list=NULL;
   int num,x;
   printf("\ncreate list\n");
   list=create(list);
   printf("\n display linked list \n");
   disp(list);
   printf("\nenter number to search:\n");
   scanf("%d",&num);
   x=search(list,num);
   if(x==0)
    printf("number is not found:");
   else
    printf("number is found at position=%d",x);
}
