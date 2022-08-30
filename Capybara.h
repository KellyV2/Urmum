#include <string>

using namespace std;

class  Capybara {
private:
    string name;
    int age;
public:
    void setName(string capyName);
    string getName();
    void setAge();
    int getAge();
};