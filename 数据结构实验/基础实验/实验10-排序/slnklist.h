#include <stdio.h>
#include <stdlib.h>
/**************************************/
/* ����ʵ�ֵ�ͷ�ļ����ļ���slnklist.h */
/**************************************/
 typedef int datatype;
 typedef struct link_node{
   datatype info;
   struct link_node *next;
 }node;
typedef node *linklist;

/**********************************/
/*�������ƣ�print()		 			 */
/*�������ܣ������ͷ���ĵ�����      */
/**********************************/
void print(linklist head)
{
    linklist p;
    int i=0;
    p=head->next;
    printf("List is:\n");
    while(p)
    {
        printf("%7d",p->info);
        i++;
        if (i%10==0)    printf("\n");
        p=p->next;
    }
    printf("\n");

}

/******************************************/
/*�������ƣ�creatLink() 			      */
/*�������ܣ����ļ��ж���n�����ݹ��ɵ����� */
/******************************************/
linklist creatLink(char *f, int n)
{
    FILE *fp;
    int i;
    linklist s,head,r;
    head=r=(linklist)malloc(sizeof(node));
    head->next=NULL;
    fp=fopen(f,"r");
    if (fp==NULL)
        return head;
    else
    {
         for (i=0;i<n;i++)
            {
                s=(linklist)malloc(sizeof(node));
                fscanf(fp,"%d",&(s->info));
                r->next=s;
                r=s;
            }
        r->next=NULL;
        fclose(fp);
        return head;
    }
}
/*
    �������ܣ����������ݴ����ļ�f
*/
void writetofile(linklist head, char *f)
{
    FILE *fp;
    linklist p;
    int i=0;
    fp=fopen(f,"w");
    if (fp!=NULL)
    {
        p=head->next;
        fprintf(fp,"%s","List is:\n");
        while(p)
        {
            fprintf(fp,"%7d",p->info);
            i++;
            if (i%10==0)    fprintf(fp,"%c",'\n');
            p=p->next;
        }
        fprintf(fp,"%c",'\n');
        fclose(fp);
    }
    else    printf("�����ļ�ʧ��!");

}

/**********************************/
/*�������ƣ�delList()		 		 */
/*�������ܣ��ͷŴ�ͷ���ĵ�����      */
/**********************************/
void delList(linklist head)
{ linklist p=head;
  while (p)
  { head=p->next;
    free(p);
    p=head;
  }
}
