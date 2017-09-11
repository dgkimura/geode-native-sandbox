#include <iostream>
#include "factory.hpp"

int
main()
{
    // Create raw object
    auto c = Factory::create();

    std::cout << "c.doSomething() " << c.doSomething() << std::endl;
    std::cout << "c.getPool().getCache().doSomething() "
              << c.getPool().getCache().doSomething() << std::endl;


    // If user wants to wrap Cache in shared_ptr, then why not let them;
    // It's their object now, they can do what they want with it...
    auto cptr = std::make_shared<Cache>(Factory::create());
    std::cout << "cptr->doSomething() " << cptr->doSomething() << std::endl;
    std::cout << "cptr->getPool().getCache().doSomething() "
              << cptr->getPool().getCache().doSomething() << std::endl;
}
