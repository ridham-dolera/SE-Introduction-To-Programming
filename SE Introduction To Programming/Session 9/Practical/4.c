#include <stdio.h>

int main() {
    // Rows = Matches, Columns = Team Scores
    int cricketScores[3][2] = {
        {185, 178},   // Match 1
        {210, 198},   // Match 2
        {165, 172}    // Match 3
    };

    int highest;

    printf("Highest Score from Each Match:\n");

    for (int i = 0; i < 3; i++) {
        highest = cricketScores[i][0];

        for (int j = 1; j < 2; j++) {
            if (cricketScores[i][j] > highest) {
                highest = cricketScores[i][j];
            }
        }

        printf("Match %d: %d runs\n", i + 1, highest);
    }

    return 0;
}