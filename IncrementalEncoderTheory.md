# Patterns
Rough theory notes to make sense of it all!
Armaan K
2022/11/12

## Increment
### Basic
-B <- (Position--)
-A
+B
+A

### Double
-B <- (Position--)
-A
+B <- (Position--)
+A

### States
(+A,-B)
(-A,-B)
(-A,+B)
(+A,+B)

### Relative Changes
(A == 1 && B_f < B_i)
(A_f < A_i && B == 0)
(A == 0 && B_f > B_i)
(A_f > A_i && B == 1)


## Decrement
### Basic
-A <- (Position++)
-B
+A
+B

### Double
-A <- (Position++)
-B
+A <- (Position++)
+B

### States
(-A,+B)
(-A,-B)
(+A,-B)
(+A,+B)

### Relative Changes
(A_f < A_i && B == 1)
(A == 0 && B_f < B_i)
(A_f > A_i && B == 0)
(A == 1 && B_f > B_i)