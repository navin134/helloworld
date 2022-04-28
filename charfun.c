#include <stdio.h>
//#include <stdbool.h>

int main() {

    unsigned short int i = 0;
    //char myinitials[i+1];
    /* while(1) {
        char inm;
        printf("please enter intial #%d: ", i+1);
        scanf("%s", &inm);
        //scanf("%c");
        if(inm == '0') {break;}
        //printf("%s",inm);
        myinitials[i++] = inm;

    } */
    int len = 0;
    char myName[len];
    len = scanf("%*s", myName);
    printf("%s", myName);
    //fflush(stdout);
    /* printf("this: %d\n", i);
    printf("Hello your initials are: %s", myinitials); */
    return 0;
}