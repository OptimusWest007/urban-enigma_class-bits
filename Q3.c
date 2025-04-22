#include <stdio.h>
int main() {
    int marks;
    printf("Enter the students marks: \n");
    scanf("%d", &marks);
    
    if (marks >= 70) {
        printf("You have scored %d marks and have therefore attained grade A", marks);
    }
    else 
        if (marks >= 60) {
            printf("You have scored %d marks and have therefore attained grade B", marks);
        }
        else 
            if (marks >= 50) {
                printf("You have scored %d marks and have therefore attained grade C", marks);
            }
            else 
                if (marks >= 40) {
                    printf("You have scored %d marks and have therefore attained grade D", marks);
                }
                else {
                    printf("You have scored %d marks and have therefore attained grade E", marks);
                }

    return 0;
}
