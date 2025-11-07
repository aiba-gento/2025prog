#include <iostream>

int main(){
    for(int i=0; i<5; ++i){
        int a, b, op, result;

        std::cout << "dai 1kou > " << std::flush;
        std::cin >> a;
        std::cout << "dai 2kou > " << std::flush;
        std::cin >> b;
        std::cout << "1: add, 2:sub, 3:multi, 4:div > " << std::flush;
        std::cin >> op;

        if(op == 1){
            result = a + b;
        } else if(op == 2){
            result = a - b;
        } else if(op == 3){
            result = a * b;
        } else if(op == 4){
            result = a / b;
        } else {
            std::cout << "そんな選択肢はない！" << std::endl;
            continue;
        }
        std::cout << "Result is ... " << result << std::endl;
    }
}
