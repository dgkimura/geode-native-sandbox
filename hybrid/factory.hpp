#pragma once
#include <memory>

#include "cache.hpp"

class Factory
{
public:
    static Cache create();
};
