#include <string>

using namespace std;

class  Capybara {
private:
    string name;
    int age;
public:
    void setName(string capyName);
    string getName();
    void setAge(int newAge);
    int getAge();

    Capybara(int i, const char string[6]);
};