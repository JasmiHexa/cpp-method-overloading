#include <cstdio>
#include <sstream>
#include <string>

void readExtraInput() {
    int value = 0;
    scanf("%d", &value); // input entity (scanf)

    std::string raw = "42";
    std::istringstream iss(raw); // input entity (istringstream)
    int parsed = 0;
    iss >> parsed;
    (void)parsed;
}

