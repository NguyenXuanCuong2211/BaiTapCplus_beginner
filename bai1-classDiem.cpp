#include<stdio.h>
#include<math.h>
class DIEM
{
private:
    int X;
    int Y;
public:
    DIEM(int x=0, int y=0);
    int getX();
    int getY();
};
DIEM::DIEM(int x, int y)
{
    DIEM::X=x;
    DIEM::Y=y;
}
int DIEM::getX()
{
    return DIEM::X;
}
int DIEM::getY()
{
    return DIEM::Y;
}

class KHOANGCACH{
    private:
    DIEM A;
    DIEM B;
    public:
    KHOANGCACH(DIEM a, DIEM b);
    float khoangCach();
};
KHOANGCACH::KHOANGCACH(DIEM a, DIEM b){
    KHOANGCACH::A=a;
    KHOANGCACH::B=b;
}
float KHOANGCACH::khoangCach()
{
    float kc;
    kc= sqrt(pow(A.getX()-B.getX(),2)+pow(A.getY()-B.getY(),2));
    return kc;
}
class DIENTICH{
    private:
    DIEM A,B,C;
    public:
    DIENTICH(DIEM a, DIEM b, DIEM c);
    float dienTich();
};
DIENTICH::DIENTICH(DIEM a, DIEM b, DIEM c)
{
    DIENTICH::A=a;
    DIENTICH::B=b;
    DIENTICH::C=c;
}
float DIENTICH::dienTich()
{
    float dt;
    dt= 0.5* abs((A.getX()-B.getX())*(C.getY()-A.getY())-(C.getX()-A.getX())*(B.getY()-A.getY()));
    return dt;
}

int main()
{
    DIEM A(3,4), B(5,6), C(8,4);
    KHOANGCACH distance(A,B);
    DIENTICH tamGiac(A,B,C);
    printf("Khoang cach hai diem A va B la: %0.2f\n", distance.khoangCach());
    printf("Dien tich tam giac ABC la: %0.2f",tamGiac.dienTich());
}