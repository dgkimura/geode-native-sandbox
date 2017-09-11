#include "cache.hpp"


CacheImpl::CacheImpl(Cache& c) : c(c) {}


Cache&
CacheImpl::CacheImpl::getCache()
{
    return c;
}


int
CacheImpl::CacheImpl::doSomething()
{
    return 1;
}


Cache::Cache()
    : i(std::make_shared<CacheImpl>(*this)), p(i)
{
}

int
Cache::doSomething()
{
    return i->doSomething();
}

Pool&
Cache::getPool()
{
    return p;
}
