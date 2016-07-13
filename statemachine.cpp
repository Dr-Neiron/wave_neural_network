#include "statemachine.h"
#include "state.h"

StateMachine::StateMachine():
    _state(INACTIVE)
{

}

void StateMachine::setState(StateIndex newState)
{
    _state = newState;
}
