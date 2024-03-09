/*WAP to create a double linked list of n nodes and display the
linked list by using suitable user defined functions for create and
display operations.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;



void create(int n)
{
    int i, data;
    struct node *newNode;
    srand(time(0));

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            data=rand()%100;

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;
            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    data=rand()%100;

                    newNode->data = data;
                    newNode->prev = last; 
                    newNode->next = NULL;

                    last->next = newNode;
                    last = newNode;  
                }
                else
                {
                    printf("UNABLE TO ALLOCATE MEMORY ");
                    break;
                }
            }

            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO ALLOCATE MEMORY ");
        }
    }
}

void displayListFromFirst()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("EMPTY LIST ");
    }
    else
    {
        temp = head;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("->%d",temp->data);

            n++;
            temp = temp->next;
        }
    }
}

void displayListFromEnd()
{
    struct node * temp;
    int n = 0;

    if(last == NULL)
    {
        printf("EMPTY LIST ");
    }
    else
    {
        temp = last;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("->%d",temp->data);

            n++;
            temp = temp->prev; 
        }
    }
}

int main()
{
    int n, choice;

    head = NULL;
    last = NULL;
    
    printf("\n\nENTER NODES TO CREATE :: ");
    scanf("%d", &n);

    create(n); 

    again:
    printf("\nPress 1  TO DISPLAY FROM FIRST");
    printf("\nPress 2  TO DISPLAY FROM END : ");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayListFromFirst();
        goto again;
    }
    else if(choice == 2)
    {
        displayListFromEnd();
    }
    else
    {
        printf(" SORRY INVALID CHOICE.\n ENTER YOUR CHOICE AGAIN :" );
        goto again;
    }

    return 0;
}
