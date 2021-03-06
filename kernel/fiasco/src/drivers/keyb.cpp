INTERFACE:

#include "console.h"

/**
 * Platform independent keyboard stub.
 *
 * Provides an empty implentation for write(...).
 */
class Keyb : public Console
{
public:
  // must be implemented in platform part.
  int getchar(bool blocking = true);

  // implemented empty
  int write(char const *str, size_t len);
};


IMPLEMENTATION:

IMPLEMENT
int
Keyb::write( char const *, size_t len)
{
  return len;
}

PUBLIC
Mword
Keyb::get_attributes() const
{
  return DIRECT | IN;
}

