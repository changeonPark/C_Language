/*C++ 순차 컨테이너*/
#include <iostream>
#include <deque>
#include <vector>

using namespace std;

/*Deque*/
void Deque(){
  deque<int> queue;
  queue.push_front(3); queue.push_back(7); queue.pop_front(); queue.push_front(4);
  for(int i = 0; i < queue.size(); i++){
    cout << queue[i] << " ";
  }
  cout << endl;
  deque<int>::iterator iter;
  iter = queue.begin();
  queue.insert(iter + 1, 3, 5);
  //iter = queue.begin();
  queue.insert(iter + 1, 1, 9);
  for(int i = 0; i < queue.size(); i++){
    cout << queue[i] << " ";
  }
  cout << endl;
  queue.clear();
  cout << queue.empty() << endl;
}
/*Vector*/
void Vector(){
  vector<int> test;
  test.push_back(3); test.push_back(5); test.push_back(8);
  for(int i = 0; i < test.size(); i++){
    cout << test[i] << " ";
  }
  cout << endl;
  vector<int>::iterator iter;
  iter = test.begin();
  test.insert(iter + 1, 3, 7);
  for(int i = 0; i < test.size(); i++){
    cout << test[i] << " ";
  }
  cout << endl;
  test.clear();
  cout << test.empty();
}

int main(void){
  //Deque();
  Vector();
  return 0;
}