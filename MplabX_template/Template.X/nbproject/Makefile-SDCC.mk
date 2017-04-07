#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-SDCC.mk)" "nbproject/Makefile-local-SDCC.mk"
include nbproject/Makefile-local-SDCC.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=SDCC
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=cof
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=cof
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=mcc_generated_files/tmr6.c mcc_generated_files/tmr2.c mcc_generated_files/tmr4.c mcc_generated_files/eusart.c mcc_generated_files/pin_manager.c mcc_generated_files/pwm1.c mcc_generated_files/mcc.c mcc_generated_files/pwm3.c mcc_generated_files/pwm4.c main.c Library.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/mcc_generated_files/tmr6.o ${OBJECTDIR}/mcc_generated_files/tmr2.o ${OBJECTDIR}/mcc_generated_files/tmr4.o ${OBJECTDIR}/mcc_generated_files/eusart.o ${OBJECTDIR}/mcc_generated_files/pin_manager.o ${OBJECTDIR}/mcc_generated_files/pwm1.o ${OBJECTDIR}/mcc_generated_files/mcc.o ${OBJECTDIR}/mcc_generated_files/pwm3.o ${OBJECTDIR}/mcc_generated_files/pwm4.o ${OBJECTDIR}/main.o ${OBJECTDIR}/Library.o
POSSIBLE_DEPFILES=${OBJECTDIR}/mcc_generated_files/tmr6.o.d ${OBJECTDIR}/mcc_generated_files/tmr2.o.d ${OBJECTDIR}/mcc_generated_files/tmr4.o.d ${OBJECTDIR}/mcc_generated_files/eusart.o.d ${OBJECTDIR}/mcc_generated_files/pin_manager.o.d ${OBJECTDIR}/mcc_generated_files/pwm1.o.d ${OBJECTDIR}/mcc_generated_files/mcc.o.d ${OBJECTDIR}/mcc_generated_files/pwm3.o.d ${OBJECTDIR}/mcc_generated_files/pwm4.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/Library.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/mcc_generated_files/tmr6.o ${OBJECTDIR}/mcc_generated_files/tmr2.o ${OBJECTDIR}/mcc_generated_files/tmr4.o ${OBJECTDIR}/mcc_generated_files/eusart.o ${OBJECTDIR}/mcc_generated_files/pin_manager.o ${OBJECTDIR}/mcc_generated_files/pwm1.o ${OBJECTDIR}/mcc_generated_files/mcc.o ${OBJECTDIR}/mcc_generated_files/pwm3.o ${OBJECTDIR}/mcc_generated_files/pwm4.o ${OBJECTDIR}/main.o ${OBJECTDIR}/Library.o

# Source Files
SOURCEFILES=mcc_generated_files/tmr6.c mcc_generated_files/tmr2.c mcc_generated_files/tmr4.c mcc_generated_files/eusart.c mcc_generated_files/pin_manager.c mcc_generated_files/pwm1.c mcc_generated_files/mcc.c mcc_generated_files/pwm3.c mcc_generated_files/pwm4.c main.c Library.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-SDCC.mk dist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/mcc_generated_files/tmr6.o: mcc_generated_files/tmr6.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/tmr6.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/tmr6.c  -o${OBJECTDIR}/mcc_generated_files/tmr6.o
	
${OBJECTDIR}/mcc_generated_files/tmr2.o: mcc_generated_files/tmr2.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/tmr2.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/tmr2.c  -o${OBJECTDIR}/mcc_generated_files/tmr2.o
	
${OBJECTDIR}/mcc_generated_files/tmr4.o: mcc_generated_files/tmr4.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/tmr4.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/tmr4.c  -o${OBJECTDIR}/mcc_generated_files/tmr4.o
	
${OBJECTDIR}/mcc_generated_files/eusart.o: mcc_generated_files/eusart.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/eusart.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/eusart.c  -o${OBJECTDIR}/mcc_generated_files/eusart.o
	
${OBJECTDIR}/mcc_generated_files/pin_manager.o: mcc_generated_files/pin_manager.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pin_manager.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/pin_manager.c  -o${OBJECTDIR}/mcc_generated_files/pin_manager.o
	
