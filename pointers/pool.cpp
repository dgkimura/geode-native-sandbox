#include "cache.hpp"
#include "pool.hpp"


Pool::Pool(std::shared_ptr<CacheImpl> i) : i(i) {}


Cache&
Pool::getCache()
{
    return i->getCache();
}
