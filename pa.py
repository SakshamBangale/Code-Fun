import ipaddress

IP = input("Enter CIDR address: ")

# Create network object
n = ipaddress.IPv4Network(IP)

# First and last usable addresses
first = n[1]
last = n[-2]

# Split CIDR
cidr = IP.split("/")
print(cidr)

# Calculate total addresses
addr = 32 - int(cidr[1])
hosts = pow(2, addr)

print("Total hosts or addresses: 2^", addr, "=", hosts)
print("First Address:", first)
print("Last Address:", last)
