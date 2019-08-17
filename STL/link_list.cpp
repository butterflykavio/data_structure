//
// Created by 禹梓林 on 2019-08-12.
//

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"

typedef int Element;

struct Node{
    Element data;
    Node *next;
};
typedef Node node;

node *get_node(Element x)
{
    node *l;
    l = (node *)malloc(sizeof(l));
    l->data = x;
    l->next = NULL;
    return l;
}
void show(node *l, bool with_head)
{
    if(with_head) {
        if (l->next == NULL) {
            printf("It is empty list");
        }
        else {
            node *curr = l->next;
            while (curr != NULL) {
                printf("%d ", curr->data);
                curr = curr->next;
            }
        }
    }
    else{
        if (l == NULL) {
            printf("It is empty list");
        }
        else {
            node *curr = l;
            while (curr != NULL) {
                printf("%d ", curr->data);
                curr = curr->next;
            }
        }
    }
    printf("\n");
}

void filldata(node **l, int num, bool with_head)
{
    srand(time(NULL));
    node *curr = *l;
    if(with_head)
    {
        *l = get_node(-2);
        curr = *l;
        for(int i=0; i<num; i++)
        {
            curr->next = get_node(rand()%20);
            curr = curr->next;
        }
    }
    else{
        *l = get_node(rand()%20);
        curr = *l;
        for(int i=1;i<num;i++)
        {
            curr->next = get_node(rand()%20);
            curr = curr->next;
        }
    }

}