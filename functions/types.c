#include<stdio.h>

int sum(int a,int b){  // factorial, add
    return a+b;
}

void sum1(int a,int b){
    printf("the sum is: %d",a+b);
}

int sum2(){
    return 6+2;
}
// int getMax(){
//     return maxIndex;
// }
// arr = [2, 1, 5, 4]
        // 0  1  2   3

void sum3(){
//    printf("%d\n",4+5);
   printf("good morning!");

}

int main(){
    int ans=sum(4,5);
    printf("%d\n",ans);
    
    sum1(8,1);

    printf("%d\n",sum2());
    return 0;
}