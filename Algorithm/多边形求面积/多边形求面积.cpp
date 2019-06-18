#include<stdio.h>

 //(x0,y0), (x1,y1), (x2, y2)是逆时针返回值为正，顺时针返回值为负

 double area(double x0, double y0, double x1,double y1, double x2,double y2){
   return (x0*y1 + x2*y0 + x1*y2 - x2*y1 - x0*y2 - x1*y0 ) / 2;        
}

int main(){
    int n;
    while(scanf("%d",&n) == 1&&n){
        double x[109], y[109];
        double sum = 0;
        // 按照逆时针给的点
        for(int i = 1; i<= n; i++){
            scanf("%lf%lf",&x[i],&y[i]);
        }
        
        for(int i = 2;i < n; i++){
            sum += area(x[1],y[1],x[i],y[i],x[i+1],y[i+1]);
        }
    
        printf("%.1lf\n",sum);
    }
    return 0;
}
