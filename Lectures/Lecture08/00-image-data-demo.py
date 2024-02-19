from PIL import Image
import numpy as np

# Define the RGB color data for a 2x2 image
image_data = [
    [(255, 0, 0), (0, 255, 0)],  # First row: red, green
    [(0, 0, 255), (255, 255, 255)]  # Second row: blue, white
]

# Convert the image data to a format suitable for Pillow
data = np.array(image_data, dtype=np.uint8)  # Converts the RGB tuples to a numpy array

# Create an Image object from the numpy array
image = Image.fromarray(data, 'RGB')

# Save or display the image
image.save('output_image.png')
image.show()
