################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
main.obj: ../main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"/home/matt/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="/home/matt/ti/ccsv8/ccs_base/msp430/include" --include_path="/home/matt/School/Embedded/lab-1-gpio-raineym5/Simple Blink/MSP430G2553" --include_path="/home/matt/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="main.d_raw" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


