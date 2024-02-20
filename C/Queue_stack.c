#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct QueueUsingTwoStacks {
    int stack_enqueue[MAX_SIZE];
    int top_enqueue;
    int stack_dequeue[MAX_SIZE];
    int top_dequeue;
};

void enqueue(struct QueueUsingTwoStacks *queue, int item) {
    if (queue->top_enqueue == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    queue->stack_enqueue[++(queue->top_enqueue)] = item;
}

int dequeue(struct QueueUsingTwoStacks *queue) {
    if (queue->top_enqueue == -1 && queue->top_dequeue == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Assuming -1 is an invalid element
    }

    if (queue->top_dequeue == -1) {
        // Transfer elements from enqueue stack to dequeue stack
        while (queue->top_enqueue != -1) {
            queue->stack_dequeue[++(queue->top_dequeue)] = queue->stack_enqueue[queue->top_enqueue--];
        }
    }

    return queue->stack_dequeue[queue->top_dequeue--];
}

int is_empty(struct QueueUsingTwoStacks *queue) {
    return (queue->top_enqueue == -1 && queue->top_dequeue == -1);
}

int size(struct QueueUsingTwoStacks *queue) {
    return (queue->top_enqueue + 1) + (MAX_SIZE - queue->top_dequeue - 1);
}

int main() {
    struct QueueUsingTwoStacks queue;
    queue.top_enqueue = -1;
    queue.top_dequeue = -1;

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Dequeue: %d\n", dequeue(&queue));  // Dequeue: 1
    printf("Dequeue: %d\n", dequeue(&queue));  // Dequeue: 2

    enqueue(&queue, 4);
    printf("Is Empty: %s\n", is_empty(&queue) ? "true" : "false");  // Is Empty: false
    printf("Size: %d\n", size(&queue));  // Size: 2

    return 0;
}
