#pragma once

class Cache;
class CacheImpl;

class Pool
{
public:

    Pool(std::shared_ptr<CacheImpl> i);

    Cache& getCache();

private:
    std::shared_ptr<CacheImpl> i;
};
