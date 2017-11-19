
#include<stdio.h>
#include<math.h>
double NianJingZhongZhi(int y ,double r );
int main()
{
    int y = 0;
    double r=0;
    double x=0;
    printf("请输入年金的年限:");
    scanf("%d",&y);
    printf("请输入年金的利率，例:如\"0.1\"\n:");
    scanf("%lf",&r);
    x = NianJingZhongZhi(y,r);
    printf("年金终值系数为%f\n",x);
    return 0;
}

double NianJingZhongZhi (int y ,double r){
    int i ;
    double sum = 0,end =0 ;
    double real_r= 0 ;
    real_r = 1 + r;
        for(i=0 ;i<y; i++){
        sum = pow(real_r,i);
        end +=sum;
    }
    return end;
}
