#ifndef NEURON_H
#define NEURON_H

#include "statemachine.h"

class State;

class Neuron: public StateMachine
{
public:
    Neuron();
    void process();

private:

};

#endif // NEURON_H
