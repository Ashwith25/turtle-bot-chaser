import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ash/turtle_bot_chaser/install/turtle_catch_em_all'
