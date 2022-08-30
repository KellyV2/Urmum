#include <string>

using namespace std;

class person {
 private:
  string name;
  int salary;

 public:
  void setName(string myName);
  string getName();
  void setSalary(int mySalary);
  int getSalary();
  person(int mySalary, string myName);
  person() : name("invalid"), salary(0){};
};