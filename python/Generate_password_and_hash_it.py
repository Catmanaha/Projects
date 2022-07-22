import string
import random
import hashlib

characters = list(string.ascii_letters + string.digits + "!@#$%^&*()")

def generate():
    global pass_list
    length = int(input("Enter password length: "))
    random.shuffle(characters)

    password = []
    for i in range(length):
        password.append(random.choice(characters))

    random.shuffle(password)

    pass_list = ("".join(password))
    print(pass_list)

generate()

global pass_list
hashformat = hashlib.new('sha256')
hashformat.update(pass_list.encode())
print(hashformat.hexdigest())