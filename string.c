#include <stdio.h>
#include <string.h>
/*
문자열 = 문자들의 배열
문자열은 컴퓨터 메모리 구조상 마지막에 null(\0) 포함.
문자열 포인터 사용시 포인터에 문자열의 주소 배정.
배정된 문자열은 읽기 전용이므로 프로그램 실행 중 변경 불가.
이렇게 처리된 문자열 == 문자열 리터럴<<<
문자열을 바꿔야 될 경우 > 포인터가 가리키는 문자열을 변경.
*/

void exstr(){
    //배열과 동일. string변수 자체가 포인터처럼 사용 됨.
    char *string = "string test.";
    printf("%c\n", string[0]);
    printf("%c\n", string[5]);
    printf("%c\n", string[2]);
    printf("%s\n", string);
}

void exstr02(){
//gets() 함수는 공백 포함 한 줄 입력 받음 <> scanf() 함수는 공백 전까지 입력 받음.
    char str[100];
    gets(str);
    printf("%s\n", str);
}

/*void exstr03(){
//gets_s 함수는 버퍼의 크기를 지킴. 지정된 크기 이상으로 입력 받을 시 프로그램 종료.
//vs code에선 gets_s 사용 안됨.
    char str[100];
    gets_s(str, sizeof(str));
    printf("%s\n", str);
}*/

void exstr03(){
    char str1[20] = "changeon Park";
    char str2[20] = "chanyong Park";
    char str3[20] = "geon";
    printf("String`s length = %d\n", strlen(str1));
    printf("cheking = %d\n", strcmp(str2, str1));
    //strcpy(str1, str2);
    //strcat(str1, str2);
    //printf("%s\n", str1);
    //strstr() = 긴 문자열에서 짧은 문자열의 위치를 반환.
    //주소값 자체를 반환 > 찾은 이후의 모든 문자열 반환.
    printf("Searching이야압 string is %s\n", strstr(str1, str3));
}

void main(){
    //exstr();
    //exstr02();
    exstr03();

}