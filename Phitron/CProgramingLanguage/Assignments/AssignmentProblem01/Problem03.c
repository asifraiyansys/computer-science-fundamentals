#include <stdio.h>

int main() {
    long int N;
    scanf("%ld", &N);
    if(N % 3 == 0){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}