#include <errno.h>   //errno
#include <stdint.h>  //int32_t
#include <stdio.h>   //printf() fprintf()
#include <stdlib.h>  //malloc() & free()

#include "my_string.h"
#include "stack_pointer.h"
#include "tokenizer.h"

#define N_REGISTERS ((size_t)32)

int32_t *r;

static void error_no_memory(void) {
  fprintf(stderr, "No more memory available. Errorno: %d\n", errno);
  return;
}

int init_regs(void) {
  // TODO: Make space and initialize registers 0

  return 1;
}

/**
 * Fill out this function and use it to read interpret user input to execute
 * RV32 instructions. You may expect that a single, properly formatted RISC-V
 * instruction string will be passed as a parameter to this function.
 */
int interpret(char *instr) {
  // TODO: Parse instr

  // TODO: Interpret the instruction

  return 1;
}

int main(int argc, char **argv) {
  // TODO: Print an error and fail if the # of arguments is not 2

  // TODO: Initialize register (check for failure)

  // TODO: Open the file pass (second argument)

  // TODO: For each line in the file, interpret it

  // TODO: Close the file

  // TODO: Free all memory from heap

  return 1;
}
