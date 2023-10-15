#include <stdio.h>
//function to reverse numbers
int reverseNumber(int num) {
    int reversed = 0;
    //iterating through the digits in the number and applying the algorithm
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed;
}

int main() {
    int num, reversedNum;

    printf("Enter an integer: ");
    //taking the number input
    scanf("%d", &num);
    //calling the function reverseNumber
    reversedNum = reverseNumber(num);
    //printing the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
