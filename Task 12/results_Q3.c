#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

typedef union {
    char name[50];
    float score;
} Student_t;

int main() {
    int numStudents, i;
    Student_t students[MAX_STUDENTS];
    float totalScore = 0.0, averageScore;
    int highestScoreIndex = 0;

    // Get number of students
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    // Input student information
    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", students[i].name); // Note the space before "%s" for whitespace
        printf("Score: ");
        scanf("%f", &students[i].score);

        // Update total score and track highest score
        totalScore += students[i].score;
        if (students[i].score > students[highestScoreIndex].score) {
            highestScoreIndex = i;
        }
    }

    // Calculate average score
    averageScore = totalScore / numStudents;

    // Print results
    printf("\nAverage score: %.2f\n",averageScore);

    // Print names of students below average
    printf("\nStudents below average:\n");
    for (i = 0; i < numStudents; i++) {
        if (students[i].score < averageScore) {
            printf("- %s\n",students[i].name);
        }
    }

    // Print highest score and names of students with the highest score
    printf("\nHighest score: %.2f (achieved by:\n",students[highestScoreIndex].score);
    for (i = 0; i < numStudents; i++) {
        if (students[i].score == students[highestScoreIndex].score) {
            printf("- %s\n",students[i].name);
        }
    }

    return 0;
}