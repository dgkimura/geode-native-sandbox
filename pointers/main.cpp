#include <iostream>
#include "factory.hpp"

int
main()
{
    // Create shared_ptr object
    auto c = Factory::create();

    std::cout << "c->doSomething() " << c->doSomething() << std::endl;
    std::cout << "c->getPool().getCache().doSomething() "
              << c->getPool().getCache().doSomething() << std::endl;
}
