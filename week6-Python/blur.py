from PIL import Image, ImageFilter

before = Image.open ("tiger.bmp")
after = before.filter(ImageFilter.BLUR)
after.save("out.bmp")