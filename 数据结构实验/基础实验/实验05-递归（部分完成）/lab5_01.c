/*
  ��д�ݹ��㷨int max(int a[],int left, int right)��������a[left..right]�е��������
*/

#include "ArrayIo.h"
/*�뽫���������������������в���*/
int max(int a[],int left,int right)
{
    if(left==right)
        return a[left];
    return max(a,left+1,right)>a[left] ? max(a,left+1,right) : a[left];
}
int main()
{   int a[10];
    input(a,10);
    print(a,10);
    printf("������������:%d\n",max(a,0,9));
    return 0;
}
