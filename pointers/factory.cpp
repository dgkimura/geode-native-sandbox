#include "factory.hpp"

std::shared_ptr<Cache>
Factory::create()
{
    return std::make_shared<Cache>();
}
