#Author: Carlos Carrillo
#Date:   10/22/2015
#Description: This is the makefile for Lab_4

#This target will compile the entire program
All: total

total:	recursion.o  
	g++ recursion.o -o recursion

gameOfLife.o: recursion.cpp
	g++ -c recursion.cpp

clean:
	rm -rf *o total