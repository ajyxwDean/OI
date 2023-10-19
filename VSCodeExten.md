注意：此文章是我从我在luogu日报上发的文章copy的，仅面向OIer！！！！！！

# 前言

[并不会有更好的阅读体验](https://crab-in-the-northeast.site/programming-bytalk/great-features-and-plugins-for-vscode.html)

![lGyxNn.png](https://s2.ax1x.com/2020/01/01/lGyxNn.png)?

正如官网所说，`VSCode`是一个很强的编辑器。?

那么为什么`VSCode`那么强？有很大的一个原因：**功能和插件众多**?

关于`VSCode`的基操，请看[往期日报](https://www.luogu.com.cn/blog/GNAQ/VSC-guide)?

今天我们来看看`VSCode`中有哪些超强的功能和插件吧～?

（注：鉴于大家都是`OIer`或`ACMer`，本文并不涉及仅能在非`cpp`语言中有效的插件）?

（再注：安装插件可以用插件商店无脑安装，或者`vscode`命令行命令安装，或下载`github`仓库进行文件安装）? ?

（三注：东北小蟹蟹的系统为`ubuntu`，但`Windows`操作环境应该和这个差不多）?

# 先说功能

首先，`VSCode`基础功能很强大，文件树，内置终端，随时分屏是我最喜欢的三个功能。其他编辑器中同时蕴含这三个功能的并不多。?

而最强大的一个功能，当属自定义代码片段。

## 自定义代码片段? ?

来看这样一个例子：?

![](https://cdn.luogu.com.cn/upload/image_hosting/bpoj6qv9.png)?

`base`是我提前定义好的代码片段缩略名。然后我们按下`Enter`（或`Tab`）?

![](https://cdn.luogu.com.cn/upload/image_hosting/sha588f6.png)?

`ok!`一个简单的基本代码片段就完事了。不要怀疑我在骗人，我这么蒻骗你干甚。?

再来一个例子：?

![](https://cdn.luogu.com.cn/upload/image_hosting/7orp0tz8.png)?

`Enter`后：?

![](https://cdn.luogu.com.cn/upload/image_hosting/in1jznhy.png)?

废话不多说，我们看看是怎么搞的。?

首先在`vscode`按`Ctrl+P`进入命令行模式，键入`>User Sn`?

![](https://cdn.luogu.com.cn/upload/image_hosting/24q6w64c.png)?

按下回车：?

![](https://cdn.luogu.com.cn/upload/image_hosting/7uqdilmp.png)?

由于我的`cpp.json`已经编辑过，所以显示在第一行。默认在下面找到`cpp`，会发现你现在已经进入编辑`cpp.json`的模式。?

这里就是自定义代码片段了。这里给出我的自定义代码片段：?

```json

{

"base"/*这里填的东西与实操无关，是便于编辑json的*/: {

            "prefix": "base", // 这里才是触发的关键字 输入base按下enter或tab键 这行末尾有逗号哦！

"body": [//这里是代码主片段部分：

            "#include ",//每一行都需要双引号括起来。

"using namespace std;",//双引号后千万不要忘记逗号

"",//这里就是空行

"int n,m;",//有没有种熟悉的感觉？

"",//对了，用cpp编写P1000就是这个感觉。。。。

"int main(){",//如果你嫌麻烦直接复制我的就好

"",//不用担心注释内容，这里的注释并不包含在实操中的代码片段

"? ? return 0;",//除非你的注释在双引号内

"}",//总之放心大胆的复制吧。马蜂不同不予受理qwq

],

? ? ? ? "description": "basic components"//注意这行是没有逗号的

? ? ? ? //"basic components"也是爱填什么填什么

},//这里也要有逗号！！！！qwq

"fread": {

"prefix": "fread",

"body": [

"int read(){",

"? ? int s=0,f=1;",

"? ? char ch=getchar();",

"? ? while(ch<'0'||ch>'9'){",

"? ? ? ? if(ch=='-') f=-1;",

"? ? ? ? ch=getchar();",

"? ? }",

"? ? while(ch>='0'&&ch<='9'){",

"? ? ? ? s=s*10+ch-'0';",

"? ? ? ? ch=getchar();",

"? ? }",

"? ? return s*f;",

"}"

],

"description": "fast read"

}//最后一个代码片段无逗号。为什么弄个代码片段如此麻烦！！！详情参考json语法

}

```

然后就保存，**可能需要重启`vscode`。**?

最后就按照最开始说的那个方法，愉悦`coding`吧～?

## 自动保存

在`User Setting`中找到`AutoSave`?

![](https://cdn.luogu.com.cn/upload/image_hosting/g5kpzubj.png)?

`off`:不开启自动保存。这是默认的，但不开自动保存的编辑器是危险的。?

`afterDelay`：不编辑一段时间后，自动保存。这段时间具体是多久取决于下面的设置：?

![](https://cdn.luogu.com.cn/upload/image_hosting/rc1z4hx7.png)?

单位毫秒哦～?

`onFocusChange`：我的强推。焦点离开当前编辑的文本自动保存（说普通话就是鼠标点击当前**文本编辑区**? **以外**? 的地方自动保存）。?

`onWindowChange`： 焦点离开`VSCode`自动保存（普通话就是干`VSCode`以外的事情（如浏览器）时自动保存）。?

## 小结

其实`vscode`好用的功能有很多，这里仅列举了普通的`OI`码代码需求的部分功能~~好吧其实就俩~~。只要你有足够多的探索乱搞精神，你会知道很多的。?

# 再说插件?

## `background`

### 干嘛的

当然是乱搞背景的了！?

效果图：?

![](https://cdn.luogu.com.cn/upload/image_hosting/oi80yzas.png)? ?

（当然背景可以换啦）?

### 食用方法?

（以后的食用方法中，省略下载插件这一步。插件名称请见二级标题。）? ?

首先，确定你有管理员权限！? ?

`Windows`中右键管理员运行即可。? ?

`Ubuntu`运行?

![](https://cdn.luogu.com.cn/upload/image_hosting/bg1mlcdz.png)?

重启`vscode`? ? ?

而且`Ubuntu`有点烦的是每次`vscode`版本更新都需要做上述步骤。。`qwq`?

然后，如果你觉得默认的小女孩的背景不错，就可以跳过这部分。当然还有可能有一些问题，请看后面的`Q&A`。?

在`User Settings`中搜索`background`，你会看到：? ?

![](https://cdn.luogu.com.cn/upload/image_hosting/l6c8c2wo.png)?

点击`Edit in settings.json`，你会发现你现在在编辑`settings.json`。? ?

在末尾的中括号前加：? ?

```json

? ? "background.customImages": [

? ? ? ? "file:///home/xbc/Desktop/desktop.png",//背景图片地址

? ? ? ? "file:///home/xbc/Desktop/desktop.png",

"file:///home/xbc/Desktop/desktop.png"

//如果你很好奇为什么得重复三遍，读者自证（划掉）参见说明

? ? ],

? ? "background.style":{

? ? ? ? "content": "''",

? ? ? ? "pointer-events": "none",

? ? ? ? "position": "absolute",

"z-index": "99999",

//熟悉css的同学肯定明白上面是什么意思。这个是不用改的。

? ? ? ? "width": "100%",//背景图片缩放有多宽

? ? ? ? "height": "100%",//背景图片缩放有多高

? ? ? ? "background-position": "100% 100%",//背景图片显示位置

? ? ? ? "background-repeat": "no-repeat",//这个也不用改

? ? ? ? "opacity": 0.2//透明程度。其实普通的需求改这个就行了qwq

? ? }

```

### `Q&A`

`Q1`：不显示背景（插件无效）？?

`A1`：确定你有管理员权限！?

`Windows`中右键管理员运行即可。?

`Ubuntu`运行![](https://cdn.luogu.com.cn/upload/image_hosting/bg1mlcdz.png)， 重启`vscode`? ?

而且`Ubuntu`每次`vscode`版本更新都需要做上述步骤！?

`Q2`: 怎么去除顶部的不受信任的标志？?

`A2`: 参见?

安装`Fix VSCode Checksums`这个插件，按下`Ctrl+P`，执行`>Fix Checksums: Apply`，**完全重启**`VSCode`。单纯的重启窗口是无效的哦～?

## `Browser Preview`

### 干啥的

将迷你浏览器搬到`vscode`中`：）`

![](https://cdn.luogu.com.cn/upload/image_hosting/yg6m5s48.png)?

`upd on 2020.1.10:`

> `warning!`如果您的操作系统为`ubuntu`，实际上不用这么麻烦。取消浏览器的最大化，右键浏览器标题栏，点击`Always on top`，置顶浏览器就可以。

![](https://cdn.luogu.com.cn/upload/image_hosting/2i49e1mg.png)

### 食用方法

必须先得安装`Chrome`浏览器哦～?

安装插件后，左侧菜单栏应该会有个小图标：?

![](https://cdn.luogu.com.cn/upload/image_hosting/0zdcqkma.png)?

点击它，会自动出现微型浏览器。?

自此食用完成。?

哦对了，我的建议是平常上网还是在普通的浏览器，然后刷题的时候把题面链接粘过来。微型浏览器不用登录洛谷，因为它记不住密码。这只是为了看题面方便而已。提交代码也到普通浏览器提交。?

你可能想问我：为什么这个微型浏览器这么垃圾啊？?

好吧，这个插件的初衷是用来调试`js`，`html`代码的。。。?

## `C/C++`

这个不必多说了吧～～～～～?

## `Code Runner`

### 干啥的

![](https://cdn.luogu.com.cn/upload/image_hosting/y6i84r8p.png)一键运行代码。?

### 食用方法

安装即可。?

这里介绍另外的一些配置：?

![](https://cdn.luogu.com.cn/upload/image_hosting/q9okqpyb.png)? ?

默认的`code runner`运行在`OUTPUT`而非终端。如果你和我一样喜欢让编译命令在终端运行，可以勾选`Run In Terminal`。?

同样，自动保存必须要有，所以勾选上图中的后两者。?

## `indent-rainbow`&`Bracket Pair Colorizer 2`

### 干啥的

这是俩不同的插件，`indent-rainbow`是让缩进五颜六色，如：?

![](https://cdn.luogu.com.cn/upload/image_hosting/htoznd59.png)?

如果你的`vscode`配置了自动换行，就可以造出这玩意儿：?

![](https://cdn.luogu.com.cn/upload/image_hosting/kfqsxt8e.png)?

~~真有趣~~? ?

而`Bracket Pair Colorizer 2`呢，他是让括号五颜六色，比如?

![](https://cdn.luogu.com.cn/upload/image_hosting/j3gt3mtu.png)?

两者配合使用呢，就是这个鸭子：?

![](https://cdn.luogu.com.cn/upload/image_hosting/feq4q1xd.png)?

![](https://cdn.luogu.com.cn/upload/image_hosting/euz3d9f8.png)?

哦对了，如果大括号不匹配，没匹配的那个大括号会变红。?

![](https://cdn.luogu.com.cn/upload/image_hosting/tqozgpp2.png)?

~~原理详见[this one](https://www.luogu.com.cn/problem/P1739)~~

### 食用方法

开袋即食

## `Power Mode`

### 干啥的

打代码更加炫酷。这里拍动图不方便，直接弄官方给出的动图吧：?

![](https://raw.githubusercontent.com/hoovercj/vscode-power-mode/master/images/demo-presets-particles.gif)?

![](https://raw.githubusercontent.com/hoovercj/vscode-power-mode/master/images/demo-presets-fireworks.gif)?

![](https://raw.githubusercontent.com/hoovercj/vscode-power-mode/master/images/demo-presets-clippy.gif)?

原文中的动图比这个多多了，有兴趣的可以自行查看?

### 食用方法

还是在`User Settings`中，找到本插件的设置，看看都有啥。?

![](https://cdn.luogu.com.cn/upload/image_hosting/ayghs428.png)?

这个**默认是不勾选的**，必须勾选，要不然插件无效。?

![](https://cdn.luogu.com.cn/upload/image_hosting/5mdgwv2c.png)?

这是啥玩意儿呢？? ?

你可以试试打点字，就会有：![](https://cdn.luogu.com.cn/upload/image_hosting/28983ql8.png)?

当然实际上数字不一定是这个啦。这其实是打字连击小模块，打一个字符`combo++`，当打字连击到一定数值后，会出现![](https://cdn.luogu.com.cn/upload/image_hosting/qqq2xb2n.png)?

（下面那个绿白相间的东西不是`vscode`的，是为给水印让道搞的`qwq`，没水印占高级空间啊（?

当超过一段时间不打字了，`combo timer`会消失，但`combo`计数仍然存在。但若继续打字，`combo=0`?

在上面那段文字中，你会发现两行文字：?

> 打字连击到一定数值后?

> 超过一段时间不打字了

这个“一定数值”“一段时间”的设置就是刚才说的那两个。?

`combo threshold`就是这个“一定数值”，

`combo timeout`就是这个“一段时间”。注意单位是秒，并非毫秒，至于我为什么设置成`10000s`，~~还能因为啥~~?

如果你不想要打字连击小模块，可以取消下面两个设置的对勾：?

![](https://cdn.luogu.com.cn/upload/image_hosting/l1p0ow4t.png)

打字的时候还会晃动。设置晃动幅度：?

![](https://cdn.luogu.com.cn/upload/image_hosting/3p0inzav.png)?

特效剧烈程度：?

![](https://cdn.luogu.com.cn/upload/image_hosting/b35gkz8p.png)?

特效位置：?

![](https://cdn.luogu.com.cn/upload/image_hosting/0zdg6ror.png)?

特效保持时间（单位毫秒，0表示不消失）

![](https://cdn.luogu.com.cn/upload/image_hosting/c6fpqgvb.png)

等等等等，就不列举了`qwq`

## `TabOut`

### 干啥的

编码的时候，经常会遇到编辑双引号，括号内的情况，编辑完成若想跳到括号外，必须得按下右箭头键。?

但是这样很不爽，右箭头距离主键盘那么远，不方便，咋办呢？? ?

安装此插件，在括号，双引号内编辑时，按一下`Tab`跳出。?

说实话这是我的救星`qwq`?

### 食用方法

同开袋即食，是不是很方便呐?

## `vscode-fileheader`

### 干啥的

这个是一键给你的代码增加头注释，`like this:`?

![](https://cdn.luogu.com.cn/upload/image_hosting/qls6u3ob.png)?

而且最新更改时间会自动更改，`like this:`?

![](https://raw.githubusercontent.com/zhaopengme/vscode-fileheader/master/fileheader.gif)?

（拍动图不便，用官方的`gif qwq`）?

### 食用方法

开袋食不了，因为插件默认的`author`并不是我们。在下面的设置项进行配置：?

![](https://cdn.luogu.com.cn/upload/image_hosting/cwyolxxu.png)?

然后在代码中，按下`Alt+Ctrl+i`就可以在文件顶部添加注释。（不影响光标的位置）

# 其他

至此本文章就快要结束啦。最后再推荐下我的外观吧：?

整体外观：`Dracula At Night`

![](https://cdn.luogu.com.cn/upload/image_hosting/j3lzh4pm.png)?

小图标外观：`vscode-icons`?

![](https://raw.githubusercontent.com/vscode-icons/vscode-icons/master/images/screenshot.gif)?

本篇文章至此结束。?

`Enjoy it!`