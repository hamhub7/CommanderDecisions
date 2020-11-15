#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Commander.h"
Commander getRandomChoice(std::vector<Commander> choices);
std::vector<Commander> setupList();

int main()
{
    std::srand(std::time(nullptr));

    std::vector<Commander> choices = setupList();

    Commander choice = getRandomChoice(choices);

    if (choice.getPartner())
    {
        Commander choice2 = getRandomChoice(choices);
        while (!choice2.getPartner() || (choice.getName() == choice2.getName()))
        {
            choice2 = getRandomChoice(choices);
        }

        std::cout << choice.getName() << std::endl;
        std::cout << choice2.getName() << std::endl;
    }
    else
    {
        std::cout << choice.getName() << std::endl; 
    }

    return 0;
}

Commander getRandomChoice(std::vector<Commander> choices)
{
    return choices[std::rand() % choices.size()];
}

std::vector<Commander> setupList()
{
    std::vector<Commander> retVector;

    // White
    retVector.push_back(Commander("Akroma, Vision of Ixidor", true));
    retVector.push_back(Commander("Alharu, Solemn Ritualist", true));
    retVector.push_back(Commander("Ardenn, Intrepid Archaeologist", true));
    retVector.push_back(Commander("Keleth, Sunmane Familiar", true));
    retVector.push_back(Commander("Livio, Oathsworn Sentinel", true));
    retVector.push_back(Commander("Prava of the Steel Legion", true));
    retVector.push_back(Commander("Radiant, Serra Archangel", true));
    retVector.push_back(Commander("Rebbec, Architect of Ascension", true));

    // Blue
    retVector.push_back(Commander("Brinelin, the Moon Kraken", true));
    retVector.push_back(Commander("Eligeth, Crossroads Augur", true));
    retVector.push_back(Commander("Esidor, Wardwing Familiar", true));
    retVector.push_back(Commander("Ghost of Ramirez DePietro", true));
    retVector.push_back(Commander("Glacian, Powerstone Engineer", true));
    retVector.push_back(Commander("Malcolm, Keen-Eyed Navigator", true));
    retVector.push_back(Commander("Sakashima of a Thousand Faces", true));
    retVector.push_back(Commander("Siani, Eye of the Storm", true));

    // Black
    retVector.push_back(Commander("Armix, Filigree Thrasher", true));
    retVector.push_back(Commander("Falthis, Shadowcat Familiar", true));
    retVector.push_back(Commander("Keskit, the Flesh Sculptor", true));
    retVector.push_back(Commander("Miara, Thorn of the Glade", true));
    retVector.push_back(Commander("Nadier, Agent of the Duskenel", true));
    retVector.push_back(Commander("Sengir, the Dark Baron", true));
    retVector.push_back(Commander("Tormod, the Desecrator", true));

    // Red
    retVector.push_back(Commander("Alena, Kessig Trapper", true));
    retVector.push_back(Commander("Breeches, Brazen Plunderer", true));
    retVector.push_back(Commander("Dargo, the Shipwrecker", true));
    retVector.push_back(Commander("Kediss, Emberclaw Familiar", true));
    retVector.push_back(Commander("Krark, the Thumbless", true));
    retVector.push_back(Commander("Rograkh, Son of Rohgahh", true));
    retVector.push_back(Commander("Toggo, Goblin Weaponsmith", true));

    // Green
    retVector.push_back(Commander("Anara, Wolvid Familiar", true));
    retVector.push_back(Commander("Gilanra, Caller of Wirewood", true));
    retVector.push_back(Commander("Halana, Kessig Ranger", true));
    retVector.push_back(Commander("Ich-Tekik, Salvage Splicer", true));
    retVector.push_back(Commander("Kamahl, Heart of Krosa", true));
    retVector.push_back(Commander("Kodama of the East Tree", true));
    retVector.push_back(Commander("Numa, Joraga Chieftan", true));
    retVector.push_back(Commander("Slurrk, All-Ingesting", true));

    // 2-Color
    retVector.push_back(Commander("Kangee, Sky Warden", false));
    retVector.push_back(Commander("Kwain, Itinerant Meddler", false));
    retVector.push_back(Commander("Araumi of the Dead Tide", false));
    retVector.push_back(Commander("Nymris, Oona's Trickster", false));
    retVector.push_back(Commander("Blim, Comedic Genius", false));
    retVector.push_back(Commander("Juri, Master of the Revue", false));
    retVector.push_back(Commander("Hans Eriksson", false));
    retVector.push_back(Commander("Tuya Bearclaw", false));
    retVector.push_back(Commander("Hamza, Guardian of Arashin", false));
    retVector.push_back(Commander("Lathiel, the Bounteous Dawn", false));
    retVector.push_back(Commander("Liesa, Shroud of Dusk", false));
    retVector.push_back(Commander("Thalisse, Reverent Medium", false));
    retVector.push_back(Commander("Captain Vargus Wrath", false));
    retVector.push_back(Commander("Zara, Renegade Recruiter", false));
    retVector.push_back(Commander("Abomination of Llanowar", false));
    retVector.push_back(Commander("Belbe, Corrupted Observer", false));
    retVector.push_back(Commander("Bell Borca, Spectral Sergeant", false));
    retVector.push_back(Commander("Reyav, Master Smith", false));
    retVector.push_back(Commander("Gor Muldrak, Amphinologist", false));
    retVector.push_back(Commander("Imoti, Celebrant of Bounty", false));

    // 3-Color
    retVector.push_back(Commander("Nevinyrral, Urborg Tyrant", false));
    retVector.push_back(Commander("Obeka, Brute Chronologist", false));
    retVector.push_back(Commander("Yurlok of Scorch Thrash", false));
    retVector.push_back(Commander("Jared Carthalion", false));
    retVector.push_back(Commander("Amareth, the Lustrous", false));
    retVector.push_back(Commander("Ghen, Arcanum Weaver", false));
    retVector.push_back(Commander("Averna, the Chaos Bloom", false));
    retVector.push_back(Commander("Colfenor, the Last Yew", false));
    retVector.push_back(Commander("Gnostro, Voice of the Crags", false));
    retVector.push_back(Commander("Archelos, Lagoon Mystic", false));

    return retVector;
}