.ORIG x3000
; perform C=A-B

LD R1, A
LD R2, B
JSR SUB
HALT

;Subroutine: SUB 
;input arguments: R1 and R2
;Output: R0 = R1-R2

SUB 
   NOT R2, R2
   ADD R2, R2, #1
   ADD R0, R1, R2
   RET


A .FILL #4
B .FILL #2

.END


