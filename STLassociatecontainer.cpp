/*C++ STL 연관 컨테이너*/
#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

/*Set(집합)*/
void Set(){
  int array[5] = {2, 4, 6, 8, 10};
  set<int> s(array, array+5);//array 배열의 5개의 인자로 초기화 하겠다.
  set<int>::iterator iter = s.begin();

  for(; iter != s.end(); iter++){
    cout << *iter << " ";
  }
  cout << endl;
  //값 추가
  s.insert(1);
  s.insert(3);
  s.insert(5);
  s.insert(7);
  s.insert(9);
  //iter 초기화
  iter = s.begin();

  for(; iter != s.end(); iter++){
    cout << *iter << " ";
  }
  cout << endl;
}

/*Map*/
void Map(){
  map<string, int> m;
  m["박찬건"] = 97;
  m["김옥주"] = 71;
  m["박정서"] = 64;

  map<string, int>::iterator iter = m.begin();

  for(; iter != m.end(); iter++){
    cout << iter->first << " : " << iter->second << endl;
  }

  m["박찬용"] = 05;
  cout << m["No Name"] << endl;

  iter = m.begin();

  for(; iter != m.end(); iter++){
    cout << iter->first << " : " << iter->second << endl;
  }
}
int main(void){
  Set();
  Map();
  return 0;
}