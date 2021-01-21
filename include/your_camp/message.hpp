#ifndef YOUR_CAMP_MESSAGE_HPP_INCLUDED
#define YOUR_CAMP_MESSAGE_HPP_INCLUDED

#include "soldier.hpp"

#include <string>

namespace your_camp {

/**
 * Represents a message for a soldier.
 */
struct Message {
    const std::string title;
    const std::string content;
    const Soldier recipient;

    bool ok() const noexcept;
};

}

#endif

