#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name;
        int englishscore;
        int mathscore;
        int getSum(){ return englishscore + mathscore; }//정보 은닉
    
    public:
        Student(string name, int englishscore, int mathscore){
            this->name = name;//자기 자신의 멤버 변수에 접근
            this->englishscore = englishscore;
            this->mathscore = mathscore;
            
        }
        void Show(){
            cout << name << " : [합계 " << getSum() << "점]" << endl;
        }
};

int main(void){
    Student student = Student("박찬건", 100, 98);
    student.Show();
    return 0;
}