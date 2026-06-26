#pragma once

#include <cstdint>

class CPU {
public:
    CPU();

    void reset();
    void step();

private:
    uint64_t pc;
    uint64_t regs[31];
    bool running;
};
