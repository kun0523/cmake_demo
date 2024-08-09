rmdir /S /Q build
rmdir /S /Q bin
mkdir build
cmake -S . -B build -DCOMPILE_APP=ON 
cmake --build build --config Debug