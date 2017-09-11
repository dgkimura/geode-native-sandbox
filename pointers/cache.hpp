#pragma once
#include <memory>

#include "pool.hpp"

class CacheImpl
{
public:
    CacheImpl(Cache& c);

    Cache& getCache();

    int doSomething();

    Pool& getPool();

private:

    Cache& c;

    Pool p;
};


class Cache
{
private:

    std::unique_ptr<CacheImpl> i;

public:

    Cache();

    int doSomething();

    Pool& getPool();
};
