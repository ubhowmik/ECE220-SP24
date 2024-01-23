.ORIG x3000
; perform C=A-B

LD R1, A
LD R2, B
LEA R4, SUB
JSRR R4
HALT

A .FILL #4
B .FILL #2
;
; some othercode long code
;
;Subroutine: SUB 
;input arguments: R1 and R2
;Output: R0 = R1-R2

SUB 
   NOT R2, R2
   ADD R2, R2, #1
   ADD R0, R1, R2
   RET

.END

