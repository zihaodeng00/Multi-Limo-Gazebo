import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zihao/Documents/limo/agilex_open_class/install/limo_learnning_py'
