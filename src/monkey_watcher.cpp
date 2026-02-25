#include "monkey_watcher.hpp"

// Implement the MonkeyWatcher class here:
void MonkeyWatcher::filter_op(std::vector<Monkey> &monkeys)
{
    //Going through the monkeys currently in the pipeline and adding them to the monkeys_seen vector
    for (const Monkey &monkey : monkeys)
    {
        // Storing a copy of the monkey in the monkeys_seen vector
        this->monkeys_seen.push_back(monkey);
    }
}

const std::vector<Monkey> &MonkeyWatcher::get_monkeys_seen() const
{
    return this->monkeys_seen;
}