#include <iostream>
//A NameSpace ����
namespace A{
    void function(){
        std::cout << "A NameSpace" << std::endl;
    }
}
//�� NameSpace ����
namespace B{
    void function(){
        std::cout << "B NameSpace" << std::endl;
    }
}

int main(void){
    A::function();//���� ���� ������(::)
    B::function();
    return 0;
}