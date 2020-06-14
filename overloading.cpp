#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string name;
    public:
        Person() {name = "������";}
        Person(string name): name(name) {}
        Person operator+(Person& other){
            return Person(name + "&" + other.name);
        }
        void ShowName() {
            cout << "�̸�: " << name << endl;
        }
};

int main(void){
    Person person1;
    person1.ShowName();
    Person person2("������");
    person2.ShowName();
    Person result = person1 + person2;
    result.ShowName();
    return 0;
}