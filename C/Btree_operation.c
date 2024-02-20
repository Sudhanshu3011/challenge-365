#include <stdio.h>
#include <stdlib.h>

struct tree
{
     int data;
     struct tree *left;
     struct tree *right;
};
// the traversal techinique of the tree
void inorder(struct tree *root)
{
     if (root != NULL)
     {
          inorder(root->left);
          printf("%d ", root->data);
          inorder(root->right);
     }
}
void preorder(struct tree *root)
{
     if (root != NULL)
     {
          printf("%d ", root->data);
          inorder(root->left);
          inorder(root->right);
     }
}

void postorder(struct tree *root)
{
     if (root != NULL)
     {
          inorder(root->left);
          inorder(root->right);
          printf("%d ", root->data);
     }
}

// Creating the tree dynamically
struct tree *create_node(int value)
{
     struct tree *v = (struct tree *)malloc(sizeof(struct tree));
     v->data = value;
     v->left = NULL;
     v->right = NULL;

     return v;
}

// Finding the inorder precednece of the root element for the deletion
struct tree *inorder_precedence(struct tree *root)
{
     root = root->right;
     while (root->left != NULL)
     {
          root = root->left;
     }

     return root;
}

// Deletion of the element from the tree
struct tree *Btree_deletion(struct tree *root, int data)
{
     struct tree *prev;
     struct tree *originalroot = root;
     if (root == NULL)
     {
          return NULL;
     }
     if (root->left == NULL && root->right == NULL)
     {
          return NULL;
     }
     if (root->data < data)
     {
          root->right = Btree_deletion(root->right, data);
     }
     else if (root->data > data)
     {
          root->left = Btree_deletion(root->left, data);
     }
     else
     {
          prev = inorder_precedence(root);
          root->data = prev->data;
          root->right = Btree_deletion(root->right, prev->data);
     }

     return originalroot;
}


// insertion of the element in the tree
struct tree *Btree_insertion(struct tree *root, int value)
{
     if (root == NULL)
     {
          struct tree *s = create_node(value);
          root = s;
          return root;
     }
     else
     {
          struct tree *prev;
          struct tree *originalroot = root;
          while (root != NULL)
          {
               prev = root;
               if (root->data == value)
               {
                    printf("Already existed.\n");
                    return root;
               }
               else if (root->data < value)
               {
                    root = root->right;
               }
               else
               {
                    root = root->left;
               }
          }
          struct tree *ins = create_node(value);
          if (prev->data < value)
          {
               prev->right = ins;
          }
          else
          {
               prev->left = ins;
          }

          return originalroot;
     }
}

int main()
{
     struct tree *root = NULL;
     int ch;
     do
     {
          printf("\n1.Binary search tree insertion.\n");
          printf("2.Binary search tree deletion.\n");
          printf("3.Binary search tree trasversal Inoder.\n");
          printf("4.Binary search tree trasversal Preorder.\n");
          printf("5.Binary search tree trasversal Postorder.\n");
          printf("6.Exit.\n");

          printf("Enter your choice:");
          scanf("%d", &ch);

          switch (ch)
          {
          case 1:
               int x;
               printf("Enter the data:");
               scanf("%d", &x);
               root = Btree_insertion(root, x);
               break;

          case 2:
               int y;
               printf("Enter the data:");
               scanf("%d", &y);
               root = Btree_deletion(root, y);
               printf("Deleted element %d.\n", y);
               break;
          case 3:
               inorder(root);
               break;
          case 4:
               preorder(root);
               break;
          case 5:
               postorder(root);
               break;
          case 6:
               break;
          default:
               printf("Enter a valid value\n");
               break;
          }

     } while (ch != 6);

     return 0;
}