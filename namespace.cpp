#include <iostream>
//A NameSpace 생성
namespace A{
    void function(){
        std::cout << "A NameSpace" << std::endl;
    }
}
//ㅠ NameSpace 생성
namespace B{
    void function(){
        std::cout << "B NameSpace" << std::endl;
    }
}

int main(void){
    A::function();//범위 지정 연산자(::)
    B::function();
    return 0;
}