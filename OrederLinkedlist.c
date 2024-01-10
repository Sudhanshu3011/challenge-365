#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *create_node(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

struct node *insert_sorted(struct node *head, int data)
{
    //If the head is null insert thhe element directly
    if (head == NULL)
    {
        head = create_node(data);

        return head;
    }

    //if the first element in the likled list is greater than the new inserted element
    if (head->data > data)
    {
        struct node *ptr;
        ptr = create_node(data);
        ptr->next = head;
        head = ptr;

        return head;
    }

    //Condition where we have to inside the linked list for finding the correct position to insert
    else
    {
        struct node *ptr=head;
        struct node *new;
        new = create_node(data);
        while (ptr->data < data && ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        if (ptr->next != NULL)
        {
            new->next = ptr->next;
        }
        else
        {
            new->next = NULL;
        }
        ptr->next = new;

        return head;
    }
}
int main()
{
    struct node *head = NULL;

    // Insertion in the linked list int sorted manner;

    int choice;
    do
    {
        printf("\n1.Enter new elemenet\n");
        printf("2.Display the linked list\n");
        printf("3.Exit\n");
        printf("Enter the Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int x;
            printf("Enter the data:");
            scanf("%d", &x);
            head = insert_sorted(head, x);
            break;

        case 2:
            display(head);
            break;

        case 3:
            break;

        default:
            printf("Enter a valid input.\n");
        }
    } while (choice != 3);

    return 0;
}