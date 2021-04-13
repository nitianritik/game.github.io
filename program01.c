#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void append(int);
void display();
void remov(int);

int main()
{
    int n, ch;
    do
    {
        printf("\nOperation on Link List");
        printf("\n1. Append\n2. Display\n3. Delete \n4. Exit");
        printf("\nEnter Choice 0-4? : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter number ");
            scanf("%d", &n);
            append(n);
            break;
        
        case 2:
            display();
            break;
        
        case 4:
        {
           exit(0);
        }
        case 3:
        {
            int x;
            printf("\nEnter number you want to delete ");
            scanf("%d", &x);
            remov(x);
        }
        }
    } while (ch != 0);
}

void append(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = NULL;
    if (start == NULL)
    {
        start = nptr;
    }
    else
    {
        struct node *temp;
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nptr;
    }
}

void display()
{
    struct node *temp;
    temp = start;
    if (temp == NULL)
    {
        printf("link list is empty");
    }
    while (temp != NULL)
    {
        printf("%d : ", temp->data);
        temp = temp->next;
    }
}

void remov(int item)
{
    struct node *temp, *old;
    temp = start;
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            if (temp == start)
            {
                start = temp->next;
            }
            else
                old->next = temp->next;
            printf("\n%d ttem deleted\n", temp->data);
            free(temp);
            return;
        }
        else
        {
            old = temp;
            temp = temp->next;
        }
    }
    printf("Item not found ");
}