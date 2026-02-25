#include "feeder.hpp"

// Implement this:
void Feeder::filter_op(std::vector<Monkey> &monkeys)
{
    // We are using a reference to the monkeys vector, so we can directly modify it
    for(Monkey &monkey : monkeys)
    {
        // Decreasing the hunger level of each monkey by 1
        monkey.hunger_level -= 1;
    }
}