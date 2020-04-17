#include <stdio.h>
/*
    컴퓨터에서 프로그램이 실행되기 위해선 프로그램이 메모리에 적재 되어야 함.(Load)
    / 코드 영역 / 데이터 영역 /    힙 영역   / 스택 영역 /
      소스 코드    전역 변수   동적 할당 변수  지역 변수
                   정적 변수                 매개 변수
*/
int glo_val = 5;
void GloVal(){
/*  전역 변수(Global Variable): 프로그램 어디서든 접근 가능한 변수
    main()함수 실행 전 메모리에 할당.
    프로그램 크기 up -> 프로그램 복잡 up.
*/
    glo_val = 10;
    printf("%d\n", glo_val);
}

void LocVal(){
/*  지역 변수(Local Variable): 프로그램에서 특정한 블록(Block)에만 접근할 수 있음.
    함수가 실행될 때마다 메모리에 할당 -> 함수 종료 시 해제.
*/
    int num = 1;
    if(1){
        int num = 5;
    }
    printf("%d\n", num);
}

void StaticVal(){
/*
    정적 변수(Static Variable): 특정 블록에서만 접근할 수 있는 변수.
    프로그램 실행 시 메모리에 할당 -> 프로그램 종료 시 메모리에서 해제
*/
    static int staNum = 97;
    staNum += 1;
    printf("%d\n", staNum);
}

void RegiVal(){
/*
    레지스터 변수(Register Variable): CPU의 레지스터를 사용하는 변수, 속도적으로 유리할 수 있음.
    레지스터는 한정되어 있음 --> 실제로 레지스터에서 처리 안될 수도 있음.(컴파일러가 담당)
*/
    register int regiNum = 10, i;
    for(i = 0; i < regiNum; i++){
        printf("%d\n", i);
    }
}
/*
    함수의 매개변수 처리
        1) 함수를 호출할 때 함수에 필요한 데이터를 매개변수로 전달.
        2) 전달 방식 - 값에 의한 전달, 참조에 의한 전달.
        3) 값에 의한 전달 방식: 값을 전달 - 함수 내에서 새로운 변수 생성. (지역 변수와 비슷)
        4) 참조에 의한 전달 방식: 주소 전달 - 원래의 변수 자체에 접근 가능. (전역 변수와 비슷) -- Pointer
*/

void Add(int x, int y){
    x += y;
}

void AddPoint(int *x){
    *x += 10;
}
void main(){
    int x = 6;
    Add(x, 10);
    //AddPoint(&x);
    printf("%d\n", x);
    StaticVal();
    StaticVal();
    StaticVal();
}