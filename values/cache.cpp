#include "cache.hpp"

CacheImpl::CacheImpl()
    : p(*this)
{
}

Cache
CacheImpl::getCache()
{
    // RVO prevents copy constructor call here...

    // We do pay the cost of allocating out a Cache object, which is
    // sizeof(std::shared_ptr<Cache>)
    return Cache(shared_from_this());
}


int
CacheImpl::doSomething()
{
    return 1;
}

Pool&
CacheImpl::getPool()
{
    return p;
}


Cache::Cache(std::shared_ptr<CacheImpl> i)
    : i(i)
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
