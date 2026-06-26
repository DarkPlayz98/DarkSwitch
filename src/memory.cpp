#include "memory.hpp"

#include <stdexcept>

Memory::Memory(std::size_t size) : data_(size, 0) {}

uint8_t Memory::read8(std::size_t address) const {
    if (address >= data_.size()) {
        throw std::out_of_range("Memory read out of range");
    }
    return data_[address];
}

void Memory::write8(std::size_t address, uint8_t value) {
    if (address >= data_.size()) {
        throw std::out_of_range("Memory write out of range");
    }
    data_[address] = value;
}

std::size_t Memory::size() const {
    return data_.size();
}
