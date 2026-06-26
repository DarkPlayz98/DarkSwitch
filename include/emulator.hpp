#pragma once

#include <cstdint>
#include <string>

class Emulator {
public:
    Emulator();

    bool load_rom(const std::string& path);
    void run();

private:
    bool running_;
    std::string rom_path_;
};
