# CSAPP 学习仓库

> 🌐 语言：[English](./README.md) | **简体中文**

[![License: MIT](https://img.shields.io/github/license/PaladinChendi/CSAPP?color=blue)](./LICENSE)
[![GitHub stars](https://img.shields.io/github/stars/PaladinChendi/CSAPP?style=social)](https://github.com/PaladinChendi/CSAPP/stargazers)
[![Last Commit](https://img.shields.io/github/last-commit/PaladinChendi/CSAPP)](https://github.com/PaladinChendi/CSAPP/commits)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](./CONTRIBUTING.md)

> "If you study and learn the concepts in this book, you will be on your way to becoming the rare 'power programmer' who knows how things work and how to fix them when they break."
> —— *Computer Systems: A Programmer's Perspective*, 3rd Edition
>
> "如果你学习并掌握了书中的概念，你将有望成为那种稀缺的'懂行程序员'——知道事物如何运作，出问题时也知道如何修复。"（中译）

本仓库是一个面向全球开发者与学生的中英双语学习项目，收录 **《计算机系统：程序员的视角》（Computer Systems: A Programmer's Perspective，第三版）**——即中文版《深入理解计算机系统（原书第三版）》——课后习题与家庭作业的解答。

仓库**按章节组织**（第 2–12 章）。每道题的解答单独存放在名为 `<章>-<题号>` 的文件中（例如 `chapter2/2-65.c` 对应习题 **2.65**）。需要推导的分析题以 Markdown（`.md`）写成；可运行的程序题以 C（`.c`）写成。原有的中文笔记**原样保留**——本仓库的国际化是**叠加式**的：在原有内容之上添加双语导航与文档，绝不删除或改写既有内容。

---

## ✨ 特性

- **179 份解答**，覆盖第 2–12 章——137 份 Markdown 笔记 + 42 份 C 程序
- **双语导航**——中英文根 README 与每章索引
- **与教材题号对齐**的章节结构
- **自包含的 C 程序**——位运算与汇编相关习题无需构建系统即可编译运行
- **保留原有中文笔记**——既有内容不被改写或删除

## 📚 章节

| 章 | 标题 | 题目数 | 类型 | 索引 |
|----:|------|:--------:|------|-------|
| 2 | 信息的表示与处理 | 41 | 34 `.c` + 7 `.md` | [chapter2](./chapter2/README.md) |
| 3 | 程序的机器级表示 | 18 | 7 `.c` + 11 `.md` | [chapter3](./chapter3/README.md) |
| 4 | 处理器体系结构（Y86-64） | 15 | 15 `.md` | [chapter4](./chapter4/README.md) |
| 5 | 优化程序性能 | 7 | 1 `.c` + 6 `.md` | [chapter5](./chapter5/README.md) |
| 6 | 存储器层次结构 | 25 | 25 `.md` | [chapter6](./chapter6/README.md) |
| 7 | 链接 | 8 | 8 `.md` | [chapter7](./chapter7/README.md) |
| 8 | 异常控制流 | 18 | 18 `.md` | [chapter8](./chapter8/README.md) |
| 9 | 虚拟内存 | 10 | 10 `.md` | [chapter9](./chapter9/README.md) |
| 10 | 系统级 I/O | 5 | 5 `.md` | [chapter10](./chapter10/README.md) |
| 11 | 网络编程 | 8 | 8 `.md` | [chapter11](./chapter11/README.md) |
| 12 | 并发编程 | 24 | 24 `.md` | [chapter12](./chapter12/README.md) |

> 第 1 章《计算机系统漫游》无课后习题，故本仓库不包含该章。

## 📖 使用方式

1. **按章浏览**——见上方**章节**索引，或打开任一 `chapterN/README.md` 查看该章题目索引。
2. **打开解答**——文件命名为 `<章>-<题号>`。`.c` 文件是自包含程序，可用任意 C 编译器编译，例如 `gcc 2-65.c -o 2-65 && ./2-65`。
3. **配合教材阅读**——笔记给出推导过程或答案，而非重复题目本身，建议手边备好教材对照阅读。

## 🗂 仓库结构

```
.
├── README.md            ← English (primary)
├── README.zh-CN.md      ← 简体中文
├── LICENSE              ← MIT
├── CONTRIBUTING.md      ← 双语贡献指南
├── CODE_OF_CONDUCT.md   ← Contributor Covenant 2.1
├── .github/             ← issue 与 PR 模板
└── chapter2/ … chapter12/   ← 解答，每题一个文件
    └── README.md        ← 每章双语索引
```

## 🤝 参与贡献

发现笔误？有更清晰的推导？想把笔记翻译成英文？欢迎贡献——见 **[CONTRIBUTING.md](./CONTRIBUTING.md)**。

请保持改进为**叠加式**：以纠正错误、补充说明为主，避免改写既有推理；如需较大改动，请先开一个 issue 讨论。

## 📄 许可证

本仓库基于 **MIT 协议**授权——详见 [LICENSE](./LICENSE)。各解答笔记仍归其原作者所有，并依据 MIT 协议再分发。

## 🔗 参考资料

- 教材配套网站：<http://csapp.cs.cmu.edu/>
- CMU 第三版实验与资料：<http://csapp.cs.cmu.edu/3e/labs.html>
- R. E. Bryant & D. R. O'Hallaron，《Computer Systems: A Programmer's Perspective》第 3 版（Pearson, 2016）
