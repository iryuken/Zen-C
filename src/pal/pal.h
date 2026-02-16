
#ifndef PAL_H
#define PAL_H

#include <stddef.h>

/**
 * @brief Setup terminal (enable ANSI colors on Windows).
 */
void z_setup_terminal(void);

/**
 * @brief Get wall clock time in seconds.
 */
double z_get_time(void);

/**
 * @brief Get monotonic time in seconds (high precision).
 */
double z_get_monotonic_time(void);

/**
 * @brief Get temporary directory path.
 */
const char *z_get_temp_dir(void);

/**
 * @brief Get current process ID.
 */
int z_get_pid(void);

/**
 * @brief Get the path of the current executable.
 */
void z_get_executable_path(char *buffer, size_t size);

/**
 * @brief Check if file descriptor refers to a terminal.
 */
int z_isatty(int fd);

#endif
