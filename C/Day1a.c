#include <stdio.h>
#include <stdlib.h>

#define size 5

struct circularll
{
    int rear;
    int front;
    int arr[size];
};

int is_full(struct circularll *ptr)
{
    if ((ptr->rear + 1) % size == ptr->front)
    {
        return 1;
    }
    return 0;
}

int is_empty(struct circularll *ptr)
{
    if (ptr->rear == ptr->front)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularll *ptr, int value)
{
    if (is_full(ptr))
    {
        printf("Circular queue is overflow.\n");
    }
    else
    {
        ptr->arr[ptr->rear] = value;
        printf("The element is enqueued %d.\n", ptr->arr[ptr->rear]);
        ptr->rear = (ptr->rear + 1) % size;
    }
}

void dequeue(struct circularll *ptr)
{
    if (is_empty(ptr))
    {
        printf("Circular queue is underflow.\n");
    }
    else
    {
        printf("Element dequeued is %d.\n", ptr->arr[ptr->front]);
        ptr->front = (ptr->front + 1) % size;
    }
}

void display(struct circularll *ptr)
{
    if (is_empty(ptr))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        int i = ptr->front;
        while (i != ptr->rear)
        {
            printf("%d<--- ", ptr->arr[i]);
            i = (i + 1) % size;
        }
        printf("\n");
    }
}

int main()
{
    struct circularll *s = (struct circularll *)malloc(sizeof(struct circularll));
    s->rear = s->front = 0;

    enqueue(s, 7);
    enqueue(s, 10);
    enqueue(s, 1);
    enqueue(s, 45);

    // Dequeue elements from the circular queue
    dequeue(s);
    dequeue(s);

    // Enqueue elements in the circular queue
    enqueue(s, 18);
    enqueue(s, 33);
    enqueue(s, 73);

    // Display the queue
    display(s);

    free(s); // Free the allocated memory

    return 0;
}
