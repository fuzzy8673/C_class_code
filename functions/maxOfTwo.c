// write a function, that accepts 2 integers as parameter and returns the greater number among those.
#include<stdio.h>
int getMax(int a,int b){
    if (a>b)
    {
        return a;   
    }else if(b>a){
        return b;
    }
    else{
        return -1;
    }
    
}

int main(){
    printf("%d\n",getMax(2,3));
    printf("%d\n",getMax(12,3));
    printf("%d\n",getMax(26,3));
    printf("%d\n",getMax(2,31));
    return 0;
}