################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMA\ basicConcepts.c 

OBJS += \
./DMA\ basicConcepts.o 

C_DEPS += \
./DMA\ basicConcepts.d 


# Each subdirectory must supply rules for building sources it contributes
DMA\ basicConcepts.o: ../DMA\ basicConcepts.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"DMA basicConcepts.d" -MT"DMA\ basicConcepts.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


