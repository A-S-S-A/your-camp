#include "your_camp/soldier.hpp"

#include <map>

namespace your_camp {

    namespace {

        const std::map<const std::string, const std::string> status_table = {
            {"훈련병", "0000490001"},
            {"병사", "0000490002"},
            {"장교", "0000490003"},
            {"부사관", "0000490004"},
            {"군무원", "0000490005"}
        };

        const std::map<const std::string, const std::string> branch_table = {
            {"육군", "0000010001"},
            {"해군", "0000010002"},
            {"공군", "0000010003"},
            {"해병대", "0000010004"}
        };

        const std::map<const std::string, const std::string> unit_table = {
            {"1사단", "20121290100"},
            {"2사단", "20121490100"},
            {"3사단", "20121590100"},
            {"5사단", "20121690200"},
            {"6사단", "20121590200"},
            {"7사단", "20121390100"},
            {"9사단", "20121290200"},
            {"11사단", "20121790300"},
            {"12사단", "20121490200"},
            {"15사단", "20121390200"},
            {"17사단", "20121190100"},
            {"20사단", "20121790400"},
            {"21사단", "20121490300"},
            {"22사단", "20121890100"},
            {"23사단", "20121890200"},
            {"25사단", "20121290300"},
            {"27사단", "20121390300"},
            {"28사단", "20121690100"},
            {"30사단", "20121290400"},
            {"31사단", "20220280100"},
            {"32사단", "20220280200"},
            {"35사단", "20220280300"},
            {"36사단", "20120180100"},
            {"37사단", "20220280400"},
            {"39사단", "20220280500"},
            {"50사단", "20220280600"},
            {"51사단", "20121190200"},
            {"53사단", "20220280700"},
            {"육군훈련소", "20020191700"},
            {"육군훈련소(23연대)", "20020191800"},
            {"육군훈련소(25연대)", "20020191900"},
            {"육군훈련소(26연대)", "20020192000"},
            {"육군훈련소(27연대)", "20020192100"},
            {"육군훈련소(28연대)", "20020192200"},
            {"육군훈련소(29연대)", "20020192300"},
            {"육군훈련소(30연대)", "20020192400"}
        };
    }

    bool Soldier::ok() const noexcept
    {
        return unit_table.count(this->unit);
    }
}

