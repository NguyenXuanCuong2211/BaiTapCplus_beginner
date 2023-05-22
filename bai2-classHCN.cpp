#include <stdio.h>
#include <stdint.h>
#include <math.h>
/*

*/
class hinhChuNhat {
    private:
    int chieuDai;
    int chieuRong;
    public:
    hinhChuNhat(int cd, int cr);
    int chuVi();
    int dienTich();
    float duongCheo();
    bool kiemTra();
};
    hinhChuNhat::hinhChuNhat(int cd, int cr)
    {
        hinhChuNhat::chieuDai= cd;
        hinhChuNhat::chieuRong=cr;
    }
    int hinhChuNhat::chuVi(){
        return (hinhChuNhat::chieuRong+ hinhChuNhat::chieuDai)*2;
    }
    int hinhChuNhat::dienTich(){
        return hinhChuNhat::chieuDai* hinhChuNhat::chieuRong;
    }
    float hinhChuNhat::duongCheo(){
        return sqrt(pow(hinhChuNhat::chieuDai,2)+pow(hinhChuNhat::chieuRong,2));
    }
    bool hinhChuNhat::kiemTra(){
        if(hinhChuNhat::chieuDai==hinhChuNhat::chieuRong)
        {
            return true;
        }
        else return false;
    }
int main ()
{
    hinhChuNhat hcn1(5,3), hcn2(20,10);
    printf("Chu vi hcn1 la %d\n",hcn1.chuVi());
    printf("Dien tich hcn1 la %d\n",hcn1.dienTich());
    printf("Do dai duong cheo hcn1 la %0.2f\n",hcn1.duongCheo());
    printf("hcn1 la hinh vuong la %d\n",hcn1.kiemTra());
    printf("Chu vi hcn2 la %d\n",hcn2.chuVi());
    return 0;
}