#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_node(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

void display(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insert_at_first(struct node *head, int data)
{
    if (head == NULL)
    {
        printf("First create a circular linked list\n");
        return NULL;
    }
    struct node *ptr = head;
    struct node *newNode = create_node(data);

    newNode->next = ptr;
    do
    {
        ptr = ptr->next;
    } while (ptr->next != head);

    ptr->next = newNode;

    head = newNode;

    return head;
}

struct node *insert_at_last(struct node *head, int data)
{
    if (head == NULL)
    {
        printf("First create a circular linked list\n");
        return NULL;
    }
    struct node *ptr = head;
    struct node *newNode = create_node(data);

    do
    {
        ptr = ptr->next;
    } while (ptr->next != head);

    ptr->next = newNode;
    newNode->next = head;

    return head;
}

struct node *delete_at_first(struct node *head)
{
    if (head == NULL)
    {
        printf("First create a circular linked list\n");
        return NULL;
    }
    struct node *ptr = head;
    head = ptr->next;

    // Traverse to the new last node
    struct node *newLastNode = head;
    while (newLastNode->next != ptr)
    {
        newLastNode = newLastNode->next;
    }

    newLastNode->next = head; // Update the next of the new last node

    free(ptr);
    return head;
}

struct node *delete_at_last(struct node *head)
{
    if (head == NULL)
    {
        printf("First create a circular linked list\n");
        return NULL;
    }
    struct node *ptr = head;
    struct node *ptr2 = NULL;

    do
    {
        ptr2 = ptr;
        ptr = ptr->next;
    } while (ptr->next != head);

    ptr2->next = head;

    free(ptr);
    return head;
}

struct node *createcircular_ll(struct node *head, int data)
{
    struct node *ptr = NULL;

    if (head == NULL)
    {
        struct node *newNode = create_node(data);
        head = newNode;
        newNode->next = head;
        return head;
    }
    ptr = head;
    do
    {
        ptr = ptr->next;
    } while (ptr->next != head);

    struct node *newNode = create_node(data);
    ptr->next = newNode;
    newNode->next = head;

    return head;
}

int main()
{
    struct node *circularlist = NULL;
    int choice;

    do
    {
        printf("1.Insert in the circular linked list\n");
        printf("2.Insert at first circular linked list\n");
        printf("3.Insert at last circular linked list\n");
        printf("4.Delete at first circular linked list\n");
        printf("5.Delete at last circular linked list\n");
        printf("6.Display\n");
        printf("7.Exit\n");
        printf("Enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int data;
            printf("Enter the data:");
            scanf("%d", &data);
            circularlist = createcircular_ll(circularlist, data);
            break;
        case 2:
            int data1;
            printf("Enter the data:");
            scanf("%d", &data1);
            circularlist = insert_at_first(circularlist, data1);
            break;

        case 3:
            int data2;
            printf("Enter the data:");
            scanf("%d", &data2);
            circularlist = insert_at_last(circularlist, data2);
            break;

        case 4:
            circularlist = delete_at_first(circularlist);
            break;
        case 5:
            circularlist = delete_at_last(circularlist);
            break;
        case 6:
            display(circularlist);
            printf("\n");
            break;
        case 7:
            break;

        default:
            printf("Enter the valid input.\n");
        }
    } while (choice != 7);

    return 0;
}
