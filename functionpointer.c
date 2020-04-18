#include <stdio.h>
/*
    함수 포인터: 특정한 함수의 반환 자료형을 지정하는 방식으로 선언 가능.
                > 형태가 같은 서로 다른 기능의 함수를 선택으로 사용 가능.
                ex) 반환 자로형(*이름)(매개변수) = 함수명;
*/

void func01(){
    printf("function01.\n");
}
void func02(){
    printf("function02.\n");
}

int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}

int (*process(char* a))(int, int){
    printf("%s", a);
    return add;
}


void funcPrint(){
    printf("%d\n", process("10 + 20 = ")(10, 20));

    void(*fp)() = func01;
    fp();
}


void main(){
    funcPrint();    
}