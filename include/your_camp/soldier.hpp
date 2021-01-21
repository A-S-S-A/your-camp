#ifndef YOUR_CAMP_SOLDIER_HPP_INCLUDED
#define YOUR_CAMP_SOLIDER_HPP_INCLUDED

#include <ctime>
#include <string>

namespace your_camp {

    /**
     * Represents a soldier in The Camp database.
     */
    struct Soldier {
        /**
         * Current status of the soldier.
         *
         * Available values for this field are:
         * | Values | Meaning |
         * | ------ | ------- |
         * | 훈련병 | trainee |
         * | 병사   | soldier |
         */
        const std::string status;

        /**
         * Military branch that the soldier is enrolled to.
         */
        const std::string branch;

        /**
         * Name of the soldier.
         */
        const std::string name;

        /**
         * Birthday of the soldier.
         */
        const std::tm birthday;

        /**
         * Division that the soldier is registered in.
         */
        const std::string unit;

        /**
         * Date of enlistment of the soldier.
         */
        const std::tm enlistment_date;

        /**
         * Relationship of the user to the soldier.
         */
        const std::string relationship;

        /**
         * Verifies the stored information about the soldier.
         */
        bool ok() const noexcept;

        /**
         * Converts the human-readable branch name to the ID string.
         *
         * @return Unique ID string for the given branch name.
         */
        std::string branch_id() const;

        /**
         * Converts the human-readable unit name to the ID string.
         *
         * @return Unique ID string for the given unit name.
         */
        std::string unit_id() const;

        /**
         * Converts the human-readable relationship name to the ID string.
         *
         * @return Unique ID string for the given relationship name.
         */
        std::string relationship_id() const;
    };

}

#endif

