#include <windows.h>
#include <stdio.h>


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    /*
    char shellcode[] = {
        0x00, 0x00 //Insert Shellcode here
    };

    void *exec = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_READWRITE);
    memcpy(exec, shellcode, sizeof shellcode);
    ((void(*)())exec)();
    */
    
	  MessageBox(0,"Zdarova","They Call me chnz2K",1);
    printf("i'am a dll cyka" );
}
