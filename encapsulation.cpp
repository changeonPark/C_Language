/*ĸ��ȭ*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
//friend �Լ� ����
class Student{
    private:
        int studentid;
        string name;
    public:
        //��� ������
        Student(int studentid, string name): studentid(studentid), name(name){}
        //friend �Լ� ����Ͽ� 2���� �Ű� ���� 2�� ����
        friend Student operator +(Student &student, Student &other){
            return Student(student.studentid, student.name + "&" + other.name);
        }
        void ShowName(){
            cout << "Name: " << name << endl;
        }
};
//friend Ŭ���� ����
class Time{
    friend class Date; //DateŬ�������� Time Ŭ���� �̿� ����
    private:
        int hour, min, sec;
    public:
        void SetCurrentTime(){
            time_t currenttime = time(NULL);
            struct tm* tm = localtime(&currenttime);
            hour = tm->tm_hour;
            min = tm->tm_min;
            sec = tm->tm_sec;
        }
};

class Date{
    private:
        int year, month, day;
    public:
        Date(int year, int month, int day): year(year), month(month), day(day){}
        void Show(const Time &t){
            cout << "������ ��¥: " << year << "�� " << month << "�� " << day << "�� " << endl;
            cout << "���� �ð�: " << t.hour << ":" << t.min << ":" << t.sec << endl;
        }
};
/*���� ���(Static Member)*/
class Person{
    private:
        /*��� ���(Const Member)*/
        const int id;
        string name;
    public:
        static int count;
        Person(int id, string name): id(id), name(name){
            count++;
        }
        /*id�� const(���)�̹Ƿ� ���� �Ұ���
        void SetId(int id){
            this->id = id;
        }*/
};
int Person::count = 0; //Person class�� ���� �ȿ� �����ϴ� count ����� ���� 0���� �ʱ�ȭ
int main(void){
    /* friend �Լ�
    Student student(1, "������");
    Student result = student + student;
    result.ShowName();
    */
   /*friend Ŭ����
   Time time;
   time.SetCurrentTime();
   Date date = Date(2020, 06, 17);
   date.Show(time);
   */
    Person person1(1, "������");
    Person person2(2, "�����");
    Person person3(3, "������");
    Person person4(4, "������");
    cout << "��� ��: " << Person::count << endl;
    return 0;
} 