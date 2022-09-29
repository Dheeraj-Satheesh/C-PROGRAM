#include<stdio.h>
#include<stdlib.h>
struct node
{
    float coeff;
    int expo;
    struct node* link;
};
struct node* insert(struct node* head,float co,int ex)
{
    struct node* temp;
    struct node* newp=malloc(sizeof(struct node));
    newp->coeff=co;
    newp->expo=ex;
    newp->link=NULL;
//If there is no node in the list or  given exponent is greater than the first node exponent
    if(head==NULL|| ex> head->expo)
    {
        newp->link=head;
        head=newp;
    }
    else
    {
        temp=head;
        while(temp->link != NULL && temp->link->expo >=ex)
            temp=temp->link;
        newp->link=temp->link;
        temp->link=newp;
    }
    return head;
}
//Creating list
struct node* create(struct node* head)
{
    int n,i;
    float coeff;
    int expo;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the coefficient for term %d: ",i+1);
        scanf("%f",&coeff);

        printf("Enter the exponent for term %d: ",i+1);
        scanf("%d",&expo);

        head=insert(head,coeff,expo);
    }
    return head;
}
//Printing function
void print(struct node* head)
{
    if(head==NULL)
        printf("No Polynomial. ");
    else{
        struct node* temp=head;
        while(temp!=NULL)
        {
            printf("(%.1fx^%d)",temp->coeff,temp->expo);
            temp=temp->link;
            if(temp!=NULL)
                printf(" + ");
            else
                printf("\n");
        }
    }
}
//Multiplication Function
void polyMult(struct node* head1,struct node* head2)
{
    struct node* ptr1=head1;
    struct node* ptr2=head2;
    struct node* head3=NULL;
     if(head1==NULL || head2==NULL)
     {
         printf("Zero polynomial\n");
         return;
     }
     while(ptr1!=NULL)
     {
         while(ptr2!=NULL)
         {
             head3=insert(head3,ptr1->coeff * ptr2->coeff ,ptr1->expo + ptr2->expo);
             ptr2=ptr2->link;
         }
         ptr1=ptr1->link;
         ptr2=head2;
     }
     printf("\n Before Simplification: \n");
     print(head3);
     struct node* ptr3=head3;
     struct node* temp=NULL;

     while(ptr3->link!=NULL) {
        if(ptr3->expo ==ptr3->link->expo)
        {
            ptr3->coeff=ptr3->coeff +ptr3->link->coeff;
            temp=ptr3->link;
            ptr3->link=ptr3->link->link;
            free(temp);
        }
        else {
            ptr3=ptr3->link;
        }
     }
     printf("\n After Simplification: \n");
     print(head3);
}
int main()
{
    struct node* head1=NULL;
    struct node* head2=NULL;
    printf("Enter the first polynomial\n ");
    head1=create(head1);
    printf("Enter the Second polynomial\n ");
    head2=create(head2);
    polyMult(head1,head2);
    return 0;
}
