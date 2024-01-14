#include <stdio.h>
#include <stdlib.h>

struct node
{
    int row;
    int column;
    int value;
    struct node *next;
};

struct node *createnode()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;

    return new;
}

int main()
{
    int Matrix[6][7] = {
        {0, 0, 0, 0, 45, 0, 0},
        {0, 4, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 34, 0},
        {0, 0, 2, 0, 5, 0, 0},
        {0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 6},
    };

    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Matrix[i][j] != 0)
            {
                count++;
            }
        }
    }

    //  printf("%d\n", count);

    printf("The elements in the Matrix:\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }

    struct node *head = NULL;
    struct node *rear = NULL;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Matrix[i][j] != 0)
            {
                if (head == NULL)
                {
                    head = createnode();
                    head->row = i;
                    head->column = j;
                    head->value = Matrix[i][j];
                    rear = head;
                }
                else
                {
                    struct node *newnode = createnode();

                    newnode->row = i;
                    newnode->column = j;
                    newnode->value = Matrix[i][j];
                    rear->next = newnode;
                    rear = newnode;
                }
            }
        }
    }
    struct node *ptr = head;
    printf("The value of the sparse linked list\n");
    printf("Rows\tColumn\tValue\n");
    while (ptr != NULL)
    {
        printf("%d\t\t%d\t\t%d", ptr->row, ptr->column, ptr->value);
        printf("\n");
        ptr = ptr->next;
    }
}
