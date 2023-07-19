#include <stdio.h>
/**
 * main - Entry point
 *
 * return: 0 Success
 */

int main() {
    // Print the opcodes of the main function
    unsigned char* opcode_ptr = (unsigned char*)main;
    while (*opcode_ptr != 0xC3) {  // 0xC3 is the opcode for the 'ret' instruction
        printf("%02x ", *opcode_ptr);
        opcode_ptr++;
    }
    printf("\n");

    return 0;
}
