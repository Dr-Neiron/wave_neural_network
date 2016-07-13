#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <memory>

class State;

enum StateIndex
{
    INACTIVE = 0,
    ACTIVE
};

class StateMachine
{
public:
    StateMachine();
    void setState(StateIndex newState);

private:
    StateIndex _state;
    std::unique_ptr<State[]> _states;
};

#endif // STATEMACHINE_H
