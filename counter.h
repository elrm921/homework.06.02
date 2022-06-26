#pragma once

namespace CounterClass {
    class Counter {
        public:
            Counter(int value = 0);
            void inc();
            void dec();
            int get();
        private:
            int count;
    };
};