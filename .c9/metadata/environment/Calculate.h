{"filter":false,"title":"Calculate.h","tooltip":"/Calculate.h","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":49,"column":1},"action":"insert","lines":["#include <iostream>","#include <string>","using namespace std;","","class partTimeEmployee{","\tpublic:","","\t\tpartTimeEmployee(){","\t\t\tpayRate = 0;","\t\t\thoursWorked = 0;","\t\t}","\t\tvoid print(){","\t\t\tcout<<\"Hi \" << first_name<<\" \" <<last_name<<\"! Your wage is: $\"<<calculatePay();","\t\t\t","","\t\t}","","\t\tint calculatePay(){","\t\t\t","\t\t","\t\t\t","\t\t\treturn payRate * hoursWorked;","","","\t\t}","\t\tvoid setName(string first, string last){","\t\t\tfirst_name = first;","\t\t\tlast_name = last;","","","\t\t}","\t\tvoid setRate(int ammount){","","\t\t\tpayRate = ammount;","","\t\t}","\t\tvoid setHours(int ammount){","","\t\t\thoursWorked = ammount;","","\t\t}","\tprivate:","","\t\tstring first_name, last_name;","\t\tint  payRate,hoursWorked;","","","","};"," "],"id":1}]]},"ace":{"folds":[],"scrolltop":407,"scrollleft":0,"selection":{"start":{"row":49,"column":1},"end":{"row":49,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1654098503157,"hash":"752a0fe5d3d93c59e982631ba4619be51582f74b"}