#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int count = 0;

typedef struct stack{
    int items[MAX];
    int top;
}st;

void create_empty_stack(st *s){
    s->top = -1;
}
int is_empty(st *s){
    if( s->top == -1)
        return 1;
    else
        return 0;
}
int is_full(st *s){
    if( s->top == MAX-1)
        return 1;
    else
        return 0;
}
void push(st *s, int value){
    if(is_full(s))
        printf("Stack is already full\n");
    else{
        s->top++;
        s->items[s->top] = value;
    }
    count++;
}
void pop(st *s){
    if(is_empty(s))
        printf("\nStack is already empty cannot pop\n");
    else{
        printf("Popped out element from Stack is %d ",s->items[s->top]);
        s->top--;
    }
    count--;
}
void display(st *s){
    
    for(int i=0; i<count; i++){
        printf(" %d ",s->items[i]);
    }
    printf("\n");
}

void main(){
    
    st *s = (st *)malloc(sizeof(st));
    
    create_empty_stack(s);
    
    push(s,11);
    push(s,34);
    push(s,56);
    
    printf("\nelements present in Stack are:\n");
    display(s);
    
    pop(s);
    printf("\nelements present in Stack are:\n");
    display(s);
    
    
}

