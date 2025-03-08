#include <stdio.h>

#define NUM_TRAINEES 3
#define NUM_ROUNDS 3
#define MIN_OXYGEN 1
#define MAX_OXYGEN 100


int is_valid_oxygen(int oxygen) {
    return oxygen >= MIN_OXYGEN && oxygen <= MAX_OXYGEN;
}

int calculate_average(int oxygen_levels[NUM_ROUNDS]) {
    int sum = 0;
    for (int i = 0; i < NUM_ROUNDS; i++) {
        sum += oxygen_levels[i];
    }
    return sum / NUM_ROUNDS;
}

int main() {
    int oxygen_levels[NUM_TRAINEES][NUM_ROUNDS];
    int averages[NUM_TRAINEES];
    int highest_avg = -1;
    int unfit_flag = 1;  
    for (int i = 0; i < NUM_TRAINEES; i++) {
        for (int j = 0; j < NUM_ROUNDS; j++) {
            if (scanf("%d", &oxygen_levels[i][j]) != 1 || !is_valid_oxygen(oxygen_levels[i][j])) {
                printf("INVALID INPUT\n");
                return 0;
            }
        }
    }
    for (int i = 0; i < NUM_TRAINEES; i++) {
        averages[i] = calculate_average(oxygen_levels[i]);
        if (averages[i] > highest_avg) {
            highest_avg = averages[i];
        }
    }
    if (highest_avg < 70) {
        printf("All trainees are unfit.\n");
        return 0;
    }
    for (int i = 0; i < NUM_TRAINEES; i++) {
        if (averages[i] == highest_avg) {
            printf("Trainee Number : %d\n", i + 1);
            unfit_flag = 0;  
        }
    }
    if (unfit_flag) {
        printf("All trainees are unfit.\n");
    }
    return 0;
}

