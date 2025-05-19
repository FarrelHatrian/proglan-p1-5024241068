NO.1
Bagian pembalap f1 - hitung point 
1. p adalah nama pembalap dan p adalah posisi finishnya
2. construktpr menyimpan nama dan posisi
3. memanggil fungsi menghitung point untuk menghitung poin sesuai posisi
Bagian float hitung point
1. nentuin jumlah poin sesuai posisi
2. diluar peringkat 10 poinnya 0
Bagian void print info
1. buat mencetak informasi nama dan point yg didapat sesuai posisi

NO.2
a. Bagian int main() {
    int finnHealth, finnAttack;
    int iceHealth, iceAttack;
    std::string firstTurn;
1. buat menyimpan input health dan attack fin dan ice dan siapa yang nyerang duluan
b. Bagian std::cin >> finnHealth >> finnAttack;
       std::cin >> iceHealth >> iceAttack;
       std::cin >> firstTurn;
   baris 1 buat haelth dan attack fin
   baris 2 buat health dan attack ice
   baris 3 buat siapa yang nyerang dulu
c. Bagian     Character finn("Finn", finnHealth, finnAttack);
              Character iceKing("Ice King", iceHealth, iceAttack);
   1. buat character ice king dan fin
d. Bagian     finn.printStatus();
              iceKing.printStatus();
   1.nampilin status awal kedua character
setelah itu buat siapa yang nyerang duluan, jika fin nyrang duluan tampilin status haelth ice king
jika ice king masih hidup, ice king nyerang fin dan status health ice king akan terlihat
jika ice king nyerang duluan, prosesnya ttp sama seperti sebelumnya, program selesai
