#include <iostream>

// クラス宣言部

#define SIZE 10

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
  stack s1, s2; // スタックを作成する
  int i;

  // スタックを初期化する
  s1.init();
  s2.init();

  s1.push('o');
  s1.push('l');
  s1.push('l');
  s1.push('e');
  s1.push('H');
  s2.push('d');
  s2.push('l');
  s2.push('r');
  s2.push('o');
  s2.push('W');

  for (i = 0; i < 5; i++)
  {
    std::cout << "s1をポップする: " << s1.pop() << std::endl;
  }
  for (i = 0; i < 5; i++)
  {
    std::cout << "s2をポップする: " << s2.pop() << std::endl;
  }

  return 0;
}
