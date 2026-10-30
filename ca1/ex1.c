#include <stdio.h>
int main() {
//	int num;
//	float num2;
//	printf("enter a num : ");
//	scanf("%d",&num);
//	printf("enter a decimal num : ");
//	scanf("%f",&num2);
//    printf("Helo world! You entered : %d and %f\n",num,num2);

int i;

for(i = 1; i <= 10; i++)
{
    if(i == 3)
        continue;

    if(i == 8)
        break;

    printf("%d ", i);
}








    return 0;
}
