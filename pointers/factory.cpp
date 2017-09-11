#include "factory.hpp"

std::shared_ptr<Cache>
Factory::create()
{
    // This cannot return raw object because it's possible on a copy for the
    // CacheImpl::c& to get out of sync with corresponding Cache object.
    return std::make_shared<Cache>();
}
