/*  ����readData()������data2.txt�ж��벻ͬ��ģ���������ݴ������飬
��д��������Ķ��ֲ����㷨������������Ϊ1��5��10��20��30��
40���50��ʱ�����ݲ�ѯʱ�䡣
*/
#include "ArrayIo.h"
#define N 10000          /*������*/
/*�뽫���������������������в���*/
int binSearch(int a[],int n,int key)
{


}

int main()
{
    int a[N],n,x,pos;
    n=readData(a,N,"data1.txt"); /*��data2.txt�ļ��ж���ǰN��������a�У��������سɹ���������ݸ���*/
    printf("������Ҫ���ҵ�������");
    scanf("%d",&x);
    pos=binSearch(a,n,x);
    if (pos==-1)
        printf("����ʧ��");
    else
        printf("a[%d]=%d\n",pos,x);
}
