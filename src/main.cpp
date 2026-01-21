#include <iostream>
#include <string>

struct User {
    int id;
    std::string name;
};

class PaymentService {
public:
    std::string sendRequest(const std::string& url);
    void postAsync(const std::string& payload);
};

class MathUtil {
public:
    int add(int a, int b);
    double add(double a, double b);
};

void helper();
void runDbLayer();
void runIoLayer();
void runDecisionLoop();
void readWithScanf();
void readExtraInput();
void runExtraCalls();

int main() {
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name; // input entity (cin)

    User user;
    user.id = 1;
    user.name = name;

    PaymentService svc;
    std::string url = "https://api.example.com/pay";
    svc.sendRequest(url);        // service call
    svc.postAsync("{\"amount\":100}"); // service call

    MathUtil math;
    int a = math.add(1, 2);      // overload callee (int)
    double b = math.add(1.5, 2.0); // overload callee (double)
    std::cout << a << b << std::endl;

    helper();        // normal callee
    runDbLayer();    // DB calls
    runIoLayer();    // IO calls
    runDecisionLoop(); // loop + decision
    readWithScanf(); // input + normal call
    readExtraInput(); // extra input patterns
    runExtraCalls();  // extra normal callee

    return 0;
}

