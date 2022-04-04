#include "BanhMiThapCam.h"

BanhMiThapCam::BanhMiThapCam() : BanhMi() {
    ten = "banh mi thap cam";
}

long long BanhMiThapCam::gia() const {
    return 30000;
}

void BanhMiThapCam::xuat() const {
    BanhMi::xuat();
}

BanhMiThapCam::~BanhMiThapCam() = default;
