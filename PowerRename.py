import os
#定义来源文件夹
path_src = r'H:\\6.14班小学时光\\扬帆班成长瞬间\\14班学生\\合影'
#定义目标文件夹
path_dst = r'H:\\6.14班小学时光\\扬帆班成长瞬间\\14班学生\\合影'
#自定义格式，例如“报告-第X份”，第一个{}用于放序号，第二个{}用于放后缀
rename_format = '单人合照_{}.jpg'
#初始序号
begin_num = 1
def doc_rename(path_src,path_dst,begin_num):
    for i in os.listdir(path_src):
        #获取原始文件名
        doc_src = os.path.join(path_src, i)
        #重命名
        doc_name = rename_format.format(begin_num,os.path.splitext(i)[-1])
        #确定目标路径a
        doc_dst = os.path.join(path_dst, doc_name)
        begin_num += 1
        os.rename(doc_src,doc_dst)
doc_rename(path_src,path_dst,begin_num)