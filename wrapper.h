#ifdef WRAPPERLIBRARY_EXPORTS
#define WRAPPERAPI __declspec(dllexport)
#else
#define WRAPPERAPI __declspec(dllimport)
#endif

////////////////////////////////////////////////////////////////////////////////
// 

#ifdef __cplusplus

// COM-Like abstract interface.
struct IWrapper
{
    virtual int GetFPGAVer(int n) = 0;
    virtual void Release() = 0;
};

// Regular C++ class.
class WRAPPERAPI CWrapper
{
public:
    int GetFPGAVer(int n);
};


typedef IWrapper* WRAPPERHANDLE;

#else   // C

typedef struct tagWRAPPERHANDLE {} * WRAPPERHANDLE;

#endif // __cplusplus

////////////////////////////////////////////////////////////////////////////////
// 
#ifdef __cplusplus
#   define EXTERN_C     extern "C"
#else
#   define EXTERN_C
#endif // __cplusplus

// Factory function that creates instances of the Wrapper object.
EXTERN_C
WRAPPERAPI
WRAPPERHANDLE
WINAPI
GetWrapper(
    VOID);

////////////////////////////////////////////////////////////////////////////////
// Classic C interface.

EXTERN_C
WRAPPERAPI
INT
APIENTRY
WrapperGetFPGAVer(
    WRAPPERHANDLE handle,
    INT n);

EXTERN_C
WRAPPERAPI
VOID
APIENTRY
WrapperRelease(
    WRAPPERHANDLE handle);

////////////////////////////////////////////////////////////////////////////////
