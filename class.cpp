#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name;
        int englishscore;
        int mathscore;
        int getSum(){ return englishscore + mathscore; }//���� ����
    
    public:
        Student(string name, int englishscore, int mathscore){
            this->name = name;//�ڱ� �ڽ��� ��� ������ ����
            this->englishscore = englishscore;
            this->mathscore = mathscore;
            
        }
        void Show(){
            cout << name << " : [�հ� " << getSum() << "��]" << endl;
        }
};

int main(void){
    Student student = Student("������", 100, 98);
    student.Show();
    return 0;
}