#ifndef LIST_H
#define LIST_H
#include <stdbool.h>

#define TSIZE
struct film
{
    char title[TSIZE];
    int rating;
};

typedef struct film Item;

typedef struct node
{
    Item item;
    struct node * next;
} Node;
typedef Node * List;

void InitializeList(List * plist);
bool ListIsEmpty(const List * plist);

bool ListIsFull(const List * plist);

unsigned int ListItemCount(const List *plist);

bool AddItem(Item item, List * plist);

void Travese(const List *plist, void(*pfun)(Item item));

void EmptyThelist(list * plist);
#endif // LIST_H
