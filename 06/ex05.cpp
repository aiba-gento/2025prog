#include <iostream>
#include <vector>

// ハート形の表示
std::vector<std::string> heart_shape = {
    "    ******      ******    ",
    "  **********  **********  ",
    "**************************",
    "**************************",
    "  **********************  ",
    "    ******************    ",
    "      **************      ",
    "        **********        ",
    "          ******          ",
    "            **            "};

int main(int argc, char const *argv[])
{
    for (const auto &line : heart_shape)
    {
        std::cout << line << std::endl;
    }
    return 0;
}
