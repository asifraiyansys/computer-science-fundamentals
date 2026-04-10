#include <stdio.h>
#include <stdbool.h>

int main()
{
    char name[] = "Asib";
    char firstLetter = 'A';
    int age = 26;
    float height = 5.6;
    double weight = 25.12324324;
    bool isDeveloper = true;

    printf("%s\n", name);
    printf("%c\n", firstLetter);
    printf("%d\n", age);
    printf("%f\n", height);
    printf("%lf\n", weight);
    printf("%d\n", isDeveloper);

    return 0;
}