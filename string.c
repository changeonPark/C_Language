#include <stdio.h>
#include <string.h>
/*
���ڿ� = ���ڵ��� �迭
���ڿ��� ��ǻ�� �޸� ������ �������� null(\0) ����.
���ڿ� ������ ���� �����Ϳ� ���ڿ��� �ּ� ����.
������ ���ڿ��� �б� �����̹Ƿ� ���α׷� ���� �� ���� �Ұ�.
�̷��� ó���� ���ڿ� == ���ڿ� ���ͷ�<<<
���ڿ��� �ٲ�� �� ��� > �����Ͱ� ����Ű�� ���ڿ��� ����.
*/

void exstr(){
    //�迭�� ����. string���� ��ü�� ������ó�� ��� ��.
    char *string = "string test.";
    printf("%c\n", string[0]);
    printf("%c\n", string[5]);
    printf("%c\n", string[2]);
    printf("%s\n", string);
}

void exstr02(){
//gets() �Լ��� ���� ���� �� �� �Է� ���� <> scanf() �Լ��� ���� ������ �Է� ����.
    char str[100];
    gets(str);
    printf("%s\n", str);
}

/*void exstr03(){
//gets_s �Լ��� ������ ũ�⸦ ��Ŵ. ������ ũ�� �̻����� �Է� ���� �� ���α׷� ����.
//vs code���� gets_s ��� �ȵ�.
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
    //strstr() = �� ���ڿ����� ª�� ���ڿ��� ��ġ�� ��ȯ.
    //�ּҰ� ��ü�� ��ȯ > ã�� ������ ��� ���ڿ� ��ȯ.
    printf("Searching�̾߾� string is %s\n", strstr(str1, str3));
}

void main(){
    //exstr();
    //exstr02();
    exstr03();

}