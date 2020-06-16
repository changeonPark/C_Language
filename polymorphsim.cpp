/*������*/
#include <iostream>

using namespace std;
/*���� ���ε�(Static Binding)
class A{
    public:
        void Show(){
            cout << "It`s A Class" << endl;
        }
};
//Overriding
class B: public A{
    void Show(){
        cout << "It`s B Class" << endl;
    }
};
*/
/*���� ���ε�(Dynamic Binding) -- ���� �Լ� ���(Virtual Function)
class A{
    public:
       virtual void Show(){
            cout << "It`s A Class" << endl;
        }
};
//Overriding
class B: public A{
   virtual void Show(){
        cout << "It`s B Class" << endl;
    }
};
*/
/*�߻� Ŭ����(Abstract Class) - ���� ���� �Լ�(Pure Virtual Function)*/
class A{
    public:
        virtual void Show()=0; /*{
            cout << "It`s A Class" << endl;
        }*/
};
//Overriding
class B: public A{
    virtual void Show(){
        cout << "It`s B Class" << endl;
    }
};

int main(void){
    A* p;
    //A a;
    B b;
    //p = &a; p->Show();
    p = &b; p->Show();

    return 0;
}