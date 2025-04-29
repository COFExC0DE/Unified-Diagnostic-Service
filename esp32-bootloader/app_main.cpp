#include "UDSBootloader.h"

extern "C" void app_main() {
    // Initialize the bootloader
    UDSBootloader bootloader;
    bootloader.initialize();

    // Start processing CAN requests
    bootloader.processRequests();
}
