#include<stdio.h>
#include<math.h>

double itera3(double x) {
    return (3*x+1)/(x*x);
}

double itera4(double x) {
    return (x*x*x-1)/3.0;
}

double itera8(double x) {
    return x-1.0/3.0*((x*x*x-3*x-1)/(x*x-1));
}

int main() {
    freopen("in.txt","r",stdin);
    int i,num=15,cnt=3;
    double x,y,z;

    /**��3����������**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0;i<num;i++) {
        y = itera3(x);
        z = itera3(y);
        x = x-(y-x)*(y-x)/(z-2*y+x);
    }
    printf("  x = %lf\n",x);

    /**��4����������**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0;i<15*num;i++) {
        y = itera4(x);
        z = itera4(y);
        x = x-(y-x)*(y-x)/(z-2*y+x);
    }
    printf("  x = %lf\n",x);

    /**��5����������**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0; i<num; i++) {
        x = pow( 3*x + 1,1.0/3.0);
    }
    printf("  x = %lf\n",x);

    /**��6����������**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0; i<num; i++) {
        x = 1.0 / ((x*x) - 3);
    }
    printf("  x = %lf\n",x);

    /**��7����������**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0; i<num; i++) {
        x = pow( 3+1.0/x, 1.0/2.0);
    }
    printf("  x = %lf\n",x);

    /**��8����������**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0;i<num;i++) {
        x = x-1.0/3.0*((x*x*x-3*x-1)/(x*x-1));
    }
    printf("  x = %lf\n",x);

    /**��**/
    printf("%d:\n",cnt++);
    scanf("%lf",&x);
    for(i=0;i<num-14;i++) {
        y = itera8(x);
        printf("%lf\n",y);
        z = itera8(y);
        printf("%lf\n",z);
        x = x-(y-x)*(y-x)/(z-2*y+x);
    }
    printf("  x = %lf\n",x);


    return 0;
}
