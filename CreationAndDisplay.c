
#include <stdio.h>
#include <stdlib.h>

struct Node{//it can be struct (node) since node is just an variable
    int data;
    struct Node *next;//next can be link
};
struct Node *head=NULL,*new,*temp;
//star must be attached with variable name

int main() {
   int choice=1;
while(choice){ //take as many data you want

    new=(struct Node *)malloc(sizeof(struct Node));//creating new node
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
    return 0;
}