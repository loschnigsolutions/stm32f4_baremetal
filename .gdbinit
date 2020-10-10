
target remote localhost:3333

layout next

monitor reset halt

monitor flash write_image erase ./final.elf

b main

c
