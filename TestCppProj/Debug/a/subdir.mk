################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../a/AcessSqlite.cpp \
../a/TestCgi.cpp \
../a/Thread.cpp 

C_SRCS += \
../a/Addition.c 

OBJS += \
./a/AcessSqlite.o \
./a/Addition.o \
./a/TestCgi.o \
./a/Thread.o 

C_DEPS += \
./a/Addition.d 

CPP_DEPS += \
./a/AcessSqlite.d \
./a/TestCgi.d \
./a/Thread.d 


# Each subdirectory must supply rules for building sources it contributes
a/%.o: ../a/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

a/%.o: ../a/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


