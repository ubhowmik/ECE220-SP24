.ORIG x3000
; perform C=A-B
;Call Subroutine at x4000 
;input arguments: R1 and R2
;Output: R0 = R1-R2

LD R1, A
LD R2, B
LD R4, SUB
JSRR R4
HALT

A .FILL #4
B .FILL #2
SUB .FILL x4000

.END

