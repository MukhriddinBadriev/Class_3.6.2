#include "counter.h"


    int Counter::plus() {
        return count++;
    }
    int Counter::minus() {
        return count--;
    }

    int Counter::present_value() {
        return count;
    }
    Counter::Counter() {
        this->count = 1;
    }
    Counter::Counter (int new_count) {
        this->count = new_count;
    }
