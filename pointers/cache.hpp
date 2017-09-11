#pragma once
#include <memory>

#include "pool.hpp"

class CacheImpl
{
public:
    CacheImpl(Cache& c);

    Cache& getCache();

    int doSomething();

private:

    Cache& c;
};


class Cache
{
private:

    std::shared_ptr<CacheImpl> i;

    Pool p;

public:

    Cache();

    int doSomething();

    Pool& getPool();
};
