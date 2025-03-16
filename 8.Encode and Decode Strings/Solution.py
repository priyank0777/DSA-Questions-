def encode(strs):
    encoded = []
    for s in strs:
        encoded.append(f"{len(s)}#{s}")
    return ''.join(encoded)

def decode(s):
    decoded = []
    i = 0
    while i < len(s):
        j = i
        while s[j] != '#':
            j += 1
        length = int(s[i:j])
        decoded.append(s[j+1 : j+1 + length])
        i = j + 1 + length
    return decoded

# Example usage
input_strs = ["neet", "code", "love", "you"]
encoded_str = encode(input_strs)
print("Encoded:", encoded_str)
decoded_strs = decode(encoded_str)
print("Decoded:", decoded_strs)
