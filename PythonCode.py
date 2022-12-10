import re
import string


salesDict = {}
l = []

def ProcessData():
   s = ''
   count = 0
   f = open('C:\\Users\\John\\source\\repos\\cs210\\Cs210_Project3\\ReadWrite\\P3InputFile.txt', "r")
   l = f.readlines()
   for x in l:
      s = l[count].strip()
      count += 1
      if salesDict.get(s, "None") == "None":
         salesDict.update({s: 1})
      else:
         salesDict.update({s: salesDict.get(s) + 1})
   f.close()

def PrintData():
    ProcessData()
    count = 0
    for x in range(len(salesDict)):
        print(list(salesDict)[count], salesDict.get(list(salesDict)[count]))
        count += 1

def GetAmount(v):
   ProcessData()
   if salesDict.get(v, "None") == "None":
       return 0;
   return salesDict.get(v);

def WriteToFile():
    ProcessData()
    f = open("C:\\Users\\John\\source\\repos\\cs210\\Cs210_Project3\\ReadWrite\\frequency.dat", "w")
    count = 0
    for x in range(len(salesDict)):
       f.write(list(salesDict)[count])
       f.write(' ')
       f.write(str(salesDict.get(list(salesDict)[count])))
       f.write(' ')
       count += 1
    f.close()