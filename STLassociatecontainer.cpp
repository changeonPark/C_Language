/*C++ STL ���� �����̳�*/
#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

/*Set(����)*/
void Set(){
  int array[5] = {2, 4, 6, 8, 10};
  set<int> s(array, array+5);//array �迭�� 5���� ���ڷ� �ʱ�ȭ �ϰڴ�.
  set<int>::iterator iter = s.begin();

  for(; iter != s.end(); iter++){
    cout << *iter << " ";
  }
  cout << endl;
  //�� �߰�
  s.insert(1);
  s.insert(3);
  s.insert(5);
  s.insert(7);
  s.insert(9);
  //iter �ʱ�ȭ
  iter = s.begin();

  for(; iter != s.end(); iter++){
    cout << *iter << " ";
  }
  cout << endl;
}

/*Map*/
void Map(){
  map<string, int> m;
  m["������"] = 97;
  m["�����"] = 71;
  m["������"] = 64;

  map<string, int>::iterator iter = m.begin();

  for(; iter != m.end(); iter++){
    cout << iter->first << " : " << iter->second << endl;
  }

  m["������"] = 05;
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