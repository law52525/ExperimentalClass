#include<stdio.h>

int main() {
    FILE *f1 = fopen("in.txt","r");
    FILE *f2 = fopen("out.txt","w");
    int i,j,k,a1,b1,a2,b2;
    double r1[100][100],r2[100][100],ans[100][100];
    if(f1!=NULL) {
        fscanf(f1,"%d",&a1);
        fscanf(f1,"%d",&b1);
        fscanf(f1,"%d",&a2);
        fscanf(f1,"%d",&b2);

        for(i=0; i<a1; i++)
            for(j=0; j<b1; j++)
                fscanf(f1,"%lf",&r1[i][j]);


        for(i=0; i<a2; i++)
            for(j=0; j<b2; j++)
                fscanf(f1,"%lf",&r2[i][j]);

        for(i=0; i<a1; i++)
            for(j=0; j<b2; j++) {
                ans[i][j]=0;
                for(k=0; k<b1; k++)
                    ans[i][j]+=r1[i][k]*r2[k][j];
            }

        for(i=0; i<a1; i++) {
            for(j=0; j<b2; j++)
                fprintf(f2,"%10.2lf",ans[i][j]);
            fprintf(f2,"\n");
        }
    } else {
        printf("Read file error\n");
    }
    return 0;
}
