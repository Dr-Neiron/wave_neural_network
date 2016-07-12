#ifndef NEURON_H
#define NEURON_H

#include <memory>

class State;

class Neuron
{
public:
    Neuron();

private:
    std::unique_ptr<State> _state;
};

#endif // NEURON_H
