#include <stdio.h>

struct Dequeue
{
    int front;
    int rear;
    int size;
    int *arr;
};

int empty_for_rear(struct Dequeue *v)
{
    if (v->front == v->rear)
    {
        return 1;
    }
    else
        return 0;
}
int full_for_rear(struct Dequeue *v)
{
    if (v->rear == v->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int empty_for_front(struct Dequeue *v)
{
    if (v->front > 0)
    {
        return 1;
    }
    return 0;
}
void enqueue_at_rear(struct Dequeue *v, int x)
{
    if (full_for_rear(v))
    {
        printf("Queue is full\n");
    }
    else
    {
        if (v->front == -1)
        {
            v->front++;
        }
        v->rear++;
        v->arr[v->rear] = x;
    }
}

void dequeue_at_front(struct Dequeue *v)
{
    if (v->front == -1 || v->front > v->rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The element dequeued is %d.\n", v->arr[v->front]);
        v->front++;
    }
}

void enqueue_at_front(struct Dequeue *v)
{
    if (empty_for_front(v))
    {
        int x;
        printf("Enter the element to be enqueued\n");
        scanf("%d", &x);
        v->front--;
        v->arr[v->front] = x;
    }
    else
    {
        printf("Cant enueued at front.\n");
    }
}

void dequeue_at_rear(struct Dequeue *v)
{
    if (empty_for_rear(v))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The element dequeued is %d.\n", v->arr[v->rear]);
        v->rear--;
    }
}

void display(struct Dequeue *v)
{
    int i;
    for (i = v->front; i <= v->rear; i++)
    {
        printf("%d ", v->arr[i]);
    }
    printf("\n");
}
int main()
{

    struct Dequeue *v = (struct Dequeue *)malloc(sizeof(struct Dequeue));

    v->size = 20;
    v->arr = (int *)malloc(v->size * sizeof(int));
    v->front = -1;
    v->rear = -1;
    int ch;
    do
    {

        printf("1.Enqueue at rear\n");
        printf("2.Dequeue at front\n");
        printf("3.Enqueue at front\n");
        printf("4.Dequeue at rear\n");
        printf("5.Display\n");
        printf("6.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int x;
            printf("Enter the element to be enqueued\n");
            scanf("%d", &x);
            enqueue_at_rear(v, x);
            break;
        }
        case 2:
        {
            dequeue_at_front(v);
            break;
        }
        case 3:
        {

            enqueue_at_front(v);
            break;
        }
        case 4:
        {
            dequeue_at_rear(v);
            break;
        }
        case 5:
        {
            display(v);
            break;
        }
        case 6:
        {
            break;
        }
        default:
        {
            printf("Invalid choice\n");
            break;
        }
        }
    } while (ch != 6);

    return 0;
}