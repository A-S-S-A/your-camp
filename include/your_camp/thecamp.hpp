#ifndef YOUR_CAMP_THECAMP_HPP_INCLUDED
#define YOUR_CAMP_THECAMP_HPP_INCLUDED

#include "soldier.hpp"

namespace your_camp {

/**
 * Represents a connection to The Camp service.
 */
class TheCamp {
public:
    TheCamp(std::string id, std::string password);
    ~TheCamp() = default;

private:
};

}

#endif

