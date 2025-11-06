#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float percentile;
};

int main() {
    struct Student s[100], temp;
    int n, i, j;

    printf("Enter number of students appeared for Exam: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name); 
        printf("Application ID: ");
        scanf("%d", &s[i].id);
        printf("Percentile: ");
        scanf("%f", &s[i].percentile);
    }

    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(s[j].percentile < s[j + 1].percentile) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    
    printf("\n\n-----------------------------------------------------");
    printf("\n   \t\t\t\tABC Exam Rank List:");
    printf("\n-----------------------------------------------------");
    printf("\nRank \t%s \t\t%s \t\t%s", "Application ID", "Name", "Percentile");
    printf("\n-----------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d \t\t%d \t\t\t\t%s \t\t%.6f\n", i+1, s[i].id, s[i].name, s[i].percentile);
    }

    printf("-----------------------------------------------------");

    return 0;
}
