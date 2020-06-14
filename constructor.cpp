/*생성자*/
#include <iostream>

using namespace std;
class Character{
    private:
        string name;
        int rage;
        int hp;
        int damage;
    public:
        /* 일반적 생성자
        Character(string name, int hp, int damage){
            this->name = name;
            this->rage = 0;
            this->hp = hp;
            this->damage = damage;
        }
        */
       //축약 생성
       Character(string name, int hp, int damage): name(name), rage(0), hp(hp), damage(damage) { }
       /*복사 생성자*/
       Character(const Character& copy){
           name = copy.name;
           rage = copy.rage;
           hp = copy.hp;
           damage = copy.damage;
       }
       /*소멸자*/
       ~Character(){
           cout << "객체 소멸" << endl;
       }
       void PointUp() {
           rage++;
       }
        void Show(){
            cout << name << " [ " << rage << " ] " << hp << " " << damage << " " << endl;
        }
};

int main(void){
    /*일반 생성자 사용시 썻음
    Character character = Character("슬라임", 10, 20);
    */
    Character* character1 = new Character("슬라임", 10, 20);
    character1->PointUp();
    Character character2(*character1);
    character2.PointUp();
    character1->Show();
    character2.Show();

    delete character1;
    //동적할당이 아닌 경우 컴파일러가 객체 소멸 시켜줌
    return 0;
}