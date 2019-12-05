extern "C" __declspec(dllexport) int __stdcall GetFPGAVersion(int var);



class cdllexp{
    public:
    cdllexp() = default;
    inline int GetFPGA_Version(int var)
    {
        return GetFPGAVersion(var);
    }
    ~cdllexp() = default;
};