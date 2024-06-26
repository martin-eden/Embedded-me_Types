// My nomenclature of type names

/*
  Version: 4
  Last mod.: 2024-06-27
*/

#pragma once

namespace me_BaseTypes
{
  typedef signed char TSint_1;
  typedef signed int TSint_2;
  typedef signed long int TSint_4;
  typedef signed long long int TSint_8;

  typedef unsigned char TUint_1;
  typedef unsigned int TUint_2;
  typedef unsigned long int TUint_4;
  typedef unsigned long long int TUint_8;

  typedef char TChar;

  typedef bool TBool;

  typedef float TFloat;

  typedef void (*TMethod)(TUint_2 Data, TUint_2 State);
}

/*
  2024-02-01
  2024-03-12
  2024-05-17 [+] Namespace, [-] <TBytes>
  2024-06-27 [+] TMethod
*/
