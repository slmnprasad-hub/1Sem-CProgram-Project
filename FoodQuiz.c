#include <stdio.h>
#include <ctype.h>

int main() {
    char ans;
    int score = 0;

    printf("=== FOOD QUIZ ===\n");

    printf("\n1) King of Fruits?\nA) Apple\nB) Mango\nC) Orange\nD) Banana\n");
    scanf(" %c", &ans);
    if (toupper(ans) == 'B')
        score++;

    printf("\n2) Country famous for Pizza?\nA) India\nB) USA\nC) Italy\nD) China\n");
    scanf(" %c", &ans);
    if (toupper(ans) == 'C')
        score++;

    printf("\n3) Vitamin in citrus fruits?\nA) A\nB) B\nC) C\nD) D\n");
    scanf(" %c", &ans);
    if (toupper(ans) == 'C')
        score++;

    printf("\nYour Score: %d/3\n", score);

    return 0;
}