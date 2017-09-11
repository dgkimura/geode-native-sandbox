#include "cache.hpp"


Cache
CacheImpl::CacheImpl::getCache()
{
    // RVO prevents copy constructor call here...

    // We do pay the cost of allocating out a Cache object, which is
    // sizeof(std::shared_ptr<Cache>)
    return Cache(shared_from_this());
}


int
CacheImpl::CacheImpl::doSomething()
{
    return 1;
}


Cache::Cache(std::shared_ptr<CacheImpl> i)
    : i(i), p(i)
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
