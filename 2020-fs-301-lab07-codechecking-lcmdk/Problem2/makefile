

ASAN: program
	g++ -g -fsanitize=address -fno-omit-frame-pointer prob2.cpp -o program
export ASAN_SYMBOLIZER_PATH=hich llvm-symbolizer export
ASAN_OPTIONS=symbolize=1


program: prob2.cpp
	g++ -g prob2.cpp -o program

.PHONY: clean

clean:
	rm -f program
