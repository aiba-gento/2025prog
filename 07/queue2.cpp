#include <iostream>

// クラス宣言部

#define SIZE 10

// 文字を保存するqueueクラスを宣言する
class queue
{
  int que[SIZE]; // キュー領域を確保する
  int tos;       // キュー先頭の索引
public:
  void init();        // キューを初期化する
  void put(int item); // キュー数字をエンキューする
  int get();          // キューから数字をデキューする
};

// クラス実現部

// スタックを初期化する
void queue::init()
{
  tos = 0;
}

// 数字をエンキューする
void queue::put(int item)
{
  if (tos == SIZE)
  {
    std::cout << "キューは一杯です";
    return;
  }
  que[tos] = item;
  ++tos;
}
// 数字をデキューする
int queue::get()
{
  if (tos == 0)
  {
    std::cout << "キューは空です";
    return 0; // キューが空の場合はヌルを返す
  }
  int t = que[0];
  int i;
  --tos;
  for (i = 0; i < tos; ++i)
    que[i] = que[i + 1];
  return t;
}

// クラス利用部

int main()
{
  queue q1, q2; // キューを作成する
  int i;

  // キューを初期化する
  q1.init();
  q2.init();

  q1.put(1);
  q1.put(2);
  q1.put(3);
  q1.put(4);
  q1.put(5);
  q2.put(6);
  q2.put(7);
  q2.put(8);
  q2.put(9);
  q2.put(10);

  for (i = 0; i < 5; i++)
  {
    std::cout << "q1をデキューする: " << q1.get() << std::endl;
  }

  for (i = 0; i < 5; i++)
  {
    std::cout << "q2をデキューする: " << q2.get() << std::endl;
  }

  return 0;
}
