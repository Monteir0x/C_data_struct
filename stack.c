#include <stdio.h>
#include <stdbool.h>

#define CAP 6
typedef struct stack{
    int top;
    int elements[CAP];
} stack;

    int length(stack *s){
         
        return s->top + 1;
    }

    bool is_empty(stack *s){
        return s->top == -1;
    }

    bool is_full(stack *s){
        return s->top == CAP -1;
    }

    int peek(stack *s){
        return s->elements[s->top];
    }

    void push(stack *s, int data){
        if(is_full(s)){
            printf("Stack overflow\n");
            return;
        }
        s->top++;
        s->elements[s->top] = data;
    }

    int pop(stack *s){
       
        if (is_empty(s)){
            printf("Stack underflow\n"); 
            return -1;
        }
        int popped = s->elements[s->top];
        s->top--;
        return popped;
    }

    void print_stack(stack *s){
        for (int i = s->top; i > -1; i--){        
            printf("%d\n",s->elements[i]);
        }
    }
