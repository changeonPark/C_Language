/*������*/
#include <iostream>

using namespace std;
class Character{
    private:
        string name;
        int rage;
        int hp;
        int damage;
    public:
        /* �Ϲ��� ������
        Character(string name, int hp, int damage){
            this->name = name;
            this->rage = 0;
            this->hp = hp;
            this->damage = damage;
        }
        */
       //��� ����
       Character(string name, int hp, int damage): name(name), rage(0), hp(hp), damage(damage) { }
       /*���� ������*/
       Character(const Character& copy){
           name = copy.name;
           rage = copy.rage;
           hp = copy.hp;
           damage = copy.damage;
       }
       /*�Ҹ���*/
       ~Character(){
           cout << "��ü �Ҹ�" << endl;
       }
       void PointUp() {
           rage++;
       }
        void Show(){
            cout << name << " [ " << rage << " ] " << hp << " " << damage << " " << endl;
        }
};

int main(void){
    /*�Ϲ� ������ ���� ����
    Character character = Character("������", 10, 20);
    */
    Character* character1 = new Character("������", 10, 20);
    character1->PointUp();
    Character character2(*character1);
    character2.PointUp();
    character1->Show();
    character2.Show();

    delete character1;
    //�����Ҵ��� �ƴ� ��� �����Ϸ��� ��ü �Ҹ� ������
    return 0;
}