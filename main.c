#include <stdio.h>

int main(void) {
int number1;
    int number2;
    printf("Please enter number1\n");
    scanf("%d", &number1);
    printf("Please enter number2\n");
    scanf("%d", &number2);
    if (number1 == number2)
        printf("%i = %i\n",number1 , number2);


    else {
        if (number1 > number2)
            printf("%i > %i\n",number1 ,number2);

        else {
            if (number1 < number2)
                printf("%i < %i \n" , number1 , number2);

        }
    }
    return 0;

}


