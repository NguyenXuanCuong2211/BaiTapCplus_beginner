#include<iostream>
#include<string>
using namespace std;
class BOOK 
{
    private:
    string tenSach;
    string tacGia;
    int namXuatBan;
    int soLuong;
    public:
    BOOK(string name, string author, int nXB, int sL);
    void thongTinSach();
    int muonSach(int n);
    int traSach(int n);
};
BOOK::BOOK (string name, string author, int nXB, int sL){
    BOOK::tenSach= name;
    BOOK::tacGia=author;
    BOOK::namXuatBan=nXB;
    BOOK::soLuong=sL;
}
void BOOK::thongTinSach()
{
    cout<< "Sach: "<<BOOK::tenSach<<" - Tac gia: "<<BOOK::tacGia<<" - Xuat Ban Nam: "<<BOOK::namXuatBan<<" - So Luong: "<<BOOK::soLuong<<endl;
}
int BOOK::muonSach(int n)
{
    cout<< "Da muon "<<n<<" quyen sach "<<BOOK::tenSach<<endl;
    BOOK::soLuong=BOOK::soLuong-n;
    return BOOK::soLuong;
}
int BOOK::traSach(int n)
{
    cout<< "Da tra "<<n<<" quyen sach "<<BOOK::tenSach<<endl;
    BOOK::soLuong=BOOK::soLuong+n;
    return BOOK::soLuong;
}

int main()
{
    BOOK sach1("Truyen Kieu","Nguyen Du",1800,500);
    sach1.thongTinSach();
    sach1.muonSach(50);
    sach1.thongTinSach();
    return 0;
}