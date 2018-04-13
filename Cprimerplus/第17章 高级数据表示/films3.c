#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TSIZE 45
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

void EmptyTheList(List * plist);
void showmovies(Item item);
char * s_gets(char *st, int n);
int main(void)
{
    List movies;
    Item temp;

    InitializeList(&movies);
    if (ListIsFull(&movies))
    {
        fprintf(stderr, "No memory available! bye!\n");
        exit(1);
    }

    puts("Enter first movie title:");
    while (s_gets(temp.title,TSIZE) != NULL &&temp.title[0] != '\0')
    {
        puts("Enter your rating <0-10>:");
        scanf("%d", &temp.rating);
        while(getchar() != '\n')
        {
            continue;
        }
        if (AddItem(temp, &movies) == false)
        {
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }
        if(ListIsFull(&movies))
        {
            puts("The list is now full");
            break;
        }
        puts("Enter next movie title (empty line to stop)");
    }

    if(ListIsEmpty(&movies))
        printf("No data entered.");
    else
    {
        printf("Here is the movie list:\n");
    }
    printf("You entered %d movies.\n", ListItemCount(&movies));

    EmptyTheList(&movies);

    printf("Bye!\n");

    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while(getchar() != '\n')
            continue;
    }
    return ret_val;
}

static void CopyToNode(Item item, Node *pnode);
void InitializeList(List * plist)
{
    plist = NULL;
}

//如果链表为空，返回True
bool ListIsEmpty(const List *plist)
{
    if (*plist == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ListIsFull(const List * plist)
{
    Node * pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));

    if(pt == NULL)
        full = true;
    else
        full = false;
    free(pt);

    return full;
}
//返回节点的数量
unsigned int ListItemCount(const List * plist)
{
    unsigned int count  = 0;
    Node * pnode = *plist;

    while(pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    }
    return count;
}

//创建存项的节点，并将其添加至由plist指向的链表末尾
bool AddItem(Item item, List * plist)
{
    Node * pnew;
    Node * scan = *plist;

    pnew = (Node *)malloc(sizeof(Node));
    if (pnew = NULL)
        return false;
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (scan == NULL)
        *plist = pnew;
    else
    {
        while (scan->next != NULL)
        {
            scan = scan->next;
        }
        scan->next = pnew;
    }

    return true;
}

void Traverse(const List * plist, void (*pfun)(Item item))
{
    Node * pnode = *plist;

    while (pnode != NULL)
    {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    }
}

void EmptyTheList(List * plist)
{
    Node * psave;

    while (*plist !=NULL)
    {
        psave = (*plist)->next;
        free(*plist);
        *plist = psave;
    }
}

static void CopyToNode(Item item, Node *pnode)
{
    pnode->item = item;
}

