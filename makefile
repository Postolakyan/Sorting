sorting : bsortf.o qsortf.o bsortm.o bsorth.hpp
	g++ $^ -o $@
%.o : %.cpp
	g++ -c $^ -o $@
clean :
	rm -r *.o sorting
