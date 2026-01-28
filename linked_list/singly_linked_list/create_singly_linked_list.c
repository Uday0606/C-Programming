#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    char name[50];
    int id;
    struct node *next;
};

struct node *create_list(struct node *head);
void traverse_list(struct node *head);
struct node *insert_at_begin(struct node *head);
struct node *insert_at_end(struct node *head);
void count_nodes(struct node *head);
struct node *delete_by_value(struct node *head,int key);
struct node *reverse_list(struct node *head);
void clear_buffer();

int main()
{
    struct node *head=NULL;
    int choice,key;
   
    do
    {
        printf("\n 1.Create list");
        printf("\n 2.Traverse list");
        printf("\n 3.Insert at beginning");
        printf("\n 4.Insert at end");
        printf("\n 5.Delete by value");
        printf("\n 6.count node");
        printf("\n 7.Reverse list");
        printf("\n 0.Exiting\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);
        clear_buffer();
        
        switch(choice)
        {
            case 1:
                head=create_list(head);
                break;

            case 2:
                traverse_list(head);
                break;

            case 3:
                head=insert_at_begin(head);
                break;
            
            case 4:
                head=insert_at_end(head);
                break;
            
            case 5:
                printf("Enter ID to delete: ");
                scanf("%d",&key);
                head=delete_by_value(head,key);
                break;
            
            case 6:
                count_nodes(head);
                break;

            case 7:
                head=reverse_list(head);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Input\n");
        }
    } while (choice!=0);
}

struct node *create_list(struct node *head)
{
    int choice=1;
    struct node *newnode=NULL,*temp=NULL;
    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory not allocated\n");
        return head;
    }

    //user input
    printf("Enter your name: ");
    fgets(newnode->name,sizeof(newnode->name),stdin);
    newnode->name[strcspn(newnode->name,"\n")]='\0';

    printf("Enter your Id: ");
    scanf("%d",&newnode->id);
    clear_buffer();

    newnode->next=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to add another node? (1 = Yes, 0 = No): ");
    scanf("%d",&choice);
    clear_buffer();
  }
  return head;

}
void traverse_list(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    printf("\n");
    struct node *temp=head;

    while(temp!=NULL)
    {
        printf("Name: %s\n",temp->name);
        printf("ID: %d\n",temp->id);
        temp=temp->next;
    }
    printf("\n");
}

struct node *insert_at_begin(struct node *head)
{
    struct node *newnode=NULL;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    printf("Enter your name: ");
    fgets(newnode->name,sizeof(newnode->name),stdin);
    newnode->name[strcspn(newnode->name,"\n")]='\0';

    printf("Enter your Id: ");
    scanf("%d",&newnode->id);
    clear_buffer();

    newnode->next=head;
    head=newnode;
    return head;
}

struct node *insert_at_end(struct node *head)
{
    struct node *temp=head,*newnode=NULL;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    printf("Enter your name: ");
    fgets(newnode->name,sizeof(newnode->name),stdin);
    newnode->name[strcspn(newnode->name,"\n")]='\0';

    printf("Enter your Id: ");
    scanf("%d",&newnode->id);
    clear_buffer();

    newnode->next=NULL;

    if(head==NULL) //empty list
    {
        return newnode;
    }

    
    while(temp->next!=NULL) //non empty
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
void count_nodes(struct node *head)
{
    struct node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("Total nodes: %d\n",count);
}

struct node *delete_by_value(struct node *head,int key)
{
    struct node *temp=head,*prev=NULL;

    //empty list
    if(head==NULL)
    {
        printf("list is empty\n");
        return head;
    }

    
    if(temp->id==key) //if key in fisrt node
    {
        head=temp->next;
        free(temp);
        return head;
    }

    while(temp!=NULL && temp->id!=key)
    {
        prev=temp;
        temp=temp->next;

    }

    if(temp==NULL) //value not found
    {
        printf("ID not found\n");
        return head;
    }

    //delete the node
    prev->next=temp->next;
    free(temp);

    return head;
}

struct node *reverse_list(struct node *head)
{
    struct node *prev=NULL, *curr=head, *next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;  //save next
        curr->next=prev; //reverse link
        prev=curr; //move prev
        curr=next; //move curr
    }
    return prev; //new head
}

void clear_buffer()
{
    int c;
    while((c=getchar())!='\n' && c!=EOF);
}
