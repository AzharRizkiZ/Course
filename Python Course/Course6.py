class Employee:
    "Common base class for all employee"
    empCount = 0
    
    def __init__(self, name = "Pegawai", salary = 5000):
        self.name = name
        self.salary = salary
        Employee.empCount += 1
        
    def displayCount(self):
        print("Total Employee %d" % Employee.empCount)
    
    def printEmployee(self):
        print("Nama:", self.name, "\nSalary:", self.salary)
    
    # Method Getter
    # Merupakan sebuah metode untuk mendapatkan data dari class
    def getEmployee(self, typesOfParameterClass):
        if (typesOfParameterClass == "Nama"):
            return self.name
        elif (typesOfParameterClass == "Nama"):
            return self.salary
        else:
            return "Data Tidak Ada"
    
    # Method Setter
    # Merupakan metode untuk mengubah data pada class
    def setEmployee(self, name, salary):
        self.name = name
        self.salary = salary

employee1 = Employee()

employee1.printEmployee()
employee1.displayCount()

# Contoh Implementasi Getter
Nama_pegawai = employee1.getEmployee("Umur")
print("Nama Pegawainya adalah", Nama_pegawai)

# Contoh Implementasi Setter
employee1.setEmployee("Azhar", 50000)
employee1.printEmployee()

employee2 = Employee("Gerald", 4000)

employee2.printEmployee()
employee2.displayCount()
