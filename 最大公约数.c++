#include <stdio.h>
int file(int a,int b);
int main(){
    int a,b,c;
    a = 0;
    b = 0;
    c = 0;
    printf("请输入第一个数\n");
    scanf("%d",&a);
    printf("请输入第二个数\n");
    scanf("%d",&b);
    if (a<b){
        c = a;
        a = b;
        b = c;
    }
    printf("二者的最大公因数是 %d\n",file(a,b));
    return 0;
}
int file(int a,int b){
    int x=1;
    while(x!=0){
        x = a % b;
        if (x==0){
            break;
        }
        a = b;
        b = x;
    }
    return b;
    
}
