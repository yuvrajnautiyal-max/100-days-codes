 /*
 * Question 132 (Enum)
 * 
 * Define an enum for traffic lights (RED, YELLOW, GREEN) and print 
 * 'Stop', 'Wait', or 'Go' based on its value.
 */

#include <stdio.h>

// 1. Define the enum for traffic light states.
// By default, RED = 0, YELLOW = 1, GREEN = 2.
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // 2. Declare an enum variable and set it to a state
    enum TrafficLight current_signal = RED;

    printf("--- Traffic Light Controller ---\n");

    // 3. Use a switch-case block to take action based on the enum value
    switch (current_signal) {
        case RED:
            printf("Stop\n");
            break;
            
        case YELLOW:
            printf("Wait\n");
            break;
            
        case GREEN:
            printf("Go\n");
            break;
            
        default:
            printf("Invalid signal state\n");
    }

    return 0;
}
