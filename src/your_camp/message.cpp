#include "your_camp/message.hpp"

namespace your_camp {

    constexpr size_t message_limit = 1500;

    bool Message::ok() const noexcept
    {
        return this->content.size() <= message_limit;
    }
}

