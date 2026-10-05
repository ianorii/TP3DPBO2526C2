from abc import ABC, abstractmethod

# class abstract: tidak bisa diinstansiasi langsung
class Person(ABC):
    # constructor
    def __init__(self, nama="", noHp="", email=""):
        self._nama = nama
        self._noHp = noHp
        self._email = email

    # setter and getter for nama
    def setNama(self, nama):
        self._nama = nama
    def getNama(self):
        return self._nama

    # setter and getter for noHp
    def setNoHp(self, noHp):
        self._noHp = noHp
    def getNoHp(self):
        return self._noHp

    # setter and getter for email
    def setEmail(self, email):
        self._email = email
    def getEmail(self):
        return self._email

    # method abstract: hanya deklarasi tanpa isi
    @abstractmethod
    def getDetail(self):
        pass