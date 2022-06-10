#include <iostream>
#include <string>

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giantSpider,
    slime
};  

struct Monster
{
    MonsterType type {};
    std::string name {};
    int health {};
};

void printMonster(const Monster& monster)
{
    std::cout << "This ";

    switch (monster.type)
    {
        case MonsterType::ogre:
            std::cout << "Ogre";
            break;
        case MonsterType::dragon:
            std::cout << "Dragon";
            break;
        case MonsterType::orc:
            std::cout << "Orc";
            break;
        case MonsterType::giantSpider:
            std::cout << "Giant Spider";
            break;
        case MonsterType::slime:
            std::cout << "Slime";
            break;
        
        default:
            std::cout << "Unknown";
    }

    std::cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster torg { MonsterType::ogre, "Torg", 145 };
    Monster blurp { MonsterType::slime, "Blurp", 23 };

    printMonster(torg);
    printMonster(blurp);

    return 0;
}