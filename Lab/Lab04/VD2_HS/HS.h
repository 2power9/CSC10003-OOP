#ifndef CSC10003_OOP_HS_H
#define CSC10003_OOP_HS_H

#include <iostream>
#include <cstring>

using namespace std;

class HS {
private:
    char* hoTen;
public:
    HS(void);
    HS(const char *ht);
    HS(const HS& hs);
    ~HS(void);
    const HS& operator=(const HS& hs);
};


#endif //CSC10003_OOP_HS_H
