ORG 00H
SJMP MAIN
ORG 0BH
CPL P1.7
RETI
MAIN:
MOV R0,#40H
CLR P0.7
MOV A,#55H
MOV IE,#82H
MOV TMOD,#22H
MOV TH0,#81H
MOV TH1,#-6
MOV SCON,#50H
SETB TR0
SETB TR1
LOOP:
BK:JNB RI,BK
MOV A,SBUF
MOV @R0,A
INC R0
CLR RI
SJMP LOOP
HLT:SJMP HLT
