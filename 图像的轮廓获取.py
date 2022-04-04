from PIL import Image
from PIL import ImageFilter
im = Image.open('R-C.jpg')
om = im.filter(ImageFilter.CONTOUR)
om.save('R-CContour.jpg')
