#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


void PrintLinkedList(node_t* head)
{
    if (head != NULL)
    {
        printf("%d \n", head->data);
        PrintLinkedList(head->next);
    }
   
}

linkedlist_t*  CreateLinkedList(){
    linkedlist_t* newList = (linkedlist_t*) malloc(sizeof(linkedlist_t));
    newList->head = NULL;
    return newList;
}

void AppendToLinkedList(linkedlist_t* list,int data)
{
    node_t* newnode = (node_t*) malloc(sizeof(node_t));
    newnode->data = data;
    newnode->next = NULL;
    if (list->head == NULL)
    {    
        list->head = newnode;
    }
    else
    {
        node_t* temp = list->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}