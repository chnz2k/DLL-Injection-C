"C:\Program Files (x86)\Dev-Cpp2\MinGW64\bin\gcc.exe" -c dll.c
"C:\Program Files (x86)\Dev-Cpp2\MinGW64\bin\gcc.exe" -shared -o output.dll -Wl,--out-implib,libtstdll.a dll.o
DEL libtstdll.a dll.o 
