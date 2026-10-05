from Person import Person
from HasilTryout import HasilTryout

class Siswa(Person):
    # constructor
    def __init__(self, nama="", noHp="", email="", kelas=0, targetJurusan="", targetKampus=""):
        super().__init__(nama, noHp, email)
        self.__kelas = kelas
        self.__targetJurusan = targetJurusan
        self.__targetKampus = targetKampus
        self.__listHasilTryout = []

    # setter and getter for kelas
    def setKelas(self, kelas):
        self.__kelas = kelas
    def getKelas(self):
        return self.__kelas

    # setter and getter for targetJurusan
    def setTargetJurusan(self, targetJurusan):
        self.__targetJurusan = targetJurusan
    def getTargetJurusan(self):
        return self.__targetJurusan

    # setter and getter for targetKampus
    def setTargetKampus(self, targetKampus):
        self.__targetKampus = targetKampus
    def getTargetKampus(self):
        return self.__targetKampus

    # setter and getter for listHasilTryout
    def setHasil(self, skor, dataTryout):
        self.__listHasilTryout.append(HasilTryout(skor, dataTryout))
    def getListHasilTryout(self):
        return self.__listHasilTryout

    # override method abstract Person -> polimorfisme
    def getDetail(self):
        riwayat = self.__listHasilTryout

        # lebar nama tryout terpanjang, supaya kolom skor sejajar
        lebarNama = 0
        for hasil in riwayat:
            lebarNama = max(lebarNama, len(hasil.getTryout().getNamaTryout()))

        detail = []
        detail.append(self._nama + " (Kelas " + str(self.__kelas) + " SMA)")
        detail.append("     ├─ Kontak   : " + self._noHp + " | " + self._email)
        detail.append("     ├─ Target   : " + self.__targetJurusan + " - " + self.__targetKampus)
        detail.append("     └─ Tryout   :")
        for hasil in riwayat:
            # ljust(lebarNama) -> rata kiri, ditambah spasi sampai lebarNama
            detail.append("        - " + hasil.getTryout().getNamaTryout().ljust(lebarNama)
                          + "   (Skor : " + format(hasil.getSkor(), ".2f") + ")")
        return detail