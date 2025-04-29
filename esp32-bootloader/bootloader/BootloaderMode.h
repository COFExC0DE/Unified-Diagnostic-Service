#ifndef BOOTLOADERMODE_H
#define BOOTLOADERMODE_H

class BootloaderMode {
public:
    BootloaderMode();
    ~BootloaderMode();

    void enterBootloaderMode();
    void exitBootloaderMode();

private:
    // Private members for bootloader mode operations
};

#endif // BOOTLOADERMODE_H
