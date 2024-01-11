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
    // If the head is null insert thhe element directly
    if (head == NULL)
    {
        head = create_node(data);

        return head;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        struct node*new=create_node(data);
        ptr->next=new;

        return head;

    }


}

struct node *reverse(struct node *head)
{
    struct node *prev=NULL;
    struct node *current=head;
    struct node *Next=head->next;

    while(current!=NULL)
    {
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
    }

    head=prev;

   return head;
}

int main()
{
    struct node *head = NULL;

    
    int choice;
    do
    {
        printf("\n1.Enter new elemenet\n");
        printf("2.Display the linked list\n");
        printf("3.Reverse the linked list\n");
        printf("4.Exit\n");
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
              head=reverse(head);
              break;
        case 4:
            break;

        default:
            printf("Enter a valid input.\n");
        }
    } while (choice != 4);

    return 0;
}