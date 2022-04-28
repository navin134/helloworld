#include <stdio.h>

int main() {
    enum rainbow {red,orange,yellow,green,blue,purple};
    
    enum rainbow myFavoriteColor = yellow;

    printf("%d",myFavoriteColor);

    return 0;
}