#ifndef CSC10003_OOP_BANHMITHAPCAM_H
#define CSC10003_OOP_BANHMITHAPCAM_H

#include "BanhMi.h"

class BanhMiThapCam : public BanhMi {
public:
    BanhMiThapCam();
    long long gia() const override;
    void xuat() const override;
    ~BanhMiThapCam() override;
};


#endif //CSC10003_OOP_BANHMITHAPCAM_H
