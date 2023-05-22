#include<stdio.h>
#include<string>
using namespace std;
class NGANHANG{
    private:
    string soTaiKhoan;
    string tenTaiKhoan;
    int soDu;
    public:
    NGANHANG(string stk, string ttk, int sd);
    int rutTien(int tien);
    int napTien(int tien);
    int kiemTraSoDu();
};
NGANHANG::NGANHANG(string stk, string ttk, int sd)
{
    NGANHANG::soTaiKhoan=stk;
    NGANHANG::tenTaiKhoan=ttk;
    NGANHANG::soDu=sd;
}
int NGANHANG::rutTien(int tien){
    NGANHANG::soDu=NGANHANG::soDu -tien;
    return (NGANHANG::soDu);
}
int NGANHANG::napTien(int tien){
    NGANHANG::soDu=NGANHANG::soDu+tien;
    return (NGANHANG::soDu);
}
int NGANHANG::kiemTraSoDu(){
    return (NGANHANG::soDu);
}
int main()
{
    NGANHANG person1("12345", "Nguyen A", 20000);
    person1.napTien(1000);
    printf("Da nap 1000\n");
    printf("So du la: %d\n",person1.kiemTraSoDu());
    person1.rutTien(8000);
    printf("Da rut 8000\n");
    printf("So du la: %d\n",person1.kiemTraSoDu());
    return 0;
}