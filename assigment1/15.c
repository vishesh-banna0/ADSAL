#include <stdio.h>

int main() {
    int val;
    printf("Enter the consumed units value for this month:\t");
    scanf("%d", &val);

    int result = 0;

    if (val <= 100) {
        result = val * 5;
    }
    else if (val <= 200) {
        result = (100 * 5) + (val - 100) * 7;
    }
    else {
        result = (100 * 5) + (100 * 7) + (val - 200) * 10;
    }

    printf("Your total bill is : Rs. %d", result);
    return 0;
}
