#ifndef LINKLIST_H
#define LINKLIST_H

typedef struct node{
    int data;
    struct node* next;
}node_t;

typedef struct linkedlist{
    node_t* head;
}linkedlist_t;


linkedlist_t* CreateLinkedList();
void PrintLinkedList(node_t* head);
void FreeLinkedList(linkedlist_t* list);
void AppendToLinkedList(linkedlist_t* list,int data);
#endif