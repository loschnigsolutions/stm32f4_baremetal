
Project = main
Startup_file = ./startup/Startup_CM4.c

OUTPUT = final

all    :  clean $(OUTPUT).bin
flash  :  clean flash_img
debug  :  clean debug_img

Startup=Startup_CM4

CFLAGS = -c -mcpu=cortex-m4 -mthumb -O0 -Wall -std=gnu11 -g3

LFLAGS =  -nostdlib -mcpu=cortex-m4 -mthumb -T ./ld/link.ld -nostdlib -Wl,-Map=$(Project).map

TOOLCHAIN = arm-none-eabi

$(OUTPUT).elf : $(Startup).o $(Project).o
	$(TOOLCHAIN)-gcc $(LFLAGS) $(Project).o $(Startup).o -o $@
	@echo "\n=============== ELF Generated =====================\n"
	$(TOOLCHAIN)-size $@
	@echo "\n===================================================\n"

$(Startup).o : $(Startup_file)
	$(TOOLCHAIN)-gcc $(CFLAGS) $< -o $@

$(Project).o : $(Project).c
	$(TOOLCHAIN)-gcc $(CFLAGS) $< -o $@


$(OUTPUT).bin : $(OUTPUT).elf
	$(TOOLCHAIN)-objcopy -O binary $< $@ 

clean:
	@echo "\n======= Cleaning =======\n"
	rm -rf  *.o  
	rm -rf  *.elf 
	rm -rf  *.map
	rm -rf  *.bin
	@echo "\n====== Cleaned Up ======\n"

flash_img: $(OUTPUT).bin
	#st-flash erase
	st-flash write $(OUTPUT).bin 0x8000000

debug_img: $(OUTPUT).elf
	$(TOOLCHAIN)-gdb $(OUTPUT).elf

run_ocd:
	openocd -f install/st_nucleo_f4.cfg
