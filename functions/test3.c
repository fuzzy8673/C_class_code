#include<stdio.h>
// calculate the area of a rectangle
int getArea(int l,int b){
    int ans=l*b;
    return ans;
}

void printTable(int num){
    // your code here
    int i;
    for (i = 0; i < 10; i++)  // 7= 7  14  21
    {
        printf("%d\n",i*num);   
    }
}

int main(){
    // printf("Enter the length and breadth of the rectangle : \n");
    // int l;
    // int b;
    // scanf("%d %d",&l,&b);
    // int ans=getArea(l,b);
    // printf("The area of the rectangle : %d\n",ans);


    int num=7;
    // int i;
    // for (i = 0; i < 10; i++)  // 7= 7  14  21
    // {
    //     printf("%d\n",i*num);   
    // }

    printTable(num);
    
    return 0;
}