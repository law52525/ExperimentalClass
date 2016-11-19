#include  <stdio.h>
#include  <stdlib.h>
/**********************************/
/*˳����ͷ�ļ����ļ���sequlist.h*/
/**********************************/
#define MAXSIZE 100
typedef int datatype;
typedef struct {
    datatype a[MAXSIZE];
    int sz;
} sequence_list;

/**********************************/
/*�������ƣ�initseqlist()         */
/*�������ܣ���ʼ��˳���          */
/**********************************/
void initseqlist(sequence_list *L) {
    int i=0;
    for(;i<MAXSIZE;i++)
	L->a[i] = 0;
    L->sz=0;
}
/**********************************/
/*�������ƣ�input()               */
/*�������ܣ�����˳���            */
/**********************************/
void input(sequence_list *L) {
    datatype x;
    initseqlist(L);
    printf("������һ�����ݣ���0��Ϊ��������\n");
    scanf("%d",&x);
    while (x) {
        L->a[L->sz++]=x;
        scanf("%d",&x);
    }
}
/**********************************/
/*�������ƣ�inputfromfile()       */
/*�������ܣ����ļ�����˳���      */
/**********************************/
void inputfromfile(sequence_list *L,char *f) {
    int i,x;
    FILE *fp=fopen(f,"r");
    L->sz=0;
    if (fp) {
        while ( ! feof(fp)) {
            fscanf(fp,"%d",&L->a[L->sz++]);
        }
        fclose(fp);
    }
}
/**********************************/
/*�������ƣ�print()               */
/*�������ܣ����˳���            */
/**********************************/
void print(sequence_list *L) {
    int i;
    for (i=0; i<L->sz; i++) {
        printf("%5d",L->a[i]);
        if ((i+1)%10==0) printf("\n");
    }
    printf("\n");
}

