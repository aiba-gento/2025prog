#include <iostream>
#include <stdio.h>
#include <time.h>

void hoge();

int main(){
    int i;
    int times=100;
    setbuf(stdout,NULL);
    std::cout << "(_ _ )";
    for(i=0;i<times;i++){
        hoge();     //時間を稼ぐための適当な処理
        if(i%(times/20)==times/20-1) std::cout << "z";
    }
    std::cout << "\n Wake Up!";
    std::cout << "\n w(`o`)w \n";
}
/* ↓時間を稼ぐための適当な処理をする関数 */
void hoge(){
    clock_t t;
    /* 時間待ち開始 */
    t = clock() + CLOCKS_PER_SEC/20;
    while(t>clock());
    /* 時間待ち終了 */
}
