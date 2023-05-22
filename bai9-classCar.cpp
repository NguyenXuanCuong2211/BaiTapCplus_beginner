#include<iostream>
#include<string>
using namespace std;
class CAR
{
    private:
    string color;
    string model;
    int distance;
    public:
    CAR(string cl, string ml, int dis);
    int KM ();
    void thongTinXe();
    int phiBaoTri();
};
CAR::CAR(string cl, string ml, int dis)
{
    CAR::color=cl;
    CAR::model=ml;
    CAR::distance=dis;
}
int CAR::KM()
{
    return CAR::distance;
}
void CAR::thongTinXe()
{
    cout<<"MAU XE: "<<CAR::color<<" - KIEU DONG CO: "<<CAR::model<<" - DA DI DUOC: "<<CAR::distance<<" KM"<<endl;
}
int CAR::phiBaoTri()
{
    int phi;
    phi=CAR::distance*100;
    return phi;
}


int main()
{
    CAR xe1("Blue", "IRF305",5000);
    xe1.thongTinXe();
    cout<<"Phi bao tri xe la: "<<xe1.phiBaoTri()<<endl;
    return 0;
}