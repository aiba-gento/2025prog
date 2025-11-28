#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int i, l;
    char c;
    try
    {
        std::ifstream readfile(argv[1]);  // 入力ファイル名をコマンドから取得
        std::ofstream writefile(argv[2]); // 出力ファイル名をコマンドから取得
        std::string str;
        do
        {
            readfile >> str; // 開いたファイルから str にデータを 1 行読み込む
            l = str.size();  // 文字列の長さを取得
            for (i = 0; i < l; i++)
            {
                c = str.at(i);                   // i 番目の要素への参照を取得
                if (c > 64 && c < 91)            // 大文字なら
                    writefile << (char)(c + 32); // 小文字に変換して書き込む
                else
                    writefile << str.at(i);
                // str の i 番目のデータを書き込む
            }
        } while (readfile.eof()); // end of file
        readfile.close();  // 入力ファイルを閉じる
        writefile.close(); // 出力ファイルを閉じる
    }
    catch (int e)
    { // 例外処理...int 型をキャッチしたらエラー処理
        std::cerr << "Error!!" << std::endl;
    }
    return 0;
}