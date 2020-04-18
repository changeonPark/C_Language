#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void print(){
    char s[20] = "file test";
    FILE *fp = fopen("temp.txt", "w");
    fprintf(fp, "%s\n", s);
    fclose(fp);
}


void main(){
    print();
}