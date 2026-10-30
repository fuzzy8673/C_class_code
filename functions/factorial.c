#include<stdio.h>

// write a function that calculates the factorial of a integer 
// call the function in the main and run it for 1 example num 
// 5! = 5*4*3*2*1
//      1*2*3*4*5
long calcFac(int n){ 
    long ans=1;
    int i;
    for(i=1;i<=n;i++){   // 5! = 1*2*3*4*5
        ans=ans*i;
    }
    return ans;
}



































































// write a function that tells if a given alphabet is vowel or not
void isVowel(char ch){
    // write your code here
    if (ch=='a' || ch=='e' ||  ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c is not a vowel",ch);
    }
    
}



int main(){
    printf("%d\n",calcFac(5));
    printf("%d\n",calcFac(6));
    // printf("The factorial of %d is %d",n,calcFac(n));
    // printf("%d\n",calcFac(4));
    // printf("%d\n",calcFac(1));
    // printf("%d\n",calcFac(0));    
    return 0;
}