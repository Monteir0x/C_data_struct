#include <stdio.h>
#include <stdbool.h>

#define CAP 10 
typedef struct
{
    int data[CAP];
    int front;
    int rear;
}queue;

    bool is_empty(queue *q){
        return q->front == -1;
    }

    bool is_full(queue *q){
        return q->rear == CAP -1;
    }

    void enqueue(queue *q, int data){
        if(is_full(q)) return;
        if(is_empty(q)) {
          q->front = 0;
        }
        q->rear++;
        q->data[q->rear] = data;
    }

    int dequeue(queue *q){
        if(is_empty(q)) return -1;
        int dequeued = q->data[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = -1;
            q->rear = -1;
        }
        return dequeued;
    }

    int peek(queue *q){
        if(is_empty(q)) return -1;
        return q->data[q->front];        
    }

    void print_queue(queue *q){
        if (is_empty(q)) {
            printf("Queue is empty\n");
            return;
        }
        for(int i = q->front; i <= q->rear; i++){
            printf("%d < ", q->data[i]);
        }
        printf("\n");
    }
