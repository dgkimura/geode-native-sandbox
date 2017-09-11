#include <iostream>
#include "factory.hpp"

int
main()
{
    auto c = Factory::create();

    std::cout << "c.doSomething() " << c.doSomething() << std::endl;
    std::cout << "c.getPool().getCache().doSomething() "
              << c.getPool().getCache().doSomething() << std::endl;

    auto cptr = std::make_shared<Cache>(Factory::create());
    std::cout << "cptr->doSomething() " << cptr->doSomething() << std::endl;
    std::cout << "cptr->getPool().getCache().doSomething() "
              << cptr->getPool().getCache().doSomething() << std::endl;
}
