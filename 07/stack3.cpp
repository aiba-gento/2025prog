#include <iostream>

// クラス宣言部

#define SIZE 15

// 文字を保存するstackクラスを宣言する
class stack
{
  char stck[SIZE]; // スタック領域を確保する
  int tos;         // スタック先頭の索引
public:
  void init();        // スタックを初期化する
  void push(char ch); // スタックに文字をプッシュする
  char pop();         // スタックから文字をポップする
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
  if (tos == SIZE)
  {
    std::cout << "スタックは一杯です";
    return;
  }
  stck[tos] = ch;
  tos++;
}
// 文字をポップする
char stack::pop()
{
  if (tos == 0)
  {
    std::cout << "スタックは空です";
    return 0; // スタックが空の場合はヌルを返す
  }
  tos--;
  return stck[tos];
}

// クラス利用部

int main()
{
  stack s; // スタックを作成する
  int i;

  // スタックを初期化する
  s.init();

  s.push('o');
  s.push('y');
  s.push('u');
  s.push('s');
  s.push('e');
  s.push('d');
  s.push('3');
  s.push('k');
  s.push('c');
  s.push('a');
  s.push('t');
  s.push('s');

  for (i = 0; i < 12; i++)
    std::cout << "sをポップする: " << s.pop() << std::endl;
  return 0;
}
