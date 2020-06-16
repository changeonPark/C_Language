/*템플릿(Template)*/
#include <iostream>
#include <string>

using namespace std;

/*
template <typename Type>

void Change(Type &x, Type &y){
    Type temp;
    temp = x;
    x = y;
    y = temp;
}*/

/*명시적 특수화(Explicit Specialization)
template <>
void Change<int>(int &x, int &y){
    cout << "정수형 데이터를 바꿉니다.\n";
    int temp;
    temp = x;
    x = y;
    y = temp;
}
*/

/*클래스 템플릿(Class Template)
template <typename Type>

class Data{
    private:
        Type data;
    public:
        Data(Type data): data(data) {}
        void setData(Type data) {
            this->data = data;
        }
        Type getData() {
            return data;
        }
};
*/
/*클래스 템플릿(Class Template) 인수*/
template <typename Type = int>

class Data{
    private:
        Type data;
    public:
        Data(Type data): data(data) {}
        /*void setData(Type data) {
            this->data = data;
        }*/
        Type getData() {
            return data;
        }
};
int main(void){
    /*
    string x = "박찬건";
    string y = "박찬용";
    Change(x, y);
    int a = 5;
    int b = 7;
    Change(a, b);
    cout << a << " : " << b << endl;
    cout << x << " : " << y << endl;
    */
    Data<> data1(1);
    Data<string> data2("박찬건");
    cout << data1.getData() << ":" << data2.getData() << endl;

    return 0;
}