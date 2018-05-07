################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Template\ Functions.cpp 

OBJS += \
./Template\ Functions.o 

CPP_DEPS += \
./Template\ Functions.d 


# Each subdirectory must supply rules for building sources it contributes
Template\ Functions.o: ../Template\ Functions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Template Functions.d" -MT"Template\ Functions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


