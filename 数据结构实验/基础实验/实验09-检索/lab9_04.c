/*  ����readData()������data2.txt�ж��벻ͬ��ģ���������ݴ������飬
��д��������Ķ��ֲ��ҵݹ��㷨��
*/
#include "ArrayIo.h"
#define N 10000          /*������*/
/*�뽫���������������������в���*/
int binSearch(int a[],int low,int high,int key)
{


}

int main()
{
    int a[N],n,x,pos;
    n=readData(a,N,"data1.txt"); /*��data2.txt�ļ��ж���ǰN��������a�У��������سɹ���������ݸ���*/
    printf("������Ҫ���ҵ�������");
    scanf("%d",&x);
    pos=binSearch(a,0,n-1,x);
    if (pos==-1)
        printf("����ʧ��");
    else
        printf("a[%d]=%d\n",pos,x);
}
