/*
��֪��ͷ���ĵ�����ṹ����ͬʵ��3���������������н��ֵ������ͬ��
���дһ���ݹ麯��linklist max(linklist head)�����ر�����������ڵĽ���ַ��������Ϊ�գ�����NULL��
*/


#include "slnklist.h"
/*�뽫���������������������в���*/
linklist max(linklist head) {
    /**��һ��ȱ�㣺ͷ����infoҲ�ᱻ�Ƚ�**/
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
    /**Ϊ�˱���ȱ�㣬head���ĳ���head->next**/
    p=max(head->next);
    if (p)
        printf("max=%d\n",p->info);
    else
        printf("����Ϊ��\n");
    getchar();
    return 0;
}