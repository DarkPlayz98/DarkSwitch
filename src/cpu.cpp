#include "cpu.hpp"

#include <iostream>

CPU::CPU() {
    reset();
}

void CPU::reset() {
    pc = 0;
    running = true;

    for (int i = 0; i < 31; i++) {
        regs[i] = 0;
    }
}

void CPU::step() {
    if (!running) {
        return;
    }

    std::cout << "[CPU] Executing instruction at 0x"
              << std::hex << pc << std::dec << '\n';

    pc += 4;
}
