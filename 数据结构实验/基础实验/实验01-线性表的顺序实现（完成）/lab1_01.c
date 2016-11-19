/**********************************/
/*文件名称：lab1-01.c             */
/**********************************/
/*基于sequlist.h中定义的顺序表，编写算法函数reverse(sequence_list *L)，实现顺序表的就地倒置。*/
#include "sequlist.h"
/*请将本函数补充完整，并进行测试*/
void reverse(sequence_list *L)
{
    datatype temp;
    int len = L->sz,i;
    for(i=0;i<len/2;i++){
        temp=L->a[i];
        L->a[i]=L->a[len-i-1];
        L->a[len-i-1]=temp;
    }
}
int main()
{
    sequence_list L;			/*定义顺序表*/
    input(&L);	        		/*输入测试用例*/
    print(&L);                  /*输出原表*/
    reverse(&L);		            /*顺序表倒置*/
    print(&L);                  /*输出新表*/
}
