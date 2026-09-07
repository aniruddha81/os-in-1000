#pragma once

struct sbiret {
    long error;
    long value;
};

/**
 * if this was made an function, then it would show the file name and line number where PANIC is defined, not where it's called
 */
#define PANIC(fmt, ...)                                                       \
    do {                                                                      \
        printf("PANIC: %s:%d: " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__); \
        while (1) {                                                           \
        }                                                                     \
    } while (0)