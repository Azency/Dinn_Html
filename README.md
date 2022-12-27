#Dinn_net

Dinn_net负责完成加密神经网络的主要功能——encrypt,net,decrypt

## encrypt
该函数接受一个16*16手写数字图片的二进制数据并且以字符串形式传输，在该函数内以公钥加密图片数据，得到256组密文对，对该密文对序列化后转化为二进制数据，以字符串形式传出。

##net
该函数以字符串形式接收256组密文对的序列化数据，然后将密文数据传入神经网络，运算得到10组密文，分别对应神经网络10个输出的加密结果，同样序列化之后以字符串形式传出。

##decrypt
该函数接受10组密文对的序列化数据，然后进行解密，得到手写数字图片对应的分类概率值，取最大概率值作为手写数字识别的最终结果。
