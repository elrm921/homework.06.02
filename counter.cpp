#include "counter.h"

CounterClass::Counter::Counter(int value) : count(value) {}

void CounterClass::Counter::inc() {
    count++;
}
void CounterClass::Counter::dec() {
    count--;
}
int CounterClass::Counter::get() {
    return count;
}

