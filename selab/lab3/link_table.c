#include "link_table.h"

tLinkTableNode *SearchLinkTableNode(tLinkTable *pLinkTable, int (*Condition)(tLinkTableNode *, void *), void *args)
{
    if (pLinkTable == NULL || Condition == NULL)
    {
        return NULL;
    }
    tLinkTableNode *pNode = pLinkTable->pHead;
    while (pNode != NULL)
    {
        if (Condition(pNode, args) == 1)
        {
            return pNode;  // 找到了符合条件的节点，返回该节点指针
        }
        pNode = pNode->pNext;
    }
    return NULL;  // 未找到符合条件的节点，返回空指针
}
