#include "emulator.hpp"
#include "memory.hpp"

#include <chrono>
#include <iostream>
#include <thread>

Emulator::Emulator() : running_(false) {}

bool Emulator::load_rom(const std::string& path) {
    rom_path_ = path;
    std::cout << "Loaded ROM path: " << rom_path_ << '\n';
    return true;
}

void Emulator::run() {
    running_ = true;

    std::cout << "Emulator loop started.\n";
    std::cout << "This is only a skeleton right now.\n";

    for (int frame = 0; frame < 5 && running_; ++frame) {
        std::cout << "Frame " << frame << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    running_ = false;
    std::cout << "Emulator stopped.\n";
}
