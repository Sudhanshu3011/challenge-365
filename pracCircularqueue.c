#include <stdio.h>
#include <stdlib.h>

struct queuecir
{

    int front;
    int rear;
    int size;
    int *arr;
};

int fullqueue(struct queuecir *c_q)
{
    if (((c_q->rear + 1) % c_q->size) == (c_q->front))
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int emptyqueue(struct queuecir *c_q)
{
    if (c_q->front == c_q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queuecir *c_q, int data)
{
    if (!fullqueue(c_q))
    {
        c_q->arr[c_q->rear] = data;
        c_q->rear = (c_q->rear + 1) % c_q->size;
    }
    else
    {
        printf("The queue is full.\n");
    }
}
int dequeue(struct queuecir *c_q)
{
    int value;
    if (!emptyqueue(c_q))
    {
        int value = c_q->arr[c_q->front];
        c_q->front = (c_q->front + 1) % c_q->size;
    }
    else
    {
        printf("The queue is empty.");
    }
}
void display(struct queuecir *c_q)
{

    struct queuecir *ptr = (struct queuecir *)malloc(sizeof(struct queuecir));
    ptr->front = c_q->front;
    ptr->rear = c_q->rear;
    ptr->size = c_q->size;
    ptr->arr = c_q->arr;
    if (!emptyqueue(ptr))
    {

        do
        {

            printf("%d ", ptr->arr[ptr->front]);
            ptr->front = (ptr->front + 1) % ptr->size;
        } while (ptr->front != ptr->rear);
        printf("\n");
    }
    else
    {
        printf("The queue is empty.\n");
    }
    free(ptr);
}

int main()
{
    struct queuecir *v = (struct queuecir *)malloc(sizeof(struct queuecir));
    v->front = v->rear = 0;
    v->size = 5;
    v->arr = (int *)malloc((v->size) * sizeof(int));

    int choices, data;
    do
    {
        printf("Select from the following\n1.Enqueue\t2.Dequeue\t3.Display\t4.Exit \n");

        printf("Enter your choice:");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:

            printf("Enter the data:");
            scanf("%d", &data);
            enqueue(v, data);
            break;

        case 2:

            dequeue(v);
            break;

        case 3:

            display(v);
            break;

        default:
            printf("Enter a valid input");
            break;
        }
    } while (choices != 4);

    return 0;
}