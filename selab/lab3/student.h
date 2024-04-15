#ifndef STUDENT_H_
#define STUDENT_H_

#include "link_table.h"

typedef struct Student
{
    tLinkTableNode *pNext;
    char* StudentID;
    char* Name;
    int Age;
} tStudent;

int SearchCondition(tLinkTableNode *pLinkTableNode, void *args);
tStudent* FindStudent(tLinkTable *head, char *targetID);

#endif /* STUDENT_H_ */
