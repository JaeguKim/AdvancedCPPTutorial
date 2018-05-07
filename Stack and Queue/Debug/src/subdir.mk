################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Stack\ and\ Queue.cpp 

OBJS += \
./src/Stack\ and\ Queue.o 

CPP_DEPS += \
./src/Stack\ and\ Queue.d 


# Each subdirectory must supply rules for building sources it contributes
src/Stack\ and\ Queue.o: ../src/Stack\ and\ Queue.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Stack and Queue.d" -MT"src/Stack\ and\ Queue.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


