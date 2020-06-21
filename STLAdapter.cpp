#include <iostream>
#include <stack>
#include <queue>

using namespace std;

/*Stack*/
void Stack(){
  stack<int> stack;
  stack.push(7); stack.push(5); stack.pop(); stack.push(1); stack.push(9); stack.pop();
  while (!stack.empty()){
    cout << stack.top() << " ";
    stack.pop();
  }
}
/*Queue*/
void Queue(){
  queue<int> queue;
  queue.push(5); queue.push(7); queue.pop(); queue.push(1); queue.push(9); queue.pop();
  cout << queue.back() << endl;
  while(!queue.empty()){
    cout << queue.front() << " ";
    queue.pop();
  }
}
/*Priority_Queue*/
void Priority_Queue(){
  int number, count;
  cout << "입력받을 개수를 입력하세요: ";
  cin >> count;
  priority_queue<int> priority;
  for(int i = 0; i < count; i++){
    cin >> number;
    priority.push(number);
  }
  while(!priority.empty()){
    cout << priority.top() << " ";
    priority.pop();
  }
}
int main(void){
  //Stack();
  //Queue();
  Priority_Queue();
  return 0;
}