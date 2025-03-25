

#include <stdio.h>

int main() {
    int score = 0;
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Welcome, %s!\n", name);

    // Question 1
    printf("What is the capital of India?\n");
    printf("A) Mumbai\n");
    printf("B) Delhi\n");
    printf("C) Chennai\n");
    printf("D) Kolkata\n");

    char answer1;
    scanf(" %c", &answer1);

    if (answer1 == 'B' || answer1 == 'b') {
        score++;
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is B) Delhi.\n");
    }

    // Question 2
    printf("Who is the author of the book 'To Kill a Mockingbird'?\n");
    printf("A) F. Scott Fitzgerald\n");
    printf("B) Harper Lee\n");
    printf("C) Jane Austen\n");
    printf("D) J.K. Rowling\n");

    char answer2;
    scanf(" %c", &answer2);

    if (answer2 == 'B' || answer2 == 'b') {
        score++;
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is B) Harper Lee.\n");
    }

    // Question 3
    printf("What is the largest planet in our solar system?\n");
    printf("A) Earth\n");
    printf("B) Saturn\n");
    printf("C) Jupiter\n");
    printf("D) Uranus\n");

    char answer3;
    scanf(" %c", &answer3);

    if (answer3 == 'C' || answer3 == 'c') {
        score++;
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is C) Jupiter.\n");
    }

    printf("Your final score is: %d out of 3\n", score);

    return 0;
}