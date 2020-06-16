/*다형성*/
#include <iostream>

using namespace std;
/*정적 바인딩(Static Binding)
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
/*동적 바인딩(Dynamic Binding) -- 가상 함수 사용(Virtual Function)
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
/*추상 클래스(Abstract Class) - 순수 가상 함수(Pure Virtual Function)*/
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