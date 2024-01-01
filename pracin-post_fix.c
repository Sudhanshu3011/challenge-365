#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//stack basic operations
struct stack
{
    int top;
    int size;
    char *arr;
};
int full(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char stacktop(struct stack *vc)
{
    char ch;
    ch = vc->arr[vc->top];

    return ch;
}
char pop(struct stack *vc)
{
    char ch;
    if (is_empty(vc))
    {
        printf("The stack is empty.\n");
    }
    else
    {
        ch = vc->arr[vc->top];
        vc->top--;

        return ch;
    }
}

void push(struct stack *vc, char ch)
{
    if (full(vc))
    {
        printf("The stack is full\n");
    }
    else
    {
        vc->top++;
        vc->arr[vc->top] = ch;
    }
}
//stack operation completed


//xheck that the infix[i] is a operator or the operand
int checkoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//assign the value of the operator for the precedence
int precedence(char ch)
{
    if (ch == '*' || ch == '/' || ch == '%')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

//conversion function of infix to postfix
char *intopost(char *infix)
{
    struct stack *operator=(struct stack *) malloc(sizeof(struct stack));
    operator->top = - 1;
    operator->size = 100;
    operator->arr =(char *) malloc((operator->size) * sizeof(char));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0, k = 0;
    //loop till the infix string doesn't end
    while (infix[i] != '\0')
    {
        if (!checkoperator(infix[i]))
        {
            //if the infix is not a operator then it must be the operand and just simply added to the postfix character array
            postfix[k] = infix[i];
            i++;
            k++;
        }
        else
        {
            //if the precedence of the infix[i] is greater than the stacktop then push else pop
            if (precedence(infix[i]) > precedence(stacktop(operator)))
            {

                push(operator, infix[i]);
                i++;
            }
            else
            {
                postfix[k] = pop(operator);
                k++;
            }
        }
    }

    // if still any element left in the stack then pop them out
    while (!is_empty(operator))
    {
        postfix[k] = pop(operator);
        k++;
    }

    //assign the last index of k with the \0 to end the string postfix
    postfix[k] = '\0';

    return postfix;
}

int main()
{
    char *infix;
    infix = "a+b*c-d/e*h";

    printf("Infix->%s ->Postfix->",infix);
    printf("%s",intopost(infix));
    return 0;
}