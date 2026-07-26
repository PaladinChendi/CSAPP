# Contributing to CSAPP Learning Repository

> 🌐 Languages: **English** | [简体中文](#简体中文)

Thanks for your interest in improving this repository! This is a learning project — solutions to the homework problems from *Computer Systems: A Programmer's Perspective (3rd Edition)*. All kinds of contributions are welcome.

---

## English

### Ways to contribute

- **Fix a typo or formatting issue** in an existing note.
- **Correct a mistake** in a derivation or answer.
- **Improve an explanation** — add a clearer walkthrough, an alternative approach, or a missing step.
- **Add a missing solution** for a problem that is not yet covered (e.g. `chapter9/9-20.md` is currently empty).
- **Help translate** notes from Chinese into English, or review existing translations.

### Before you start

- **Open an issue first** for any substantive change (new solution, rewriting a derivation, restructuring a file). Quick typo/formatting fixes can go straight to a PR.
- This repository intentionally has **no build system** — there are no Makefiles, build scripts, or test harnesses in the source tree. Please do not add one. The `.c` files are standalone programs.

### Conventions to follow

- **File naming**: `<chapter>-<problem>.{c|md}` (for example `2-65.c`, `6-37.md`). One problem per file.
- **Markdown notes**: keep the existing `A.` / `B.` / `C.` / `D.` sub-part labelling that mirrors the textbook. Use fenced code blocks (` ```c `, ` ```assembly `).
- **C programs**: standalone, compilable with `gcc <file>.c -o <out>`. No external dependencies.
- **Additive by default**: prefer correcting and supplementing existing content over rewriting it. The original Chinese notes are intentionally preserved.

### Pull request process

1. Fork the repository and create a branch from `master`.
2. Make your change, touching only documentation/notes (not the chapter directory structure).
3. Use a clear commit message, e.g. `fix: correct derivation in 6-37` or `docs: add bilingual index for chapter4`.
4. Open a pull request against `master` and fill in the PR template.
5. Reference any related issue in your PR description.

### Reporting problems

Use the issue templates under `.github/ISSUE_TEMPLATE/`:
- **Question** — ask about a solution you do not understand.
- **Typo / error report** — flag a mistake in a note.

By participating, you agree to abide by the [Code of Conduct](./CODE_OF_CONDUCT.md).

---

## 简体中文

### 参与方式

- **修正笔误或排版问题**。
- **纠正推导或答案中的错误**。
- **改进讲解**——补充更清晰的步骤、另一种思路，或缺失的中间过程。
- **补充缺失的解答**（例如 `chapter9/9-20.md` 目前为空）。
- **参与翻译**——将中文笔记译为英文，或审校现有译文。

### 开始之前

- **较大改动请先开 issue**（新增解答、改写推导、重构文件等）。笔误与排版小修可直接提 PR。
- 本仓库**刻意不含构建系统**——源码树中没有 Makefile、构建脚本或测试框架，请勿添加。`.c` 文件均为自包含程序。

### 约定

- **文件命名**：`<章>-<题号>.{c|md}`（如 `2-65.c`、`6-37.md`），每题一文件。
- **Markdown 笔记**：沿用与教材对应的 `A.` / `B.` / `C.` / `D.` 分小题格式，使用代码围栏（` ```c `、` ```assembly `）。
- **C 程序**：自包含，可用 `gcc <文件>.c -o <输出>` 编译，无外部依赖。
- **以叠加为主**：以纠正与补充替代改写，原有中文笔记刻意保留。

### PR 流程

1. Fork 仓库并从 `master` 新建分支。
2. 修改内容，只涉及文档/笔记，不改动章节目录结构。
3. 使用清晰的提交信息，如 `fix: correct derivation in 6-37` 或 `docs: 为第 4 章添加双语索引`。
4. 向 `master` 提交 Pull Request 并填写 PR 模板。
5. 在 PR 描述中引用相关 issue。

### 反馈问题

使用 `.github/ISSUE_TEMPLATE/` 下的 issue 模板：
- **Question**——对某道解答提问。
- **Typo / error report**——报告笔记中的错误。

参与即代表你同意遵守[行为准则](./CODE_OF_CONDUCT.md)。
