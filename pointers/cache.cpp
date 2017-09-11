#include "cache.hpp"


CacheImpl::CacheImpl(Cache& c) : c(c), p(*this) {}


Cache&
CacheImpl::CacheImpl::getCache()
{
    return c;
}

Pool&
CacheImpl::getPool()
{
    return p;
}


int
CacheImpl::CacheImpl::doSomething()
{
    return 1;
}


Cache::Cache()
    : i(new CacheImpl(*this))
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
    return i->getPool();
}
