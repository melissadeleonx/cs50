from PIL import Image
import face_recognition

# Change the image file to test
image =  face_recognition.load_image_file(office.jpg)

face_locations = face_recognition.face_locations(image)

for face_location in face_locations:

    top, right, bottom, left = face_location

    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

