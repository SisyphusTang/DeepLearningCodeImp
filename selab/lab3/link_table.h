#ifndef LINK_TABLE_H_
#define LINK_TABLE_H_

#include <pthread.h>

typedef struct LinkTableNode
{
    struct LinkTableNode *pNext;
} tLinkTableNode;

typedef struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int SumOfNode;
    pthread_mutex_t mutex;
} tLinkTable;

tLinkTableNode *SearchLinkTableNode(tLinkTable *pLinkTable, int (*Condition)(tLinkTableNode *, void *), void *args);

#endif /* LINK_TABLE_H_ */
