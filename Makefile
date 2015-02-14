subject = TwoSum.cpp

a.out: $(subject)
	g++ -std=c++11 $(subject)

.PHONY:run, o, test, clean
run :
	./a.out
o: $(subject)
	g++ -std=c++11 -c $(subject)
test: $(subject)
	g++ -std=c++11 -g $(subject) 
clean:
	-rm *.o a.out
