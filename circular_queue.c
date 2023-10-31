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
        return (q->rear + 1) % CAP == q->front;
    }

    void enqueue(queue *q, int data){
        if(is_full(q)) return;
        if(is_empty(q)) {
          q->front = 0;
          q->rear = 0;
          q->data[0] = data;
          return;
        }
        q->rear = (q->rear + 1) % CAP;
        q->data[q->rear] = data;
    }

    int dequeue(queue *q){
        if(is_empty(q)) return -1;
        int dequeued = q->data[q->front];
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        }else {
            q->front = (q->front +1) % CAP;
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
    int i = q->front;
        while (i != q->rear) {
            printf("%d < ", q->data[i]);
            i = (i + 1) % CAP;
        }
        printf("%d < ", q->data[i]);
        printf("\n");
    }
