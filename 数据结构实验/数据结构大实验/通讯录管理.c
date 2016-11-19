/****************************************/
/*���ز˵�������Գ���main2.c************/
/***************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct  {  //ͨѶ¼�������
    char num[5];   //���
    char name[9];  //����
    char sex[3];    //�Ա�
    char phone[13]; //�绰
    char addr[31];  //��ַ
} DataType;
typedef struct node {   //������Ͷ���
    DataType data;    //���������
    struct node *next;  //���ָ����
} ListNode;
typedef ListNode *LinkList;
LinkList head;
ListNode *p;
//����˵��
int menu_select();
LinkList CreateList(void);
void InsertNode(LinkList head,ListNode *p);
ListNode *ListFind(LinkList head);
void DelNode(LinkList head);
void printList(LinkList head);
//������
int main() {
    for( ; ; ) {
        switch(menu_select( ) ) {
        case 1:
            printf("**********************************\n");
            printf("*    ͨ Ѷ ¼ �� �� �� �� ��     *\n");
            printf("**********************************\n");
            head=CreateList( );
            break;
        case 2:
            printf("**********************************\n");
            printf("*    ͨ Ѷ �� �� Ϣ �� �� ��     *\n");
            printf("**********************************\n");
            printf("���(4) ����(8) �Ա�(3) �绰(11) ��ַ(31)\n");
            printf("************************************* \n");
            p=(ListNode *)malloc(sizeof(ListNode));  //�����½��
            scanf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,
                  p->data.phone,p->data.addr);
            InsertNode(head,p);
            break;
        case 3:
            printf("***********************************\n");
            printf("*     ͨ Ѷ ¼ �� Ϣ �� �� ѯ     *\n");
            printf("***********************************\n");
            p=ListFind(head);
            if (p!=NULL) {
                printf("��� �� ��  �Ա�  ��ϵ�绰  ��ַ \n");
                printf("--------------------------------------------------\n");
                printf("%s,%s,%s,%s,%s\n",p->data.num,p->data.name,
                       p->data.sex,p->data.phone,p->data.addr);
                printf("---------------------------------------------------\n");
            } else
                printf("û�в鵽Ҫ��ѯ��ͨѶ�ߣ�\n");
            break;
        case 4:
            printf("***********************************\n");
            printf("*    ͨ Ѷ ¼ �� Ϣ �� ɾ ��      *\n");
            printf("***********************************\n");
            DelNode(head);  //ɾ�����
            break;
        case 5:
            printf("************************************\n");
            printf("*     ͨ Ѷ ¼ �� �� �� �� ��      *\n");
            printf("************************************\n");
            printList(head);
            break;
        case 0:
            printf("\t  ��  ���� \n");
            return 0;
        }
    }
    return 0;
}
/*******************/
/* �˵�ѡ��������        */
/***************************/
int menu_select(  ) {
    int sn;
    printf("     ͨѶ¼����ϵͳ  \n");
    printf("===================\n");
    printf("    1.ͨѶ����Ľ���\n");
    printf("    2.ͨѶ�߽��Ĳ���\n");
    printf("    3.ͨѶ�߽��Ĳ�ѯ\n");
    printf("    4.ͨѶ�߽���ɾ��\n");
    printf("    5.ͨѶ¼��������\n");
    printf("    0.�˳�����ϵͳ\n");
    printf("==========================\n");
    printf("    ��  ѡ �� 0-5�� ");
    for( ; ; ) {
        scanf("%d",&sn);
        if (sn<0||sn>5)
            printf("\n\t���������ѡ0-5:");
        else
            break;
    }
    return sn;
}
/**************************/
/*��β�巨����ͨѶ¼������       */
/**************************/
LinkList CreateList(void) {
    //β�巨������ͷ����ͨѶ¼�����㷨
    LinkList head=(ListNode *)malloc(sizeof(ListNode));  //����ͷ���
    ListNode *p,*rear;
    int flag=0;   //������־��0
    rear=head;  //βָ���ʼָ��ͷ���
    while (flag==0) {
        p=(ListNode *)malloc(sizeof(ListNode));    //���½��
        printf("���(4)  ����(8) �Ա�  �绰(11)   ��ַ(31)\n");
        printf("--------------------------------------------------------------------------------------\n");
        scanf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,
              p->data.addr);
        rear->next=p;        //�½�����ӵ�β���֮��
        rear=p;             //βָ��ָ���½��
        printf("����������?(1/0):");
        scanf("%d",&flag);
    }
    rear->next=NULL;       //�ն˽��ָ���ÿ�
    return head;            //��������ͷָ��
}
/******************************/
/*��ͨѶ¼����head�в����� */
/******************************/
void InsertNode(LinkList head,ListNode *p) {
    ListNode *p1,*p2;
    p1=head;
    p2=p1->next;
    while(p2!=NULL && strcmp(p2->data.num,p->data.num)<0) {
        p1=p2;     //p1ָ��շ��ʹ��Ľ��
        p2=p2->next;   //p2ָ������һ�����
    }
    p1->next=p;    //����p��ָ��Ľ��
    p->next=p2;    //���ӱ���ʣ��Ľ��
}
/******************************************/
/*   ����ͨѶ¼����Ĳ���          */
/******************************************/
ListNode  *ListFind(LinkList head) {
    // ����ͨѶ¼�����ϵĲ���
    ListNode *p;
    char num[5];
    char name[9];
    int xz;
    printf("==================\n");
    printf("  1. ����Ų�ѯ     \n");
    printf("  2. ��������ѯ     \n");
    printf("==================\n");
    printf("     �� ѡ ��     ");
    p=head->next;   //�ٶ�ͨѶ ¼���ͷ���
    scanf("%d",&xz);
    if (xz==1)  {
        printf("������Ҫ�����ߵı�ţ�");
        scanf("%s",num);
        while (p&&strcmp(p->data.num,num)<0)
            p=p->next;
        if ((p==NULL)||strcmp(p->data.num,num)>0)
            p=NULL;     //û�в鵽Ҫ���ҵ�ͨѶ��
        else if (xz==2) {
            printf(" ������Ҫ�����ߵ�������");
            scanf("%s",name);
            while(p&&strcmp(p->data.name,name)!=0)
                p=p->next;
        }
    }
    return p;
}
/*******************************/
/*     ͨѶ¼�����ϵĽ��ɾ��    */
/*********************************/
void DelNode(LinkList head) {
    char jx;
    ListNode *p,*q;
    p=ListFind(head);   //���ò��Һ���
    if (p==NULL) {
        printf("û�в鵽Ҫɾ����ͨѶ��!\n");
        return;
    }
    printf("���Ҫɾ���ý���𣿣�y/n��:");
    scanf("%c",&jx);
    if (jx=='y'||jx=='Y') {
        q=head;
        while ((q!=NULL)&&(q->next!=p))
            q=q->next;
        q->next=p->next;    //ɾ�����
        free(p);            //�ͷű�ɾ���ռ�
        printf("ͨѶ���ѱ�ɾ����\n");
    }
}
/**********************************/
/*   ͨѶ¼������������         */
/**********************************/
void printList(LinkList head) {
    ListNode *p;
    p=head->next;
    printf("���  ��  ��    �Ա�    ��ϵ�绰    ��ַ      \n");
    printf("--------------------------------------------------------------------------------\n");
    while (p!=NULL) {
        printf("%s,%s,%s,%s,%s\n",p->data.num,p->data.name,p->data.sex,
               p->data.phone,p->data.addr);
        printf("---------------------------------------------------------------------------------\n");
        p=p->next;          //����һ�����
    }
}

