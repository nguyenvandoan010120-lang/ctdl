import sys

# Đọc dữ liệu từ file test truyền vào
input_data = sys.stdin.read().split()

def main():
    if not input_data:
        return
        
    # Lấy số lượng phần tử n ở vị trí đầu tiên
    n = int(input_data[0])
    
    # Chuyển đổi các số còn lại thành một mảng số nguyên
    a = [int(x) for x in input_data[1:n+1]]
    
    # Tính tổng và tìm số lớn nhất
    sumv = sum(a)
    maxv = max(a)
    
    # In ra kết quả theo đúng yêu cầu đề bài
    print(f"{sumv} {maxv}")

if __name__ == "__main__":
    main()
