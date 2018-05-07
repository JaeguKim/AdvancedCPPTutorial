################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Custom\ Objects\ as\ Map\ Values.cpp 

OBJS += \
./src/Custom\ Objects\ as\ Map\ Values.o 

CPP_DEPS += \
./src/Custom\ Objects\ as\ Map\ Values.d 


# Each subdirectory must supply rules for building sources it contributes
src/Custom\ Objects\ as\ Map\ Values.o: ../src/Custom\ Objects\ as\ Map\ Values.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Custom Objects as Map Values.d" -MT"src/Custom\ Objects\ as\ Map\ Values.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


