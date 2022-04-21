#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    ///basic variable of pointer type
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    
    ///dynamic memory allocation
    a =(struct Node*) malloc(sizeof(struct Node));
    b =(struct Node*) malloc(sizeof(struct Node));
    c =(struct Node*) malloc(sizeof(struct Node));
    
    ///assign our data
    a->data = 10101;
    b->data = 10011;
    c->data = 11010;
    
    ///data linked list
    a->next = b;
    b->next = c;
    c->next = NULL;
    
    ///traverse a linked list
    while(a != NULL)
    {
        printf("%d -> ",a->data);
        a = a->next;
    }
    return 0;
}