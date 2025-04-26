#include <stdio.h>
int main() {
    int marks;
    printf("Enter the students marks: \n");
    scanf("%d", &marks);
    
    if (marks >= 70) {
        printf("Your mark is: %d \nYour grade is: A", marks);
    }
    else 
        if (marks >= 60) {
            printf("Your mark is: %d \nYour grade is: B", marks);
        }
        else 
            if (marks >= 50) {
                printf("Your mark is: %d \nYour grade is: C", marks);
            }
            else 
                if (marks >= 40) {
                    printf("Your mark is: %d \nYour grade is: D", marks);
                }
                else {
                    printf("Your mark is: %d \nYour grade is: E", marks);
                }

    return 0;
}
