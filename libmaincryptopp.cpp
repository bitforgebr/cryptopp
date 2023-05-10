
#include <windows.h>
#include "libmaincryptopp.h"

NAMESPACE_BEGIN(CryptoPP)

///////////////////////////////////////////////////////////////////////////////
///@brief This function must be the first thing called BEFORE doing anything.
///@param argc like main argc.
///@param argv like main argv.
///@result returns 0 means you'll have a nice day, otherwise returns an error code.
DWORD WINAPI CryptoLibInitialize(int argc, char* argv[])
{
   return CryptoLibCheckIntegrity();
}

///////////////////////////////////////////////////////////////////////////////
///@brief This function must be the last thing called if you don't want to use
///       any function of this lib again.
///@result always returns 0
DWORD WINAPI CryptoLibFinalize(void)
{
   return ERROR_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////
///@brief This function check the dll/lib integrity. It's called on the beginning by
///        CryptoLibInit, but can be called at any time.
///@result returns 0 if the library is safe and ready to be used.
DWORD WINAPI CryptoLibCheckIntegrity(void)
{
   return ERROR_SUCCESS;
}

NAMESPACE_END