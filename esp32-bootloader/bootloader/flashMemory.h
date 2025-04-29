#ifndef FLASHMEMORY_H
#define FLASHMEMORY_H

#include <stdint.h>

class FlashMemory {
public:
    FlashMemory();
    ~FlashMemory();

    void erase(uint32_t address, uint32_t length);
    void write(uint32_t address, const uint8_t* data, uint32_t length);
    void read(uint32_t address, uint8_t* buffer, uint32_t length);

private:
    // Private members for flash memory operations
};

#endif // FLASHMEMORY_H
