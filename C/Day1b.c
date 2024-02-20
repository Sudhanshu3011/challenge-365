#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *instfirst(struct node *head)
{
    int data;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &data);
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node *instlast(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node *dellist(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty\n");
        return head;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *beforeindex(struct node *head, int ind)
{
    if (ind <= 1 || head == NULL)
    {
        printf("Invalid operation\n");
        return head;
    }
    if (ind == 2)
    {
        return dellist(head);
    }

    struct node *p = head;
    struct node *q = head->next;
    int i = 1;
    while (i != ind - 2)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *afterindex(struct node *head, int ind)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if (ind == 1)
    {
        return dellist(head);
    }
    
    struct node *p = head;
    struct node *q = head->next;
    int i = 1;
    while (i != ind)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

void display(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("The element is %d.\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = NULL;
    int choice, index, new_element;

    do
    {
        printf("LINKED LIST OPERATIONS:\n");
        printf("1. Insert at the front of Linked list\n");
        printf("2. Insert at the end of Linked list\n");
        printf("3. Delete first node of Linked list\n");
        printf("4. Delete node before specified position\n");
        printf("5. Delete node after specified position\n");
        printf("6. Display the linked list\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                head = instfirst(head);
                break;
            case 2:
                printf("Enter the element to insert at the end: ");
                scanf("%d", &new_element);
                head = instlast(head, new_element);
                break;
            case 3:
                head = dellist(head);
                break;
            case 4:
                printf("Enter the index before which you want to delete: ");
                scanf("%d", &index);
                head = beforeindex(head, index);
                break;
            case 5:
                printf("Enter the index after which you want to delete: ");
                scanf("%d", &index);
                head = afterindex(head, index);
                break;
            case 6:
                display(head);
                break;
            case 7:
                // Exit
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 7);

    // Free allocated memory
    struct node *current = head;
    while (current != NULL)
    {
        struct node *next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
