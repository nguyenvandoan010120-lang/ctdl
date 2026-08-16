function main()
    input_text = read(stdin, String)
    tokens = split(input_text)
    
    if isempty(tokens)
        return
    end
    
    n = parse(Int64, tokens[1])
    a = [parse(Int64, tokens[i]) for i in 2:(n+1)]
    
    sumv = sum(a) # tinh tong va tim max bang ham cua julia
    maxv = maximum(a)
    
    println("$sumv $maxv")
end

main()

