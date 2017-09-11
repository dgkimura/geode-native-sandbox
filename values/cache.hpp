#pragma once
#include <memory>

#include "pool.hpp"

class CacheImpl : public std::enable_shared_from_this<CacheImpl>
{
public:
    Cache getCache();

    int doSomething();

private:
};


class Cache
{
private:

    std::shared_ptr<CacheImpl> i;

    Pool p;

public:

    Cache(std::shared_ptr<CacheImpl> i);

    int doSomething();

    Pool& getPool();
};
