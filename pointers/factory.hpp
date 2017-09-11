#pragma once
#include <memory>

#include "cache.hpp"

class Factory
{
public:
    static std::shared_ptr<Cache> create();
};
