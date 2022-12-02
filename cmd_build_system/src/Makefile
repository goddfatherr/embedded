#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

#General flags
GFLAGS = -Wall -Werror -g -O0 -std=c99

# Platform Overrides
PLATFORM = 

# Architectures Specific Flags

CPU = cortex-m4
ARCH = mthumb
MARCH = armv7e-m0plus
MFLOAT = hard
MFPU = fpv4-sp-d16
SPECS = nosys.specs
TARGET = c1m2

#Platform specific flags
LINKER_FILE = msp432p401r.lds
PLATFORM = 
# Compiler Flags and Defines
#CC = 
#LD = 
LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
CFLAGS = -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) $(GFLAGS)
CPPFLAGs = 

ifeq($(PLATFORM), HOST)
	CC = gcc
	LD = ld
else
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld	
endif

OBJS = $(SRCS:.c=.o)
