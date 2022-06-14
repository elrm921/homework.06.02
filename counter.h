#pragma once

class Counter {
    public:
        Counter();
        Counter(int value);
        void inc();
        void dec();
        int get();
    private:
        int count;
};
