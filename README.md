##项目背景

目前在做车金融系列项目，涉及到某业务表单录入时，需求如下：

1.服务器返回big Map  接近 150字段

2.同一接口，三个大表单，可保存可提交，数据校验；

3.某些选项 具有关联性；比如：隐藏部分输入项，或者 选项依赖前边选项

4. 表单 再某些业务状态下可以切换为 浏览态 和 编辑态，而且UI界面不同

##业务思考
