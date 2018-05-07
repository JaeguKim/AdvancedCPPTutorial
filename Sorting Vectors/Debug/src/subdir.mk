################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Sorting\ Vectors.cpp 

OBJS += \
./src/Sorting\ Vectors.o 

CPP_DEPS += \
./src/Sorting\ Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
src/Sorting\ Vectors.o: ../src/Sorting\ Vectors.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Sorting Vectors.d" -MT"src/Sorting\ Vectors.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


