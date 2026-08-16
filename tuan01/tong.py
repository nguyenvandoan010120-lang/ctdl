import sys

input_data = sys.stdin.read().split()

def main():
    if not input_data:
        return
        
    n = int(input_data[0])
    a = [int(x) for x in input_data[1:n+1]]
    
    sumv = sum(a) # dung luon ham sum va max co san
    maxv = max(a)
    
    print(f"{sumv} {maxv}")

if __name__ == "__main__":
    main()
