CS211_Lab3
=====

Lab assignment THREE from Programming for Engineers I in C

Part A/B
===
Create a new directory and copy the file skeleton.c, into it. Rename skeleton.c to lab3.c. Then, write a Makefile which will compile, assemble and link this file into an executable called "lab3". Do not forget to add "-Wall" to each gcc command. Then, run "make" from within that directory and be sure your Makefile works.

Create a new C function which will count the number of vowels (A, E, I, O or U, capital or lower case) in a string passed to it, and return that number (as an "int"). Note that the type of the string passed into this function should be "const char *" - as strings are really arrays of "char"s - which, in turn, are really constant pointers to "char"s).

Add to your main program several test calls to this function, and print out the strings passed in and the responses to the screen. Be sure to check any corner cases you can think of.

Part C
====
Add another C function to your program which returns nothing (void), but takes two writable strings and compares them. If the first is alphabetically (see here) after the second, then your function should completely swap the contents of the two strings before returning. It is the caller's responsibility to be sure the memory the strings reside in is writable and that there is enough space in the array holding each to hold the other should they need to be swapped (and you should note these limitations in the comments for this function).

Note that this sort should NOT be case-sensitive (so neither "Ape" nor "ape" is alphabetically after the other). Non-letters should be entirely ignored and skipped (so neither "ape" or "432a--P. E++" is alphabetically after the other). Also, shorter words should be sorted before longer words which contain that entire shorter word at their beginning (so "fish" comes before "Fisher").

Add to your main program several tests of this, outputting the results of each.

Part D
=====
Modify the function you wrote for part C. Make it return a value of type "int". This returned value should be "false" (or 0) if it did not swap the strings, or "true" (or 1) if it did swap them.

Create an appropriate array of 20 writable strings, each with different values, and print this entire list out. Call your function on each sequential pair, moving one at a time (meaning, first call it with #0 and #1, then with #1 and #2, then #2 and #3...). Keep track of how many times the function does swap a pair, and output this number.

Repeat this previous step on the whole list until none of the pairs are swapped, and print out the entire list again after this is done.
