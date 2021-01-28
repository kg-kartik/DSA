#include <stdio.h>
#include <ctype.h>

int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *e;
    int val1, val2, val3, value;
    printf("Enter the expression :");
    scanf("%s", exp);
    e = exp;
    while (*e != '\0')
    {
        if (isdigit(*e))
        {
            value = *e - 48;
            push(value);
        }
        else
        {
            val1 = pop();
            val2 = pop();
            switch (*e)
            {
            case '+':
            {
                val3 = val1 + val2;
                break;
            }
            case '-':
            {
                val3 = val2 - val1;
                break;
            }
            case '*':
            {
                val3 = val1 * val2;
                break;
            }
            case '/':
            {
                val3 = val2 / val1;
                break;
            }
            }
            push(val3);
        }
        e++;
    }
    printf("\nThe evaluation is : %d", pop());
}