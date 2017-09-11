#include "cache.hpp"
#include "pool.hpp"


Pool::Pool(CacheImpl& i) : i(i) {}


Cache
Pool::getCache()
{
    return i.getCache();
}
