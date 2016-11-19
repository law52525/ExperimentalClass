/*假设顺序表la与lb分别存放两个整数集合，函数inter(seqlist *la,seqlist *lb,seqlist *lc)
的功能是实现求顺序表la与lb的交集存放到顺序表lc中,请将函数补充完整.  */

/**********************************/
/*文件名称：lab1_04.c                 */
/**********************************/
#include "sequlist.h"
/*请将本函数补充完整，并进行测试*/
void  inter(sequence_list *la,sequence_list *lb,sequence_list *lc) {
    int i,j;
    initseqlist(lc);
    for(i=0; i<la->sz; i++)
        for(j=0; j<lb->sz; j++)
            if(la->a[i]==lb->a[j]) {
                lc->a[lc->sz++]=la->a[i];
                break;
            }
}
int main() {
    sequence_list la,lb,lc;
    inputfromfile(&la,"1.txt"); 		/*从文件1.txt建立顺序表*/
    inputfromfile(&lb,"2.txt");		/*从文件2.txt建立顺序表*/
    print(&la); 				 	    /*输出la*/
    print(&lb);  				        /*输出lb*/
    inter(&la,&lb,&lc);   		    /*求la与lb的交集存于lc中*/
    print(&lc); 					    /*输出lc*/
    getchar();
    return 0;
}
