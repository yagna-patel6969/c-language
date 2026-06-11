// Structure Players. Read N players. Find highest score, display top 3 by score.
// Also sort all players alphabetically and print.
#include <stdio.h>
#include <string.h>

struct Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

int main() {
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    struct Players p[n], temp;
    for (int i = 0; i < n; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("  Name: "); scanf(" %[^\n]", p[i].p_name);
        printf("  Team: "); scanf(" %[^\n]", p[i].team);
        printf("  Score: "); scanf("%d", &p[i].score);
        printf("  Average: "); scanf("%f", &p[i].average);
    }
    // Sort by score descending
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (p[j].score < p[j + 1].score) {
                temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
            }
    printf("\n--- Top 3 Players by Score ---\n");
    int top = (n < 3) ? n : 3;
    for (int i = 0; i < top; i++)
        printf("Name: %-20s | Score: %d | Average: %.2f\n", p[i].p_name, p[i].score, p[i].average);

    // Sort alphabetically
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (strcmp(p[j].p_name, p[j + 1].p_name) > 0) {
                temp = p[j]; p[j] = p[j + 1]; p[j + 1] = temp;
            }
    printf("\n--- All Players (Alphabetically Sorted) ---\n");
    for (int i = 0; i < n; i++)
        printf("Name: %-20s | Team: %-15s | Score: %d | Average: %.2f\n",
               p[i].p_name, p[i].team, p[i].score, p[i].average);
    return 0;
}
