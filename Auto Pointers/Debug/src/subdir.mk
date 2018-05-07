################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Auto\ Pointers.cpp 

OBJS += \
./src/Auto\ Pointers.o 

CPP_DEPS += \
./src/Auto\ Pointers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Auto\ Pointers.o: ../src/Auto\ Pointers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Auto Pointers.d" -MT"src/Auto\ Pointers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


