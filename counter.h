#pragma once
class Counter
{
    int count = 1;

public:

    int plus();
    int minus();
    int present_value();
    Counter();
    Counter(int new_count);
};

