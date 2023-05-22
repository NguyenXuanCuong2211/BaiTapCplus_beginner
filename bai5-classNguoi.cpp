#include <iostream>
#include <string>
#include <ctime>
#include <stdint.h>
using namespace std;
class NGUOI {
    private:
    string ten;
    int namSinh;
    string diaChi;
    public:
    NGUOI (string name, int birth, string addr);
    void Info ();
    int tinhTuoi(int currentYear);
};
NGUOI::NGUOI(string name, int birth, string addr)
{
    NGUOI::ten= name;
    NGUOI::namSinh=birth;
    NGUOI::diaChi= addr;
}
void NGUOI::Info()
{
    cout<< "THONG TIN CUA NGUOI NAY LA:" <<endl;
    cout<< NGUOI::ten<< " - "<< "Nam sinh: " << NGUOI::namSinh<< " - "<< "Dia chi: "<< NGUOI::diaChi <<endl;
}
int NGUOI::tinhTuoi(int currentYear)
{
    int tuoi;
    tuoi= currentYear- NGUOI::namSinh +1;
    return tuoi;
}
int main() {
    // Lấy thời gian hiện tại
    std::time_t now = std::time(nullptr);
    // Chuyển đổi thời gian thành cấu trúc tm
    std::tm* timeinfo = std::localtime(&now);
    // Lấy năm từ cấu trúc tm
    int currentYear = timeinfo->tm_year + 1900;
    NGUOI vietnam("NGUYEN THANH TUNG",1994,"THAI BINH" );
    vietnam.Info();
    cout<< "Tuoi cua nguoi nay la: " << vietnam.tinhTuoi(currentYear);
    return 0;
}