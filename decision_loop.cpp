#include <string>

int chooseValue(int x) {
    int result = 0;
    if (x > 10) {
        result = 1;
    } else if (x > 5) {
        result = 2;
    } else {
        result = 3;
    }

    switch (x) {
        case 1:
            result += 1;
            break;
        default:
            result += 0;
            break;
    }

    for (int i = 0; i < 3; i++) {
        result += i;
    }

    while (x > 0) {
        x--;
    }

    // ternary decision
    result = (result > 0) ? result : 0;
    return result;
}

void runDecisionLoop() {
    chooseValue(7);
}

