// Define a structure Players (p_name, team, score, average).
// Read data for 3 players and print.
#include <stdio.h>

struct Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

int main() {
    struct Players p[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("  Name: "); scanf(" %[^\n]", p[i].p_name);
        printf("  Team: "); scanf(" %[^\n]", p[i].team);
        printf("  Score: "); scanf("%d", &p[i].score);
        printf("  Average: "); scanf("%f", &p[i].average);
    }
    printf("\n--- Player Details ---\n");
    for (int i = 0; i < 3; i++)
        printf("Name: %-20s | Team: %-15s | Score: %d | Average: %.2f\n",
               p[i].p_name, p[i].team, p[i].score, p[i].average);
    return 0;
}
