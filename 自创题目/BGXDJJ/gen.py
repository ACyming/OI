from cyaron import *

for i in range(6, 11):
    test_data = IO(file_prefix="BGXDJJ", data_id=i)
    
    n = randint(99999,1000000) 
    test_data.input_writeln(n)

    for j in range(1,n+1):
        x=uniform(1,15)
        y=uniform(0,1)
        test_data.input_writeln(x,y)
    test_data.output_gen("C:\\Users\\user\\Desktop\\problem\\BGXDJJ\\std.exe") # 标程编译后的可执行文件，不需要freopen等，CYaRon自动给该程序输入并获得输出作为.out
