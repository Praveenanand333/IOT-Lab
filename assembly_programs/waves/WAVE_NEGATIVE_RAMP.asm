;NEGATIVE RAMP

ORG 0000
CLR A
CLR P0.7

UP: 
	ADD A,#25
	MOV P1,A
	CJNE A,#100,UP

DOWN:
	SUBB A,#04
	MOV P1,A
	CJNE A,#0,DOWN
	SJMP UP

END
