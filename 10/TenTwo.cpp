#include <iostream>

namespace monster {
    enum MonsterType {
        orc,
        goblin,
        troll,
        ogre,
        skeleton
    };
}

int main()
{
    monster::MonsterType monst{ monster::orc };

    return 0;
}