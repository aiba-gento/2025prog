#include <iostream>
#include <string>

int main()
{
    std::string word1;
    char word2[11] = {};
    int wl, i;
    std::cout << "10 文字以下の英小文字の文字列: ";
    std::cin >> word1;
    wl = word1.size();
    for (i = 0; i < wl; i++)
    {
        if (word1.at(i) >= 'a' && word1.at(i) <= 'z')
        {
            word2[i] = word1.at(i) + 2;
            if (word2[i] > 'z')
            {
                word2[i] = word2[i] - 26;
            }
        }
        else
        {
            word2[i] = word1.at(i); // 非小文字の場合はそのままコピー
        }
    }
    std::cout << "暗号化後: " << word2 << std::endl;
}