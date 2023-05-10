#ifndef __LIBMAIN_H__
#define __LIBMAIN_H__
#include <windows.h>


//retira toneladas de warnings que não vamos mexer agora, está na lib
#pragma warning(push)
#pragma warning(disable: 4661)
#pragma warning(disable: 4267)

#include "..\cryptlib\modes.h"
#include "..\cryptlib\blowfish.h"
#include "..\cryptlib\randpool.h"
#include "..\cryptlib\crc.h"
#include "..\cryptlib\md5.h"
#include "..\cryptlib\rsa.h"
#include "..\cryptlib\hex.h"
#include "..\cryptlib\files.h"
#include "..\cryptlib\base64.h"
#include "..\cryptlib\rng.h"
#include "..\cryptlib\osrng.h"
#include "..\cryptlib\idea.h"

#pragma warning(pop)

NAMESPACE_BEGIN(CryptoPP)///these are all implemented algos & schemes available.
///it's just a way to do an unique reference.
enum
{
   CL_AES,
   CL_RC6,
   CL_MARS,
   CL_Twofish,
   CL_Serpent,
   CL_CAST256,
   CL_IDEA,
   CL_DES,
   CL_DESEDE2,
   CL_DESEDE3,
   CL_DESX,
   CL_RC2,
   CL_RC5,
   CL_Blowfish,
   CL_Diamond2,
   CL_TEA,
   CL_SAFER,
   CL_3WAY,
   CL_GOST,
   CL_SHARK,
   CL_CAST128,
   CL_Square,
   CL_Skipjack,
   CL_Camellia,
   CL_SHACAL2,
   CL_Panama,
   CL_ARC4,
   CL_SEAL,
   CL_WAKE,
   CL_WAKEOFB,
   CL_BlumBlumShub,
   CL_RSA,
   CL_DSA,
   CL_ECDSA,
   CL_ECNR,
   CL_ECIES,
   CL_ECDH,
   CL_ECMQV,
   //----ADD MORE ALGORITHMS BEFORE THIS
   CL_NO_MORE
};

///////////////////////////////////////////////////////////////////////////////
//functions prototypes
DWORD WINAPI CryptoLibInitialize(int argc, char* argv[]);
DWORD WINAPI CryptoLibFinalize(void);
DWORD WINAPI CryptoLibCheckIntegrity(void);

NAMESPACE_END

#endif
