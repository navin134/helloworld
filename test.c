#include <stdio.h>

int main() {

    char str[100];
    int i;

    printf("Please enter Name and Age: ");
    scanf("%s %d", str, &i);

    printf("\nYour name is %s \nYour age is %d", str, i);

    return 0;
}