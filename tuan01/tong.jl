using LinearAlgebra

function main()
    # Đọc toàn bộ dữ liệu từ đầu vào chuẩn và tách từ khóa theo khoảng trắng
    input_text = read(stdin, String)
    tokens = split(input_text)
    
    if isempty(tokens)
        return
    end
    
    # Số lượng phần tử n
    n = parse(Int64, tokens[1])
    
    # Chuyển đổi mảng chuỗi số sang mảng số nguyên
    a = [parse(Int64, tokens[i]) for i in 2:(n+1)]
    
    # Tính tổng và tìm giá trị lớn nhất
    sumv = sum(a)
    maxv = maximum(a)
    
    # In ra kết quả theo cấu trúc chuẩn đề bài đề ra
    println("$sumv $maxv")
end

main()
