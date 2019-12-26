extern "C" __declspec(dllexport) unsigned int __stdcall GetFPGAVersion(int var);



class cdllexp{
    public:
    cdllexp() = default;
    inline unsigned int GetFPGA_Version(int var)
    {
        return GetFPGAVersion(var);
    }
    ~cdllexp() = default;
};
