#include <stdio.h>

/* 아스키 코드
    0~9 = 48~57
    'A'~'Z' = 65~90
    'a'~'z' = 97~122
    줄바꿈이나 공백도 아스키 코드로 관리.
*/
/*
    문자열 처리시 버퍼의 개념 많이 사용.
    문자열 전체 동시 출력 X / 한 글자씩 출력.
    Buffer = 임시적으로 특정한 데이터 저장을 위해 사용.
    컴퓨터가 한번에 처리 가능한 양은 한정적이므로 Buffer에 담아서 처리.

*/
void character01(){
    char x = 122;
    printf("%c\n", x);
}

void character02(){
    char x = getchar();//문자 여러개 입력 시 첫 문자만 출력.
    printf("%c\n", x);
}

void buffer(){
    int num; char ch;
    scanf("%d", &num);
    printf("%d\n", num);
    int temp;
    //while문 반복 동안 파일의 끝 or 개행 문자일 시 입력 중지 --> 버퍼 비움.
    while((temp = getchar()) != EOF && temp != '\n') {}
    scanf("%c", &ch);
    printf("%c\n", ch);
}
void main(){
    //character01();
    //character02();
    buffer();
}