${OBJECTDIR}/mcc_generated_files/pwm1.o: mcc_generated_files/pwm1.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pwm1.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/pwm1.c  -o${OBJECTDIR}/mcc_generated_files/pwm1.o
	
${OBJECTDIR}/mcc_generated_files/mcc.o: mcc_generated_files/mcc.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/mcc.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/mcc.c  -o${OBJECTDIR}/mcc_generated_files/mcc.o
	
${OBJECTDIR}/mcc_generated_files/pwm3.o: mcc_generated_files/pwm3.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pwm3.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/pwm3.c  -o${OBJECTDIR}/mcc_generated_files/pwm3.o
	
${OBJECTDIR}/mcc_generated_files/pwm4.o: mcc_generated_files/pwm4.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pwm4.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 mcc_generated_files/pwm4.c  -o${OBJECTDIR}/mcc_generated_files/pwm4.o
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}" 
	${RM} ${OBJECTDIR}/main.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 main.c  -o${OBJECTDIR}/main.o
	
${OBJECTDIR}/Library.o: Library.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}" 
	${RM} ${OBJECTDIR}/Library.o 
	${MP_CC} --use-non-free -V --debug -c -mpic14 -p16lf1614 Library.c  -o${OBJECTDIR}/Library.o
	
else
${OBJECTDIR}/mcc_generated_files/tmr6.o: mcc_generated_files/tmr6.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/tmr6.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/tmr6.c  -o${OBJECTDIR}/mcc_generated_files/tmr6.o
	
${OBJECTDIR}/mcc_generated_files/tmr2.o: mcc_generated_files/tmr2.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/tmr2.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/tmr2.c  -o${OBJECTDIR}/mcc_generated_files/tmr2.o
	
${OBJECTDIR}/mcc_generated_files/tmr4.o: mcc_generated_files/tmr4.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/tmr4.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/tmr4.c  -o${OBJECTDIR}/mcc_generated_files/tmr4.o
	
${OBJECTDIR}/mcc_generated_files/eusart.o: mcc_generated_files/eusart.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/eusart.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/eusart.c  -o${OBJECTDIR}/mcc_generated_files/eusart.o
	
${OBJECTDIR}/mcc_generated_files/pin_manager.o: mcc_generated_files/pin_manager.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pin_manager.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/pin_manager.c  -o${OBJECTDIR}/mcc_generated_files/pin_manager.o
	
${OBJECTDIR}/mcc_generated_files/pwm1.o: mcc_generated_files/pwm1.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pwm1.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/pwm1.c  -o${OBJECTDIR}/mcc_generated_files/pwm1.o
	
${OBJECTDIR}/mcc_generated_files/mcc.o: mcc_generated_files/mcc.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/mcc.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/mcc.c  -o${OBJECTDIR}/mcc_generated_files/mcc.o
	
${OBJECTDIR}/mcc_generated_files/pwm3.o: mcc_generated_files/pwm3.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pwm3.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/pwm3.c  -o${OBJECTDIR}/mcc_generated_files/pwm3.o
	
${OBJECTDIR}/mcc_generated_files/pwm4.o: mcc_generated_files/pwm4.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}/mcc_generated_files" 
	${RM} ${OBJECTDIR}/mcc_generated_files/pwm4.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 mcc_generated_files/pwm4.c  -o${OBJECTDIR}/mcc_generated_files/pwm4.o
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}" 
	${RM} ${OBJECTDIR}/main.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 main.c  -o${OBJECTDIR}/main.o
	
${OBJECTDIR}/Library.o: Library.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} "${OBJECTDIR}" 
	${RM} ${OBJECTDIR}/Library.o 
	${MP_CC} --use-non-free -V -c -mpic14 -p16lf1614 Library.c  -o${OBJECTDIR}/Library.o
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} -Wl-c -Wl-m --use-non-free -V -mpic14 -p16lf1614 ${OBJECTFILES_QUOTED_IF_SPACED} -odist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} 
else
dist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} -Wl-c -Wl-m --use-non-free -V -mpic14 -p16lf1614 ${OBJECTFILES_QUOTED_IF_SPACED} -odist/${CND_CONF}/${IMAGE_TYPE}/Template.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/SDCC
	${RM} -r dist/SDCC

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
