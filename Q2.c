#include <stdio.h>
int main() {
    int yourAge;
    int votingAge = 18;
    printf("Enter your age: \n");
    scanf("%d", &yourAge);
    
    if (yourAge < votingAge) {
        printf("You cannot vote until you are 18 or more");
    }
    else {
        printf("You can vote");
    }
    return 0;
}
