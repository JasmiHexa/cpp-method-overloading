#include <string>

class PaymentService {
public:
    std::string sendRequest(const std::string& url);
    void postAsync(const std::string& payload);
};

std::string PaymentService::sendRequest(const std::string& url) {
    // dummy implementation
    return "OK";
}

void PaymentService::postAsync(const std::string& payload) {
    // dummy implementation
    (void)payload;
}

