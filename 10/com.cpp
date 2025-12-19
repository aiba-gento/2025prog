#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cout << "The number of parameters is different.\n";
        return 1;
    }
    std::ifstream readfile(argv[1]);
    // 入力した２番目の文字列（ファイル名）を指定してファイルオープン

    if (!readfile)
    {
        std::cout << "The file could not be opened.\n";
        return 1;
    }

    char ch;
    readfile.get(ch);

    while (!readfile.eof())
    {
        std::cout << ch;
        readfile.get(ch);
    }
    readfile.close();
    return 0;
}
