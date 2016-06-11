#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct node
    {
        int value;
        int serialnum;
        struct node *next;
    };

int isprime(int n)
{

}


struct node* newnode(int data, int serial)
{
    struct node* node= (struct node*) malloc(sizeof(struct node));
    node-> value=data;
    node->serialnum=serial;
    node->next= NULL;
    return(node);
};


int main()
{
    int i=1,j,k;
    struct node* root=newnode(2,i);


        for(k=3;k<sizeof(int);k++)
        {
            int flag=1;
            while(node!=NULL)
            {
                current=node;
                if(k%(node->value)==0)
                {
                    flag=0;
                    break;
                }

            }
            if(flag)
            {
                 current->next=newnode(,i+1);
            }
        }


}
