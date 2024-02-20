#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top;

struct node *create_node(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

struct node *push(struct node *top, int data)
{
    if (top == NULL)
    {
        struct node *new = create_node(data);
        top = new;

        return top;
    }
    struct node *new = create_node(data);
    new->next = top;
    top = new;

    return top;
}

struct node *pop(struct node *top)
{
    if (top == NULL)
    {
        printf("stack Under flow\n");
        return NULL;
    }
    //  int data ;
    //  data=top->data;
    top = top->next;

    return top;
}

void peep(struct node *top)
{
    if (top == NULL)
    {
        printf("Stack Empty\n");
    }

    printf("The element is %d.", top->data);
}
void display(struct node *top)
{
    if (top == NULL)
    {
        printf("Stack Empty\n");
    }
    struct node *ptr = top;

    while (ptr != NULL)
    {
        printf("%d-", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    top = NULL;

    int choices, data;
    do
    {
        printf("\nSelect from the following\n1.Push\t2.Pop\t3.Peep\t4.display\t5.Exit \n");

        printf("Enter your choice:");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:

            printf("Enter the data:");
            scanf("%d", &data);
            top = push(top, data);
            break;

        case 2:

            top = pop(top);
            break;

        case 3:

            peep(top);
            break;

        case 4:

            display(top);
            break;
        case 5:

            break;
        default:
            printf("Enter a valid input");
            break;
        }
    } while (choices != 5);
    return 0;
}