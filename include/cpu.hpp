#pragma once

#include <cstdint>

class CPU {
public:
    CPU();

    void reset();
    void step();

private:
    uint64_t pc;      // Program Counter
    uint64_t regs[31]; // General-purpose registers X0-X30
    bool running;
};
