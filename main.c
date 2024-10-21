#include <stdio.h>

int main(void) {
    int i;
    int num1;
    int num2;
    int tot=0;
    printf("inserisci il primo numero: ");
    scanf("%d",&num1);
    printf("inserisci secondo numero: ");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++) {
        tot+=num1;
    }
    printf("%d*%d=%d",num1,num2,tot);
    return 0;
}
