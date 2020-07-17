##########################################################################
# FILE		: Makefile
# DESCRIPTION	: Program to count digits of a given number using recursion.
# AUTHOR	: GLADSON HANSDA
# DATED		: 18/07/2020
# ########################################################################


execute_file:	count_digit_of_numbers.o noOfDigits.o
		gcc -o execute_file count_digit_of_numbers.c noOfDigits.c

count_digit_of_numbers:	count_digit_of_numbers.c
			gcc -c count_digit_of_numbers.c

noOfDigits.o:	noOfDigits.c
		gcc -c noOfDigits.c

clean:	
	rm -rf execute_file
	rm -rf /home/gladson/Desktop/Practice/program_practice/recursion/count_digit_of_number/obj/*.o

putobj:	
	mv *.o /home/gladson/Desktop/Practice/program_practice/recursion/count_digit_of_number/obj/




##########################################################################
			      #Makefile#
##########################################################################
