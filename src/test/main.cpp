#include "log.h"

int main(int, char* [])
{
  LOG("Hello, world! " << "0x" << std::hex << 255 << " is a hex number.");
}
