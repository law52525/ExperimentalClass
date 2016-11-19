/**********************************/
/*文件名称：lab1_02.c             */
/**********************************/

/*编写一个算法函数void sprit( sequence_list *L1,sequence_list *L2,sequence_list *L3)，
将顺序表L1中的数据进行分类，奇数存放到存到顺序表L2中，偶数存到顺序表L3中，编写main()进行测试。
*/

#include "sequlist.h"
/*请将本函数补充完整，并进行测试*/
void sprit(sequence_list *L1,sequence_list *L2,sequence_list *L3) {
    int i;
    initseqlist(L2);
    initseqlist(L3);
    for(i=0; i<L1->sz; i++) {
        if(L1->a[i]%2!=0) L2->a[L2->sz++] = L1->a[i];
        else L3->a[L3->sz++] = L1->a[i];
    }
}
int main() {
    sequence_list L1,L2,L3;		/*定义三个顺序表*/
    input(&L1);				    /*输入L1*/
    sprit(&L1,&L2,&L3);		    /*对L1进行分类*/
    print(&L1);				    /*输出L1、L2和L3*/
    print(&L2);
    print(&L3);
}

