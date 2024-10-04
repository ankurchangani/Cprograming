#include <stdio.h>

int main() {
    int num , i;

start:
    printf("Enter a positive integer (or -1 to exit): ");
    scanf("%d", &num);


    if (num == -1) {
        printf("Exiting the program.\n");
        return 0; 
    }

 
    if (num > 0) {
        printf("You entered: %d\n", num);
    } else {
        printf("Please enter a positive integer.\n");
        goto start;
    }


  for(i =1 ; i<=num ; i++){
    if(i = 5){
         printf("Reached 5, breaking the loop.\n");
            break;
    }
        printf("Current count: %d\n", i);

  }

    goto start;

    return 0;
}
