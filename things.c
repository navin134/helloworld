#include <stdio.h>
//testing out how chars work and stuff
int main() {
    unsigned short int i;
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tsil[10];

    printf("Enter any number between 0-9: ");//testing how input and output from list works, pretty much same from java
    scanf("%hd", &i);
    //printf("\n");
    printf("%d\n", list[i]);

    //scanf("\n");

    printf("enter number for this list at index 0: ");
    scanf("%d", &tsil[0]);
    printf("%d", tsil[0]);

    return 0;
}
