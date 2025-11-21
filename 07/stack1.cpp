#include <iostream>

// クラス宣言部

#define SIZE 10

// 文字を保存するstackクラスを宣言する
class stack {
  char stck[SIZE]; // スタック領域を確保する
  int tos; // スタック先頭の索引
public:
  void init(); // スタックを初期化する
  void push(char ch); // スタックに文字をプッシュする
  char pop(); // スタックから文字をポップする
};

// クラス実現部

// スタックを初期化する
void stack::init()
{
  tos = 0;
}

// 文字をプッシュする
void stack::push(char ch)
{
  if(tos==SIZE) {
    std::cout << "スタックは一杯です";
    return;
  }
  stck[tos] = ch;
  tos++;
}
// 文字をポップする
char stack::pop()
{
  if(tos==0) {
    std::cout << "スタックは空です";
    return 0; // スタックが空の場合はヌルを返す
  }
  tos--;
  return stck[tos];
}

// クラス利用部

int main(){
  stack s1;  // スタックを作成する
  int i;
  
  // スタックを初期化する
  s1.init();
  
  std::cout << "s1にa,b,cの順にプッシュ" << std::endl;
  
  s1.push('a');
  s1.push('b');
  s1.push('c');
  
  for(i=0; i<3; i++) {std::cout << "s1をポップする: " << s1.pop() << std::endl;}
  
  return 0;
}
