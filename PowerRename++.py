import os
Path = r'H:\\6.14班小学时光\\14班照片\\一年级\\20180531入队\\集体照'
path_src = Path
path_dst = Path
rename_format = '20180531入队集体照{}.jpg'
begin_num = 1
def doc_rename(path_src,path_dst,begin_num):
    for i in os.listdir(path_src):
        doc_src = os.path.join(path_src, i)
        doc_name = rename_format.format(begin_num,os.path.splitext(i)[-1])
        doc_dst = os.path.join(path_dst, doc_name)
        begin_num += 1
        os.rename(doc_src,doc_dst)
doc_rename(path_src,path_dst,begin_num)