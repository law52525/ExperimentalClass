/*
  请编写递归函数void bubbleSort(int a[],int n)，
  对长度为n的数组采用冒泡法进行升序排序。
  请编写递归函数int binSearch(int a[], int left, int right,int key)，
  采用二分查找法在数组a[left..right]中查找值为key的元素所在的位置，
  若查找失败函数返回-1。
  */

#include "ArrayIo.h"
#define N 10
/*请将本函数补充完整，并进行测试*/
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
    printf("请输入要查找的数：\n");
    scanf("%d",&x);
    pos=binSearch(a,0,N-1,x);
    if (pos!=-1) printf("a[%d]=%d\n",pos,x);
    else printf("Not found!\n");
    return 0;
}
