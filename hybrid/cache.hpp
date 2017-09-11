#pragma once
#include <memory>

#include "pool.hpp"

class CacheImpl
{
public:
    CacheImpl(Cache* c);

    Cache& getCache();

    int doSomething();

    Pool& getPool();

private:

    Cache* c;

    Pool p;

    friend Cache;
};


class Cache
{
private:

    std::unique_ptr<CacheImpl> i;

public:

    Cache();

    Cache(Cache& other) = delete;

    Cache(Cache&& other);

    Cache& operator=(Cache&& other);

    int doSomething();

    Pool& getPool();
};
