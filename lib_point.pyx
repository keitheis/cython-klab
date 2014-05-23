cdef struct Point:
    int x
    int y

def main():
    cdef Point p
    p.x = 10
    p.y = 20
    print(p.x, p.y)
