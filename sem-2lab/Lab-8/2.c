// Define a union Players (p_name, team, score, average).
// Read data for 3 players and print.
#include <stdio.h>

union Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

int main() {
    union Players p;
    for (int i = 0; i < 3; i++) {
        printf("Player %d:\n", i + 1);
        printf("  Name: "); scanf(" %[^\n]", p.p_name);
        printf("  p_name = %s\n", p.p_name);
        printf("  Team: "); scanf(" %[^\n]", p.team);
        printf("  team = %s\n", p.team);
        printf("  Score: "); scanf("%d", &p.score);
        printf("  score = %d\n", p.score);
        printf("  Average: "); scanf("%f", &p.average);
        printf("  average = %.2f\n", p.average);
        printf("  (Note: union shares memory, only last assigned member is valid)\n\n");
    }
    return 0;
}
