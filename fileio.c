#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Family{
    char name[20];
    int birth;
};

void famFunc(){
    int num, sum = 0;
    FILE *fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &num);
    struct Family *fam = malloc(sizeof(fam) * num);
    for(int i = 0; i < num; i++){
        fscanf(fp, "%s %d", &((fam + i)->name), &((fam + i)->birth) ); 
    }
    free(fam);
    fclose(fp);
    for(int i = 0; i < num; i++){
        sum += (fam + i)->birth; 
    }
    printf("average = %.2f\n", (double)sum / num);
}


void print(){
    char s[20] = "file test";
    FILE *fp = fopen("temp.txt", "w");
    fprintf(fp, "%s\n", s);
    fclose(fp);
}


void main(){
    famFunc();
}