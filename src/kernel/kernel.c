#include "vga/text/terminal.h"

void kernel_early_main() {
    init_terminal();
}

void kernel_main() {
    printf("Shut up, nerd! After all, you paid for fucking\n");
    printf_color("  _____        _ _   _           \n"
" |_   _|_ __ _(_) |_| |_ ___ _ _ \n"
"   | | \\ V  V / |  _|  _/ -_) '_|\n"
"   |_|  \\_/\\_/|_|\\__|\\__\\___|_|  ", VGA_COLOR_CYAN, VGA_COLOR_BLACK);
}

void kernel_end() {
    __asm__ ("hlt");
}