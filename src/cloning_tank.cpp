#include "cloning_tank.hpp"

// Implement this:
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{
    // Storing the orignal size to avoid infinite loop when we keep adding new elements to the monkeys vector
    int original_size = monkeys.size();

    //Loop through the orignal set of monkeys
    for(int i = 0; i < original_size; i++)
    {
        // Cloning the monkey by creating a copy of it and adding it to the monkeys vector
        monkeys.push_back(monkeys[i]);
    }
}