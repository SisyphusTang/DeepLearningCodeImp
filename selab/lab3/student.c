#include "student.h"
#include <string.h>

int SearchCondition(tLinkTableNode *pLinkTableNode, void *args)
{
    tStudent *pStudent = (tStudent *)pLinkTableNode;
    char *targetID = (char *)args;
    if (strcmp(pStudent->StudentID, targetID) == 0)
    {
        return 1;  // 返回1表示找到了符合条件的节点
    }
    return 0;  // 返回0表示未找到符合条件的节点
}

tStudent* FindStudent(tLinkTable *head, char *targetID)
{
    // 调用 SearchLinkTableNode 函数进行搜索，并传入搜索条件回调函数 SearchCondition
    tLinkTableNode *resultNode = SearchLinkTableNode(head, SearchCondition, targetID);
    if (resultNode != NULL)
    {
        return (tStudent *)resultNode;  // 找到了符合条件的节点，返回对应的学生信息指针
    }
    else
    {
        return NULL;  // 未找到符合条件的节点，返回空指针
    }
}
