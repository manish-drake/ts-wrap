#include <math.h>
# define M_PI           3.14159265358979323846  /* pi */


extern "C" __declspec(dllexport) int  __stdcall GetSphereSAandVol(double radius, double* sa, double* vol);
extern "C" __declspec(dllexport) double  __stdcall GetSA(double radius);
extern "C" __declspec(dllexport) double __stdcall GetVol(double radius);
extern "C" __declspec(dllexport) int __stdcall GetFPGAVersion(int var);