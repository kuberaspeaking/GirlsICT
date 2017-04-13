# script file to generate routines array header file

DefaultArraySize = 10
DefaultArraySizeText = '#define MAX_ROUTINE_SIZE '

DefaultValues = [ 'Red', 'Highest', '1000', 'color_off', '2']
ArrayNames =[ 'static const routine_item_t mentor_bubble_routine[MAX_ROUTINE_SIZE]',
'static const routine_item_t student_bubble_routine[MAX_ROUTINE_SIZE]',
'static const routine_item_t treasure_bubble_routine[MAX_ROUTINE_SIZE]', 
'static const routine_item_t special_bubble_routine[MAX_ROUTINE_SIZE]',
'static const routine_item_t paired_bubble_routine[MAX_ROUTINE_SIZE]',
'static const routine_item_t error_routine[MAX_ROUTINE_SIZE]']

FileStart=['#ifndef ROUTINES_ARRAY_H',
'#define	ROUTINES_ARRAY_H',
'#include "routines_defs.h"',
'#ifdef	__cplusplus',
'extern "C" {',
'#endif /* __cplusplus */',
'/*',
' * routine sizes',
' */'
]


FileEnd =['#ifdef	__cplusplus',
'}',
'#endif /* __cplusplus */',
'#endif	/* ROUTINES_H */']

FilePath = '../MplabX_template/Template.X/routines_array.h'

#clear files contents
OutputFile = open(FilePath, "w")
OutputFile.write('')
OutputFile.close()


OutputFile = open(FilePath, "w+")

for k in FileStart:
	    OutputFile.write(k+'\n')
		
OutputFile.write(DefaultArraySizeText + str(DefaultArraySize)+'\n'+'\n')

for k in ArrayNames:
	currentArray = [k+ ' = '+ '{']
	for i in range(DefaultArraySize):
		currentline = '{'
		for j in range(len(DefaultValues)):
			if(j == len(DefaultValues)-1):
				currentline += DefaultValues[j]
			else:
				currentline += DefaultValues[j] + ', '
		if(i == DefaultArraySize-1):
			currentline += '} '
		else:
			currentline += '}, '
		currentArray.append(currentline)
	currentArray.append('};')
	for i in currentArray:
		OutputFile.write(i+'\n')

for k in FileEnd:
	OutputFile.write(k+'\n')

OutputFile.close()