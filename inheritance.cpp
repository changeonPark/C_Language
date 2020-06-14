#include <iostream>
#include <string>

using namespace std;
//�θ� Ŭ���� ����
class Temp{
    public:
        void ShowTemp(){
            cout << "�ӽ� �θ� Ŭ����\n";
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
//�ڽ� Ŭ���� ����
class Student: Person, public Temp{
    private:
        int studentid;
        //��� ���� name�� �θ�κ���(Person) ��������.
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
    Student student(1, "������");
    student.ShowName();
    student.ShowTemp();//���� ���
    return 0;
}