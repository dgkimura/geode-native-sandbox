#include "factory.hpp"

Cache
Factory::create()
{
    auto impl = std::make_shared<CacheImpl>();

    // RVO prevents copy constructor call here...
    return Cache(impl);
}
