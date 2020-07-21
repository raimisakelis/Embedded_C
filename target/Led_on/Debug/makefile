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
Led_on.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Led_on.list \

OBJCOPY_BIN += \
Led_on.bin \


# All Target
all: Led_on.elf secondary-outputs

# Tool invocations
Led_on.elf: $(OBJS) $(USER_OBJS) K:\Embedded-C\My_workspace\target\Led_on\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "Led_on.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"K:\Embedded-C\My_workspace\target\Led_on\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Led_on.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Led_on.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Led_on.list"
	@echo 'Finished building: $@'
	@echo ' '

Led_on.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Led_on.bin"
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
