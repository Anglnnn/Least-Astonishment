#include <iostream>
#include <string>

class User {
private:
  std::string username;
  std::string email;

public:
  User(const std::string& username, const std::string& email)
    : username(username), email(email) {}

  void sendEmail(const std::string& recipient, const std::string& subject, const std::string& message) {
    // Логіка для надсилання електронного листа
    std::cout << "Email sent from " << email << " to " << recipient << ":" << std::endl;
    std::cout << "Subject: " << subject << std::endl;
    std::cout << "Message: " << message << std::endl;
  }
};

int main() {
  User user("JohnDoe", "johndoe@example.com");
  user.sendEmail("jane@example.com", "Hello", "This is a test email.");

  return 0;
}

