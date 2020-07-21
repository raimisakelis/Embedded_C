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
009Packed_VsNonPacked.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
009Packed_VsNonPacked.list \

OBJCOPY_BIN += \
009Packed_VsNonPacked.bin \


# All Target
all: 009Packed_VsNonPacked.elf secondary-outputs

# Tool invocations
009Packed_VsNonPacked.elf: $(OBJS) $(USER_OBJS) K:\Embedded-C\My_workspace\target\009Packed_VsNonPacked\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "009Packed_VsNonPacked.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"K:\Embedded-C\My_workspace\target\009Packed_VsNonPacked\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="009Packed_VsNonPacked.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

009Packed_VsNonPacked.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "009Packed_VsNonPacked.list"
	@echo 'Finished building: $@'
	@echo ' '

009Packed_VsNonPacked.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "009Packed_VsNonPacked.bin"
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
