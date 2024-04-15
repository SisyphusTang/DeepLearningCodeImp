#include "link_table.h"
#include "student.h"
#include <stdio.h>

int main()
{
    // 创建一个学生信息链表
    tLinkTable linkTable = { NULL, NULL, 0 };

    // 添加一些学生信息到链表中
    tStudent student1 = { NULL, "SA23225339", "Alice", 20 };
    tStudent student2 = { NULL, "SB23456789", "Bob", 22 };
    tStudent student3 = { NULL, "SC34567890", "Charlie", 21 };

    // 将学生信息添加到链表中
    linkTable.pHead = (tLinkTableNode *)&student1;
    student1.pNext = (tLinkTableNode *)&student2;
    student2.pNext = (tLinkTableNode *)&student3;
    student3.pNext = NULL;

    // 查找学号为 SA23225339 的学生信息
    char targetID[] = "SA23225339";
    tStudent *resultStudent = FindStudent(&linkTable, targetID);

    // 输出搜索结果
    if (resultStudent != NULL)
    {
        printf("Found student: %s, Name: %s, Age: %d\n", resultStudent->StudentID, resultStudent->Name, resultStudent->Age);
    }
    else
    {
        printf("Student with ID %s not found.\n", targetID);
    }

    return 0;
}
