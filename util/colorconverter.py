# The load_color function takes RGB values between 0-1023 with 0 being
# brightest. This function converts the basic colors from
# http://www.rapidtables.com/web/color/RGB_Color.htm

colorlist = [(0,0,0),
             (255,255,255),
             (255,0,0),
             (0,255,0),
             (0,0,255),
             (255,255,0),
             (0,255,255),
             (255,0,255),
             (192,192,192),
             (128,128,128),
             (128,0,0),
             (128,128,0),
             (0,128,0),
             (128,0,128),
             (0,128,128),
             (0,0,128)]

NamesList=[
'off    ',
'White  ',
'Red    ',
'Lime   ',
'Blue   ',
'Yellow ',
'Cyan   ',
'Magenta',
'Silver ',
'Gray   ',
'Maroon ',
'Olive  ',
'Green  ',
'Purple ',
'Teal   ',
'Navy   '
]		 
			 
def convertColor(colorTuple):
    r = 255 - colorTuple[0]
    g = 255 - colorTuple[1]
    b = 255 - colorTuple[2]
    return str((r,g,b))

convertedColorList = [convertColor(color) for color in colorlist]
ColorVals =[]
for i in range(len(convertedColorList)):
	spaces = ' '
	ColorVal = convertedColorList[i].replace('(', '{').replace(')', '}')+ ','
	spaces = spaces *(len(convertedColorList[0])-len(convertedColorList[i]))
	ColorVal += spaces
	ColorVals.append(ColorVal)
assert len(ColorVals) == len(NamesList)
for i in range(len(ColorVal)):
	FinalList =[(ColorVals[i]+ ' //'+ NamesList[i]) for i in range(len(ColorVals))]
for final in FinalList:
	print(final)
