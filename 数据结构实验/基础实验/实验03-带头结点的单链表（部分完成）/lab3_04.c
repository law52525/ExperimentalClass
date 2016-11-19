/*
编写算法函数linklist delallx(linklist head, int x)，删除带头结点单链表head中所有值为x的结点。
*/
/**********************************/
/*文件名称：lab3_04.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
linklist delallx(linklist head,int x)
{
    node* re=head,*pre=NULL;
    head=head->next;
    while(head) {
        if(pre==NULL&&head->info==x) {       //第一个就要删除的情况
            re->next = head->next;
            head = head->next;
            continue;
        }
        if(pre!=NULL&&head->info==x) {
            pre->next=head->next;
            head=head->next;                //没有对pre的值进行更新，pre还停留在原本的位置，无需移动
            continue;
        }
        pre=head;                          //没有删除的时候，往后移
        head=head->next;
    }
    return re;
}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*尾插入法建立带头结点的单链表*/
    print(head);
    printf("请输入要删除的值：");
    scanf("%d",&x);
    head=delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
