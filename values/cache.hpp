#pragma once
#include <memory>

#include "pool.hpp"

class CacheImpl : public std::enable_shared_from_this<CacheImpl>
{
public:
    CacheImpl();

    Cache getCache();

    int doSomething();

    Pool& getPool();

private:

    Pool p;
};


class Cache
{
private:

    std::shared_ptr<CacheImpl> i;

public:

    Cache(std::shared_ptr<CacheImpl> i);

    int doSomething();

    Pool& getPool();
};
