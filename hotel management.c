#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // -------------------------------------------------------------
    // 1D ARRAY — WEEKLY REVENUE TRACKER
    // -------------------------------------------------------------
    int revenue[7];
    int totalRevenue = 0;
    float averageRevenue;

    printf("=== 1D ARRAY: WEEKLY REVENUE TRACKER ===\n");

    // Input revenue for 7 days
   for(int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;

    printf("\nTotal weekly revenue = %d\n", totalRevenue);
    printf("Average daily revenue = %.2f\n\n", averageRevenue);

    // 2D ARRAY — ROOM OCCUPANCY FOR ONE BRANCH
    int occupancy[5][10];  // 5 floors, 10 rooms each

    printf("=== 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH) ===\n");

    srand(time(NULL));

    // Generate random occupancy data (1 = occupied, 0 = vacant)
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display occupancy table
    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               floor + 1, occupied, vacant);
    }

    // 3D ARRAY — MULTIPLE BRANCHES
    int branches[3][5][10]; // 3 branches, 5 floors, 10 rooms

    printf("\n=== 3D ARRAY: MULTIPLE BRANCHES ===\n");

    // Input occupancy for each branch
    for (int b = 0; b < 3; b++) {
        printf("\n--- Branch %d ---\n", b + 1);

        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                branches[b][f][r] = rand() % 2;
            }
        }
    }

    for (int b = 0; b < 3; b++) {
        int totalOccupied = 0, totalVacant = 0;

        printf("\nBranch %d Summary:\n", b + 1);

        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                if (branches[b][f][r] == 1)
                    totalOccupied++;
                else
                    totalVacant++;
            }
        }

        printf("Total Occupied Rooms: %d\n", totalOccupied);
        printf("Total Vacant Rooms:   %d\n", totalVacant);
    }

    return 0;
}