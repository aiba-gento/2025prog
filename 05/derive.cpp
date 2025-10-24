#include <iostream>

class base_c
{
public:
    base_c()
    {
    }

    int funcA()
    {
        return 10;
    }
};

class derived_c : public base_c
{
public:
    derived_c()
    {
    }

    int funcB()
    {
        return 20;
    }
};

int main(int argc, char const *argv[])
{
    base_c *bc;
    bc = new base_c();
    derived_c *dc;
    dc = new derived_c();
    std::cout << "Base Class funcA =" << bc->funcA() << std::endl;
    std::cout << "Derived Class funcA =" << dc->funcA() << std::endl;
    std::cout << "Derived Class funcB =" << dc->funcB() << std::endl;
    delete bc;
    delete dc;
    return 0;
}
