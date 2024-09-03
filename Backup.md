Deskripsi :
Full Stack Developer adalah tugas seorang pengembang website yang bertanggung jawab 
penuh sebuah website. Sebelum memasuki course ini, kita harus memahami apa itu front-
end dan back-end.
Front-End: Bertugas untuk mengembangkan tampilan dari warna, bentuk hingga animasi 
pada sebuah website.
Back-End: Bertugas untuk mengatur alur data seperti database dan infrastrukturnya 
untuk mensupport tampilan dari website.
Full stack developer merangkum dua dari pekerjaan tersebut. Profesi ini juga dikatakan 
sebagai gabungan web design, database administration dan web developer. 
Karena dalam beberapa hal dua profesi itu saling berkaitan, banyak perusahaan yang 
membutuhkan satu orang yang menguasai keduanya, yaitu full stack developer.
Sertifikat :
Binus Center
Materi:
1. HTML5
2. JavaScript
3. CSS
4. PHP
Durasi :
23 x 3 jam
Materi :
HTML, JavaScript & CSS
 Learn HTML
o Basic Element
o Formatting Text
o Link & List
 Tag
o More Tag HTML
o Object & Image
o Table with Colspan & Rowspan
 Form
o Form Attribut
o Input Element
o Linked Form
 Styling a Website
o Style Sheet Definition
o CSS Struct
o CSS Element
o Hiding Style Sheet
 Getting Started with JavaScript
o Input output
o Data Type
o Operator
 Decision and Logical Thinking
o Decision IF
o If with Operator
o Looping
 Data Rotation
o Array
o Function
o Date Object
 Security Form
o Form Validation
o Regular Expression
o Animation
 Building Interactive JavaScript Websites
o Learn the Document Object Model
o Setting interface between JavaScript and HTML elements
o Combine HTML, CSS, and JavaScript into exciting interactive sites
 Intermediate JavaScript
o Reusable classes
o Splitting code into modules
o Making HTTP requests
PHP
 Intro Web Technology & Server-Side Script
o Intro XAMPP & IDE Visual Code
o Web Server & Configuration
o Variable & Operator
 Array & Function
o Array
o Function
 Form handling & Regex
o Form Handling
o Request
o Validation
o Pattern
 File 
o File Manipulation
o File I/O
o File Upload
 Cookies
o Cookies Handling
 Session
o Session Handling
o User Validation
 Database Connectivity
o Connecting to Database
o Data Interaction
o User Management
o Content Management
Sesi ( Urutan materi) bukan bersifat baku, penyesuaian bisa dilakukan seperlunya oleh 
pengajar demi pencapaian proses belajar mengajar yang optimal.




from datetime import datetime
from pytz import timezone
import re

def generate():
    
    date = datetime.now()
    
    hours = date.hour + 7
    
    if ( hours == 31 ):
        hours = 0 + 7
    elif ( hours == 30 ):
        hours = -1 + 7
    elif ( hours == 29 ):
        hours = -2 + 7
    
    minutes = date.minute
    
    seconds = date.second
    
    tz = timezone("Etc/GMT+7")
    new_date = date.replace(tzinfo=tz)
    
    readme_replacement = f'Updated: {new_date.strftime("%d/%m/%Y")}' + ' ' + str(hours) + ':' + str(minutes) + ':' + str(seconds) + ' Western Indonesia Time'
    
    print(readme_replacement)

generate()







