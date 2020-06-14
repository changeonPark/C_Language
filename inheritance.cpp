#include <iostream>
#include <string>

using namespace std;
//부모 클래스 생성
class Temp{
    public:
        void ShowTemp(){
            cout << "임시 부모 클래스\n";
        }
};
class Person{
    private:
        string name;
    public:
        Person(string name): name(name){}
        string getName(){
            return name;
        }
        void ShowName(){
            cout << "Name: " << getName() << endl;
        }
};
//자식 클래스 생성
class Student: Person, public Temp{
    private:
        int studentid;
        //멤버 변수 name은 부모로부터(Person) 물려받음.
    public:
        Student(int studentid, string name): Person(name){
            this->studentid = studentid;
        }
        void Show(){
            cout << "Student ID: " << studentid << endl;
            cout << "Student Name: " << getName() << endl;
        }
        /*Overriding*/
        void ShowName(){
            cout << "Name: " << getName() << endl;
        }
};

int main(void){
    Student student(1, "박찬건");
    student.ShowName();
    student.ShowTemp();//다중 상속
    return 0;
}