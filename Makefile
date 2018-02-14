objs = HelloCpp.o

CPPFLAGS = -I ./Class/*.h ./basic/BuildinTypes/*.h

hello-cpp : $(objs)
	g++ -o hello-cpp $(objs)
	echo "command must be begin with tab, vim use 'set noexpandtab'"

HelloCpp.o :
	g++ -c HelloCpp.cpp

.PHONY : clean
clean:
	-rm hello-cpp $(objs)
	echo "rm命令前面加了一个小减号:也许某些文件出现问题，但不要管，继续做后面的事"
