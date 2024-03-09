/*WAP to reverse the sequence elements in a double linked list.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node {
    int data;
    struct node * prev;
    struct node * next;
} *head, *last;

void createList(int n)
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
                    printf("INVALID MEMORY ");
                    break;
                }
            }

            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
        else
        {
            printf("INVALID MEMORY");
        }
    }
}
void displayListFromFirst()
{
    struct node * temp;
    int n = 1;
    if(head == NULL)
    {
        printf("EMPTY LIST");
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
        printf("EMPTY LIST");
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
void displayListFromFirst_reverse()
{
    struct node * temp;
    int n = 0;

    if(last == NULL)
    {
        printf("EMPTY LIST");
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
void displayListFromEnd_reversed()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("EMPTY LIST");
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
int main()
{
    int n, choice;

    head = NULL;
    last = NULL;
    
    printf("\n\n ENTER NO. OF NODES TO CREATE : ");
    scanf("%d", &n);

    createList(n); 

    again:
    printf("\nPress 1 to DISPLAY LIST FROM FIRST:");
    printf("\nPress 2 to DISPLAY LIST FROM END: ");
    printf("\nPress 3 to REVERSE TGHE LIST:");
    printf("\nPress 4 to DISPLAY THE REVERSED THE LIST FROM FIRST:");
    printf("\nPress 5 to DISPLAY THE REVERSED THE LIST FROM END :");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayListFromFirst();
        goto again;
    }
    else if(choice == 2)
    {
        displayListFromEnd();
        goto again;
    }
    else if(choice==3)
    {
        printf("\n\nDouble Linked List is Reversed\n\n");
        goto again;
    }
    else if(choice == 4)
    {
        displayListFromFirst_reverse();
        goto again;
    }
    else if(choice == 5)
    {
        displayListFromEnd_reversed();
        goto again;
    }

    return 0;
}
