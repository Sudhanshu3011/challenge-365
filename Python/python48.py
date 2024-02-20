from PyPDF2 import PdfWriter
import os 

merger=PdfWriter()
Myfiles=[file for file in os.listdir() if file.endswith(".pdf")]

for pdf in Myfiles:
    merger.append(pdf)

merger.write("merged-pdf.pdf")
merger.close()