.ORIG x3000
; perform C=A-B
;Check the result ODD or EVEN

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
   ST R7, SAVER7
   ADD R3,R0,#0
   JSR ODD_EVEN
   LD R7,SAVER7
   RET

; Subroutine: ODD_EVEN
;input arguments: R3
;output R4=1; if ODD 
;output R4=0; if EVEN
 
ODD_EVEN
		AND R4, R4, #0
		ADD R4, R4, #1
		AND R4, R3, R4
		RET

A .FILL #4
B .FILL #3
SAVER7 .BLKW #1
.END


