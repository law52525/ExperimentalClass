/*��֪˳���L1��L2��������С�����������þ����ܿ�ķ�����L1��L2�е����ݺϲ���L3�У�ʹ������L3�а��������С�*/

#include "sequlist.h"
/*�뽫���������������������в���*/
void merge(sequence_list *L1,sequence_list *L2,sequence_list *L3)
{
    int L1_i=0,L2_i=0;
    initseqlist(L3);
    while(L1_i<=L1->sz-1&&L2_i<=L2->sz-1){
        if(L1->a[L1_i] < L2->a[L2_i]) L3->a[L3->sz++] = L1->a[L1_i++];
        else L3->a[L3->sz++] = L2->a[L2_i++];
    }
    while(L1_i<=L1->sz-1) L3->a[L3->sz++] = L1->a[L1_i++];
    while(L2_i<=L2->sz-1) L3->a[L3->sz++] = L2->a[L2_i++];
}
int main()
{
    sequence_list L1,L2,L3;
    input(&L1);				/*����ʱ��������������*/
    input(&L2);				/*����ʱ��������������*/
    merge(&L1,&L2,&L3);		/*�ϲ����ݵ�L3*/
    print(&L3);				/*���L3*/
}
