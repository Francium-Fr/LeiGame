#ifndef _LINKEDLIST  
#define _LINKEDLIST
typedef struct
{
    void* data;
    void* next;
    void* pre;
}Node;

typedef struct
{
    Node * _head;
    Node * _tail;
}Linkedlist;

void GetHead(Linkedlist*);


#endif