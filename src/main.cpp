#include "emulator.hpp"

#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "DarkSwitch starting...\n";

    Emulator emulator;

    if (argc > 1) {
        if (!emulator.load_rom(argv[1])) {
            std::cerr << "Failed to load ROM: " << argv[1] << '\n';
            return 1;
        }
    } else {
        std::cout << "No ROM path provided. Running empty emulator skeleton.\n";
    }

    emulator.run();
    return 0;
}
