# CSAPP Learning Repository

> 🌐 Languages: **English** | [简体中文](./README.zh-CN.md)

[![License: MIT](https://img.shields.io/github/license/PaladinChendi/CSAPP?color=blue)](./LICENSE)
[![GitHub stars](https://img.shields.io/github/stars/PaladinChendi/CSAPP?style=social)](https://github.com/PaladinChendi/CSAPP/stargazers)
[![Last Commit](https://img.shields.io/github/last-commit/PaladinChendi/CSAPP)](https://github.com/PaladinChendi/CSAPP/commits)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](./CONTRIBUTING.md)

> "If you study and learn the concepts in this book, you will be on your way to becoming the rare 'power programmer' who knows how things work and how to fix them when they break."
> — *Computer Systems: A Programmer's Perspective*, 3rd Edition

A bilingual, community-oriented collection of worked solutions to the homework and practice problems from **Computer Systems: A Programmer's Perspective (3rd Edition)** — Bryant & O'Hallaron's textbook, known in Chinese as 《深入理解计算机系统（原书第三版）》.

The repository is organized **by chapter** (chapters 2–12). Every solution lives in its own file named `<chapter>-<problem>` (for example `chapter2/2-65.c` answers problem **2.65**). Analytical answers are written as Markdown (`.md`); answers that are runnable programs are written as C (`.c`). The original Chinese notes are preserved unchanged — internationalization here is **additive**: bilingual navigation and documentation are layered on top, never destructive.

---

## ✨ Features

- **179 worked solutions** across chapters 2–12 — 137 Markdown notes + 42 C programs
- **Bilingual navigation** — English + 简体中文 root READMEs and per-chapter indexes
- **Chapter-aligned structure** matching the textbook's homework numbering
- **Self-contained C programs** for the bit-twiddling and assembly exercises (no build system required)
- **Original Chinese notes preserved** — existing content is never rewritten or removed

## 📚 Chapters

| Ch. | Title | Problems | Type | Index |
|----:|------|:--------:|------|-------|
| 2 | Representing and Manipulating Information | 41 | 34 `.c` + 7 `.md` | [chapter2](./chapter2/README.md) |
| 3 | Machine-Level Representation of Programs | 18 | 7 `.c` + 11 `.md` | [chapter3](./chapter3/README.md) |
| 4 | Processor Architecture (Y86-64) | 15 | 15 `.md` | [chapter4](./chapter4/README.md) |
| 5 | Optimizing Program Performance | 7 | 1 `.c` + 6 `.md` | [chapter5](./chapter5/README.md) |
| 6 | The Memory Hierarchy | 25 | 25 `.md` | [chapter6](./chapter6/README.md) |
| 7 | Linking | 8 | 8 `.md` | [chapter7](./chapter7/README.md) |
| 8 | Exceptional Control Flow | 18 | 18 `.md` | [chapter8](./chapter8/README.md) |
| 9 | Virtual Memory | 10 | 10 `.md` | [chapter9](./chapter9/README.md) |
| 10 | System-Level I/O | 5 | 5 `.md` | [chapter10](./chapter10/README.md) |
| 11 | Network Programming | 8 | 8 `.md` | [chapter11](./chapter11/README.md) |
| 12 | Concurrent Programming | 24 | 24 `.md` | [chapter12](./chapter12/README.md) |

> Chapter 1 (*A Tour of Computer Systems*) has no homework problems and is intentionally absent.

## 📖 How to Use

1. **Browse by chapter** — see the **Chapters** index above, or open any `chapterN/README.md` for a per-chapter index.
2. **Open a solution** — files are named `<chapter>-<problem>`. The `.c` files are standalone programs; compile one with any C compiler, e.g. `gcc 2-65.c -o 2-65 && ./2-65`.
3. **Read alongside the book** — the notes give the derivation or answer rather than restating the full problem, so keep the textbook open beside you.

## 🗂 Repository Structure

```
.
├── README.md            ← English (primary)
├── README.zh-CN.md      ← 简体中文
├── LICENSE              ← MIT
├── CONTRIBUTING.md      ← bilingual contributor guide
├── CODE_OF_CONDUCT.md   ← Contributor Covenant 2.1
├── .github/             ← issue & pull-request templates
└── chapter2/ … chapter12/   ← solutions, one file per problem
    └── README.md        ← per-chapter bilingual index
```

## 🤝 Contributing

Found a typo? Have a clearer derivation? Want to help translate the notes into English? Contributions are welcome — see **[CONTRIBUTING.md](./CONTRIBUTING.md)**.

Please keep improvements **additive**: prefer correcting mistakes and adding explanations over rewriting existing reasoning, and open an issue first for any substantive change.

## 📄 License

Licensed under the **MIT License** — see [LICENSE](./LICENSE). The solution notes remain the work of their respective authors and are redistributed under MIT.

## 🔗 References

- Textbook companion site: <http://csapp.cs.cmu.edu/>
- CMU 3rd-edition labs & materials: <http://csapp.cs.cmu.edu/3e/labs.html>
- R. E. Bryant & D. R. O'Hallaron, *Computer Systems: A Programmer's Perspective*, 3rd Edition (Pearson, 2016)
