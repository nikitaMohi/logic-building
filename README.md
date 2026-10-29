mall practice programs showing how to read a name, age and marks from the keyboard in C and Java, and the pitfalls of reading strings with spaces.

Files
File	Language	Purpose
program25.c	C	Read a name with scanf("%s")
program26.c	C	Read a name with spaces using scanf("%[^\n]")
program30.c	C	Read name, age and marks together
program27.java	Java	Scanner input, contains intentional compile errors
program28.java	Java	Scanner with next(), nextInt(), nextFloat(
scanf("%s", name) stops at the first whitespace. Input Rahul Sharma stores only Rahul; the rest stays in the input buffer.
scanf("%[^\n]", name) reads everything until Enter, so full names with spaces work. (program26.c and program30.c write %[^'\n']s; the ' also excludes apostrophes and the trailing s is unnecessary. %[^\n] is enough.)
Leftover newline: after scanf("%d", &age) the Enter key remains in the buffer. This is harmless before another %d or %f (they skip whitespace) but breaks a following %c or %[^\n] read.
Buffer safety: sName holds 30 chars. Prefer %29[^\n] to avoid overflow.
Java
next() reads one token (stops at whitespace). With Rahul Sharma, next() returns Rahul, then nextInt() hits Sharma and throws InputMismatchException (see program28.java).
nextLine() reads the whole line, so it handles names with spaces (program29.java).
Order matters: nextInt() / nextFloat() 
Java

bash
javac program29.java
java program29
Key Takeaways
Use %[^\n] (C) or nextLine() (Java) for text with spaces.
%s and next() read a single word only.
Numeric reads leave the Enter key in the buffer, so read line-based input first or consume the leftover newline.
