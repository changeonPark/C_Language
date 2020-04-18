#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stat
{
    int str;
    int dex;
    int intel;
    int luck;
};

struct Stat input(){
    struct Stat stat;
    stat.str = 10;
    stat.dex = 5;
    stat.intel = 4;
    stat.luck = 9;
    return stat;
}

void print(struct Stat stat){
    printf("%d %d %d %d\n", stat.str, stat.dex, stat.intel, stat.luck);
}

void main(){
    struct Stat stat = input();
    
    print(stat);
    
}
