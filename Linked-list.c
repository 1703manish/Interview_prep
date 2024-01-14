#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void print_list(struct node *head){
    
    struct node *temp=head;
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
void push(struct node **head, int new_data){
  
        struct node* new_node=(struct node *)malloc (sizeof(struct node));
        
        new_node->data=new_data;
        new_node->next=*head;
        (*head)=new_node;
    
}
void reverse(struct node **head){
    
    struct node *prev = NULL;
    struct node *curr = *head;
    struct node *next = NULL;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head=prev;
}

int main(){
    
    struct node* head=NULL;
    
    push(&head,23);
    push(&head,44);
    push(&head,88);
    
    print_list(head);
    
    reverse(&head);
    
    print_list(head);
    
    return 0;
}
