/*
已知带头结点的单链表结构定义同实验3，假设链表中所有结点值均不相同，
请编写一个递归函数linklist max(linklist head)，返回表中最大数所在的结点地址，若链表为空，返回NULL。
*/


#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
linklist max(linklist head) {
    /**有一个缺点：头结点的info也会被比较**/
    if(head->next==NULL)
        return head;
    linklist maxPoint = max(head->next);
    if(head->info > maxPoint->info)
        return head;
    else return maxPoint;
}
int main() {
    linklist head,p;
    head=creatbyqueue();
    print(head);
    /**为了避免缺点，head被改成了head->next**/
    p=max(head->next);
    if (p)
        printf("max=%d\n",p->info);
    else
        printf("链表为空\n");
    getchar();
    return 0;
}