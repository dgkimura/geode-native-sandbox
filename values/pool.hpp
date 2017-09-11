#pragma once

class Cache;
class CacheImpl;

class Pool
{
public:

    Pool(CacheImpl& i);

    Cache getCache();

private:
    CacheImpl& i;
};
