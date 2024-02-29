#include <stdio.h>

#define NUM_QUESTIONS 25
#define NUM_STUDENTS 3

int main() {
    char correctAnswers[NUM_QUESTIONS];
    char studentResponses[NUM_STUDENTS][NUM_QUESTIONS];
    char scores[NUM_STUDENTS];

    //  Read correct answers
    printf("Enter the correct answers for the test:\n");
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        printf("Question %d: ", i + 1);
        scanf("%c", &correctAnswers[i]);
        fflush(stdin);

    }

    //  Read student responses and calculate scores
    for (int student = 0; student < NUM_STUDENTS; student++) {
        printf("\nEnter responses for Student %d:\n", student + 1);
        scores[student] = 0; // Reset score at the start of each student

        for (int i = 0; i < NUM_QUESTIONS; i++) {
            printf("Question %d: ", i + 1);
            scanf("%c", &studentResponses[student][i]);
            fflush(stdin);
            // Count correct answers immediately
            if (studentResponses[student][i] == correctAnswers[i]) {
                scores[student]++;
            }
        }
    }

    //  Print the results
    printf("\nResults:\n");
    for (int student = 0; student < NUM_STUDENTS; student++) {
        printf("Student %d Score: %d out of %d\n", student + 1, scores[student], NUM_QUESTIONS);
    }

    return 0;
}