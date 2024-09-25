#include <stdio.h>

typedef enum CRASH_CODE {
    READ_ERROR = 1,
    WRITE_ERROR = 2,
    DEP_ERROR_NOT_FOUND = 3,
    DEP_ERROR_CRASHED = 4,
    SYSTEM_ERROR_ACCESS_DENIED = 5,
    SYSTEM_ERROR_UNKNOWN = 6,

    SEGMENTATION_ERROR = 7,
    SEGMENTATION_FAULT = 8,

    MEMORY_ERROR = 9
}

void die(int* crash_code, char* crash_report) {
    printf("died: crash code %i. report: %s", crash_code, crash_report)
}