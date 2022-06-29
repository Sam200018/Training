#include <iostream>
#include <string>

int main()
{

    int nStones, mov = 0;
    std::string stones;
    std::cin >> nStones;
    std::cin >> stones;

    for (int i = 0; i < nStones - 1; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            mov++;
        }
    }
    std::cout << mov << std::endl;

    return 0;
}