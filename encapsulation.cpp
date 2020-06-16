/*캡슐화*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
//friend 함수 예제
class Student{
    private:
        int studentid;
        string name;
    public:
        //축약 생성자
        Student(int studentid, string name): studentid(studentid), name(name){}
        //friend 함수 사용하여 2개의 매개 변수 2개 받음
        friend Student operator +(Student &student, Student &other){
            return Student(student.studentid, student.name + "&" + other.name);
        }
        void ShowName(){
            cout << "Name: " << name << endl;
        }
};
//friend 클래스 예제
class Time{
    friend class Date; //Date클래스에서 Time 클래스 이용 가능
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
            cout << "지정된 날짜: " << year << "년 " << month << "월 " << day << "일 " << endl;
            cout << "현재 시간: " << t.hour << ":" << t.min << ":" << t.sec << endl;
        }
};
/*정적 멤버(Static Member)*/
class Person{
    private:
        /*상수 멤버(Const Member)*/
        const int id;
        string name;
    public:
        static int count;
        Person(int id, string name): id(id), name(name){
            count++;
        }
        /*id가 const(상수)이므로 수정 불가능
        void SetId(int id){
            this->id = id;
        }*/
};
int Person::count = 0; //Person class의 범위 안에 존재하는 count 멤버의 값을 0으로 초기화
int main(void){
    /* friend 함수
    Student student(1, "박찬건");
    Student result = student + student;
    result.ShowName();
    */
   /*friend 클래스
   Time time;
   time.SetCurrentTime();
   Date date = Date(2020, 06, 17);
   date.Show(time);
   */
    Person person1(1, "박찬건");
    Person person2(2, "김옥주");
    Person person3(3, "박정서");
    Person person4(4, "박찬용");
    cout << "사람 수: " << Person::count << endl;
    return 0;
} 