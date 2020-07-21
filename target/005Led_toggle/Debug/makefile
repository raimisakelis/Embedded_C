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
005Led_toggle.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
005Led_toggle.list \

OBJCOPY_BIN += \
005Led_toggle.bin \


# All Target
all: 005Led_toggle.elf secondary-outputs

# Tool invocations
005Led_toggle.elf: $(OBJS) $(USER_OBJS) K:\Embedded-C\My_workspace\target\005Led_toggle\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "005Led_toggle.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"K:\Embedded-C\My_workspace\target\005Led_toggle\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="005Led_toggle.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

005Led_toggle.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "005Led_toggle.list"
	@echo 'Finished building: $@'
	@echo ' '

005Led_toggle.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "005Led_toggle.bin"
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
