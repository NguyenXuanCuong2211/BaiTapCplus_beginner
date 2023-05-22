#include <iostream>
#include <stdint.h>
using namespace std;
class PHANSO
{
    private:
    uint8_t tuSo;
    uint8_t mauSo;
    public:
    PHANSO (uint8_t ts, uint8_t ms);
    float getPS();
};
PHANSO::PHANSO (uint8_t ts=0, uint8_t ms=1)
{
    PHANSO::tuSo=ts;
    PHANSO::mauSo=ms;
}
float PHANSO::getPS()
{
    return float(PHANSO::tuSo)/PHANSO::mauSo;
}
class PHEPTOAN
{
    private:
    PHANSO phanSo1, phanSo2;
    public:
    PHEPTOAN(PHANSO ps1, PHANSO ps2);
    float phepCong();
    float phepTru();
    float phepNhan();
    float phepChia();
};
PHEPTOAN::PHEPTOAN(PHANSO ps1, PHANSO ps2)
{
    PHEPTOAN::phanSo1= ps1;
    PHEPTOAN::phanSo2=ps2; 
}
float PHEPTOAN::phepCong()
{
    return (phanSo1.getPS()+phanSo2.getPS());
}
float PHEPTOAN::phepTru(){
    return (phanSo1.getPS()-phanSo2.getPS());
}
float PHEPTOAN::phepNhan(){
    return (phanSo1.getPS()*phanSo2.getPS());
}
float PHEPTOAN::phepChia(){
    return (phanSo1.getPS()/phanSo2.getPS());
}
int main()
{
    PHANSO ps1(3,5), ps2(5,3), ps3(11,22);
    PHEPTOAN phepToan1(ps1,ps3);
    cout<<"PHEP CONG: " << phepToan1.phepCong()<<endl;
    cout<<"PHEP TRU: " << phepToan1.phepTru()<<endl;
    cout<<"PHEP NHAN: " << phepToan1.phepNhan()<<endl;
    cout<<"PHEP CHIA: " << phepToan1.phepChia()<<endl; 
    return 0;
}