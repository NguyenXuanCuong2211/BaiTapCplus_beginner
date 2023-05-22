#include <iostream>
#include <ctime>
using namespace std;
class NGAYTHANGNAM
{
   private:
   int ngay, thang,nam;
   public:
   NGAYTHANGNAM (int day, int month, int year);
   int tinhTuoi (int currentY);
   bool ktNgayLe(); 
};
NGAYTHANGNAM::NGAYTHANGNAM(int day, int month, int year){
    NGAYTHANGNAM::ngay=day;
    NGAYTHANGNAM::thang=month;
    NGAYTHANGNAM::nam=year;
}
int NGAYTHANGNAM::tinhTuoi(int currentY)
{
    int tuoi;
    tuoi= currentY-NGAYTHANGNAM::nam+1;
    return tuoi;
}
bool NGAYTHANGNAM::ktNgayLe()
{
    if((NGAYTHANGNAM::ngay==1||NGAYTHANGNAM::ngay==2) && NGAYTHANGNAM::thang==1) return true;
    if((NGAYTHANGNAM::ngay>=21&&NGAYTHANGNAM::ngay<=27) && NGAYTHANGNAM::thang==1) return true;
    if((NGAYTHANGNAM::ngay==29||NGAYTHANGNAM::ngay==30) && NGAYTHANGNAM::thang==4) return true;
    if((NGAYTHANGNAM::ngay==1||NGAYTHANGNAM::ngay==2) && NGAYTHANGNAM::thang==5) return true;
    if((NGAYTHANGNAM::ngay==2||NGAYTHANGNAM::ngay==4) && NGAYTHANGNAM::thang==9) return true;
    return false;
}
int main()
{
    // Lấy thời gian hiện tại
    std::time_t now = std::time(nullptr);
    // Chuyển đổi thời gian thành cấu trúc tm
    std::tm* timeinfo = std::localtime(&now);
    // Lấy năm từ cấu trúc tm
    int currentYear = timeinfo->tm_year + 1900;
    NGAYTHANGNAM first (22,11,2000);
    cout<< "Tuoi cua nguoi do la: "<<first.tinhTuoi(currentYear)<<endl;
    cout<<"NGAY NAY LA NGAY LE LA: "<<first.ktNgayLe()<<endl;
    return 0;
}