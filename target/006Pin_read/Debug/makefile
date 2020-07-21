################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
006Pin_read.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
006Pin_read.list \

OBJCOPY_BIN += \
006Pin_read.bin \


# All Target
all: 006Pin_read.elf secondary-outputs

# Tool invocations
006Pin_read.elf: $(OBJS) $(USER_OBJS) K:\Embedded-C\My_workspace\target\006Pin_read\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "006Pin_read.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"K:\Embedded-C\My_workspace\target\006Pin_read\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="006Pin_read.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

006Pin_read.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "006Pin_read.list"
	@echo 'Finished building: $@'
	@echo ' '

006Pin_read.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "006Pin_read.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
