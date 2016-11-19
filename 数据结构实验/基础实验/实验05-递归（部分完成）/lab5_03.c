/*
  ���д�ݹ麯��void bubbleSort(int a[],int n)��
  �Գ���Ϊn���������ð�ݷ�������������
  ���д�ݹ麯��int binSearch(int a[], int left, int right,int key)��
  ���ö��ֲ��ҷ�������a[left..right]�в���ֵΪkey��Ԫ�����ڵ�λ�ã�
  ������ʧ�ܺ�������-1��
  */

#include "ArrayIo.h"
#define N 10
/*�뽫���������������������в���*/
void bubbleSort(int a[],int n)
{
    int i=0,t;
    for(;i<=n;i++){
        bubbleSort(a,n-i-1);
        if(a[i]>a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
}
int binSearch(int a[], int left,int right,int key)
{
    int mid = (right+left)/2;
    if(a[mid]<key)
        binSearch(a,mid+1,right,key);
    else if(a[mid]>key) binSearch(a,left,mid-1,key);
    else return mid;
}
int main()
{
    int x,pos,a[N];
    init(a,N);
   	bubbleSort(a,N);
    print(a,N);
    printf("������Ҫ���ҵ�����\n");
    scanf("%d",&x);
    pos=binSearch(a,0,N-1,x);
    if (pos!=-1) printf("a[%d]=%d\n",pos,x);
    else printf("Not found!\n");
    return 0;
}
