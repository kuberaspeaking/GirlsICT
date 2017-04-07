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

def convertColor(colorTuple):
    r = 1023 - 4*colorTuple[0]
    g = 1023 - 4*colorTuple[1]
    b = 1023 - 4*colorTuple[2]
    return (r,g,b)

convertedColorList = [convertColor(color) for color in colorlist]

print(str(convertedColorList).replace('(', '{').replace(')', '}'))
