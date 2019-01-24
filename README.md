# Simple Assembler [![License](https://img.shields.io/github/license/Chris-1101/boxecho.svg)](https://github.com/Chris-1101/boxecho/blob/master/LICENSE.md)
A personal project via which I aim to learn a bit about assembly by programming an interpretive implementation of select opcode mnemonics.

### Implemented Instructions
* ✔ `MOV x, y` <u>Mov</u>e the contents of register `y` into register `x` (`x = y`)
* ✔ `INC x` <u>Inc</u>rement register `x` by one (`x++`)
* ✔ `DEC x` <u>Dec</u>rement register `x` by one (`x--`)
* ✔ `ADD x, y` <u>Add</u> the contents of register `y` to `x` (`x += y`)
* ✔ `SUB x, y` <u>Sub</u>tract the contents of register `y` from `x` (`x -= y`)
* ✔ `MUL x, y` <u>Mul</u>tiply the contents of register `x` and `y`, store result in `x` (`x *= y`)
* ✔ `DIV x, y` Integer <u>div</u>ide the contents of register `x` by `y`, store result in `x` (`x /= y`)


* ✔ `JNZ x, y` <u>J</u>ump `y` instructions if register `x` is <u>N</u>ot <u>Z</u>ero
* ✔ `;` Comment, ignored by the interpreter

### Planned Instructions
* ✘ `label:` Define a position within the code reachable by the `label` identifier
* ✘ `call lbl` Procedure <u>call</u> to the subroutine identified by the label `lbl`
* ✘ `ret` <u>Ret</u>urn to the instruction that called the current subroutine


* ✘ `CMP x, y` <u>C</u>o<u>mp</u>are the contents of registers `x` and `y` (result used by other instructions)
* ✘ `JNE lbl` <u>J</u>ump to the label `lbl` if the values of the previous `CMP` were <u>N</u>ot <u>E</u>qual
* ✘ `JE lbl` <u>J</u>ump to the label `lbl` if the values of the previous `CMP` were <u>E</u>qual
* ✘ `JGE lbl` <u>J</u>ump to the label `lbl` if register `x` was <u>G</u>reater than or <u>E</u>qual to `y` in the previous `CMP`
* ✘ `JG lbl` <u>J</u>ump to the label `lbl` if register `x` was <u>G</u>reater than `y` in the previous `CMP`
* ✘ `JLE lbl` <u>J</u>ump to the label `lbl` if register `x` was <u>L</u>esser than or <u>E</u>qual to `y` in the previous `CMP`
* ✘ `JL lbl` <u>J</u>ump to the label `lbl` if register `x` was <u>L</u>esser than `y` in the previous `CMP`

### Further Instructions
Reference: [Intel 80x86 ASM Opcodes](http://www.mathemainzel.info/files/x86asmref.html)
