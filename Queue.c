//Queue implementation in case
#include<stdio.h>

#define MAX 10
int items[MAX],rear=-1,front=-1;

void enqueue(int value){
    if( rear == MAX-1)
        printf("\nQueue is already full\n");
    else{
        if( front == -1 )
            front = 0;
        rear++;
        items[rear] = value;
        printf("Inserted in queue is %d \n",value);
    }
}
void dequeue(){
    if( front == -1 )
        printf("\nQueue is empty\n");
    else{
        printf("\n Deleted %d \n",items[front]);
        front++;
        if( front > rear )
            rear = front = -1;
    }
    
}
void display(){
    if ( rear == -1 )
        printf("\nQueue is empty\n");
    else{
    int i;
    printf("\nElements in QUEUE are:\n");
    for(i=front; i <= rear; i++){
        printf(" %d ", items[i] );
        }
    }
}
void main(){
    
   
    
    enqueue(12);
    enqueue(24);
    enqueue(36);
    
    display();
     dequeue();
     display();
}
