#include <iostream>
#define SIZE 100

using namespace std;

int* arr;

int main(void){
    arr = new int[SIZE];//���� �Ҵ�
    for(int i = 0; i < SIZE; i++){
        arr[i] = i;
    }
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << ' ';
    }
    delete arr;
    return 0;
}