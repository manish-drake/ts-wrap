#ifndef CLIENT_H
#define CLIENT_H


class Client
{
    static Client *s_instance;
    Client();
public:
    static Client* Instance()
    {
        if(!s_instance)
        {
            s_instance = new Client;
        }
        return s_instance;
    }

    unsigned int GetFPGAVersion();

    ~Client();

};

#endif // CLIENT_H
