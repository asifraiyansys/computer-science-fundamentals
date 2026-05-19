#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int space = N;
    for(int i = 0; i < N; i++){

        for(int j = space; j > 1; j--){
            printf(" ");
        }

        for(int k = i+1; k > 0; k--){
            printf("%d", k);
        }
        printf("\n");
        space--;
    }

}