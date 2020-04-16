#include <stdio.h>

/* 아스키 코드
    0~9 = 48~57
    'A'~'Z' = 65~90
    'a'~'z' = 97~122
*/
/*
    문자열 처리시 버퍼의 개념 많이 사용.
    Buffer = 임시적으로 특정한 데이터 저장을 위해 사용.
*/
void character01(){
    char x = 122;
    printf("%c\n", x);
}

void character02(){
    char x = getchar();//문자 여러개 입력 시 첫 문자만 출력.
    printf("%c\n", x);
}

void main(){
    character01();
    character02();

}
