#include <stdio.h>
#include <stdlib.h>

struct node{//it can be struct (node) since node is just an variable
    int data;
    struct node *next;//next can be link
};
struct node *head=NULL,*new,*temp;
//star must be attached with variable name
struct node* beg(struct node *head){//*with node means it is returning the type of struct node
     struct node *newNode=(struct node *)malloc(sizeof(struct node));
     printf("Enter the data you want to enter at beginning");
     scanf("%d",&newNode->data);
     newNode->next=head;
     head=newNode;
     return head;
}
struct node* end(struct node *head){
    temp=head;
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
     printf("Enter the data you want to enter at end");
     scanf("%d",&newNode->data);
     newNode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
struct node* position(struct node *head){
    int p,i=1;
    printf("Enter the position you want to end");
    scanf("%d",&p);
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
     temp=head;
     while(i<p){
         temp=temp->next;
         i++;
     }
      printf("Enter the data you want to enter at the given position");
     scanf("%d",&newNode->data);
     newNode->next=temp->next;
     temp->next=newNode;
    return head;
}

int main() {
   int choice=1;
while(choice){ //take as many data you want

    new=(struct node *)malloc(sizeof(struct node));//creating new node
//(struct Node *) type casting the null pointer which is created  
    printf("Enter the data");
    scanf("%d",&new->data);//taking data
    new->next=NULL;//new ke next me bhi to kuch rakho ge
    if(head==NULL){
        head=new;
        temp=new;//temp for moving all the nodes
    }
    else{
        temp->next=new;//new node ka address ab temp ke next me
        temp=new;//ab new node ka nam temp our new dono hai 
    }
    printf("Enter the value of choice");
    scanf("%d",&choice);
}
     temp=head;
while(temp!=NULL){
    printf("%d -> ",temp->data);
   temp =temp->next;
}
head=beg(head);//calling beg function for 
     temp=head;
while(temp!=NULL){//printing after inserting at beginning
    printf("%d -> ",temp->data);
   temp =temp->next;
}
head=end(head);//calling end function for inserting at end
     temp=head;
while(temp!=NULL){//printing after inserting at end
    printf("%d -> ",temp->data);
   temp =temp->next;
}
head=position(head);
     temp=head;
while(temp!=NULL){//printing after inserting at any postion
    printf("%d -> ",temp->data);
   temp =temp->next;
}

    return 0;
}