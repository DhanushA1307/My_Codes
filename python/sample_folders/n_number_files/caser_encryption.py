def encrypt_text(plaintext,n):
    ans = ""
    for i in range(len(plaintext)):
        ch = plaintext[i]
        if ch==" ":
            ans+=" "
        elif (ch.isupper()):
            ans += chr((ord(ch) + n-65) % 26 + 65)
        else:
            ans += chr((ord(ch) + n-97) % 26 + 97)
    return ans

def decrypt(plaintext, n):
    return (encrypt_text(plaintext,26-n))

msg = "Anna University"
print(encrypt_text(msg,3))
print()
print(decrypt(encrypt_text(msg,3),3))