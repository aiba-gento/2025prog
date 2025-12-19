#include <iostream>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <random>

const int SIZE = 10;

int main(){
    std::random_device rd; //乱数発生
    std::mt19937 mt(rd());

    for(int t = 0; t < 50; ++t){
        for(int i = 0; i < SIZE; ++i){
            for(int j = 0; j < SIZE; ++j){
                std::cout << ((mt() % 2) ? '.' : ' '); //条件演算子（三項演算子）
            }
            std::cout << std::endl;
        }
        printf("\033[%dA", SIZE); //カーソルを10行分上に上げてアニメーションもどき
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        //待ち時間調整
    }
    return 0;
}
