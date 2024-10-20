from cyaron import * # 引入CYaRon的库

for i in range(1, 11): # 即在[1, 4)范围内循环，也就是从1到3
    test_data = IO(file_prefix="XC", data_id=i)
    
    n = randint(1,100)
    m = randint(1,1000)
    k = randint(1,1000)
    test_data.input_writeln(n, m, k)
    for j in range(1, n + 1):
        wi=randint(1,500)
        ki=randint(1,500)
        vi=randint(1,100000)
        test_data.input_writeln(wi, ki, vi)
    test_data.output_gen("C:\\Users\\user\\Desktop\\problem\\XC\\std.exe")
    
    
