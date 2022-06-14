#include "counter.h"

Counter::Counter() {
    count = 0;
}
Counter::Counter(int value) {
    count = value;
}
void Counter::inc() {
    count++;
}
void Counter::dec() {
    count--;
}
int Counter::get() {
    return count;
}

