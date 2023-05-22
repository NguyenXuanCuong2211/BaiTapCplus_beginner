#include<stdio.h>
#include<math.h>
#define pi 3.14
class HINHTRON{
    private:
    int banKinh;
    public:
    HINHTRON(int bk);
    float chuVi();
    float dienTich();
};
HINHTRON::HINHTRON(int bk){
    HINHTRON::banKinh=bk;
}
float HINHTRON::chuVi()
{
    return 2*pi*HINHTRON::banKinh;
}
float HINHTRON::dienTich()
{
    return pi*pow(HINHTRON::banKinh,2);
}
int main()
{
    HINHTRON ht1(22);
    printf("chu vi hinh tron ht1 la %0.2f\n",ht1.chuVi());
    printf("dien tich hinh tron ht1 la %0.2f",ht1.dienTich());
    return 0;
}