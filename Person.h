#include <string>

using namespace std;

class Person {
 private:
    string name;
    int salary;

 public:
  void setName(string myName);
  string getName();
  void setSalary(int mySalary);
  int getSalary();
  Person() : name("invalid"), salary(0){};
};