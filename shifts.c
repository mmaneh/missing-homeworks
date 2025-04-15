#include <stdio.h>
int main() {
    int num = 0;
    printf("enter a number: ");
    scanf("%d", &num);

    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
        num = num << 1;
    }
    printf("%d\n", num);

    for (int i = 0; i < n; ++i){
        num = num >> 1;
    }
    printf("%d\n", num);



    
}