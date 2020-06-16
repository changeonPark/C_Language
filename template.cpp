/*���ø�(Template)*/
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

/*����� Ư��ȭ(Explicit Specialization)
template <>
void Change<int>(int &x, int &y){
    cout << "������ �����͸� �ٲߴϴ�.\n";
    int temp;
    temp = x;
    x = y;
    y = temp;
}
*/

/*Ŭ���� ���ø�(Class Template)
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
/*Ŭ���� ���ø�(Class Template) �μ�*/
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
    string x = "������";
    string y = "������";
    Change(x, y);
    int a = 5;
    int b = 7;
    Change(a, b);
    cout << a << " : " << b << endl;
    cout << x << " : " << y << endl;
    */
    Data<> data1(1);
    Data<string> data2("������");
    cout << data1.getData() << ":" << data2.getData() << endl;

    return 0;
}