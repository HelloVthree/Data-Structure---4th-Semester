# 🎯 LeetCode Question Randomizer

A focused study tool designed to help you practice Data Structures and Algorithms by generating randomized LeetCode problem recommendations categorized by course chapters.

This repository includes both a **feature-rich Python GUI app** (recommended) and a **lightweight C++ version**.

---

## 🌟 Key Features

* **Python GUI Version (`LeetCode_training.py`):**
  * **Interactive Chapter Filter:** Pick and choose exactly which chapters you want to practice.
  * **Flickering Reel Animation:** Fun slot-machine style selector effect while picking your challenge.
  * **Categorized Output:** Displays both the problem ID and its corresponding topic category.
  * **Zero Setup:** Uses native Python libraries (`tkinter`, `random`), so no `pip install` is needed!

* **C++ Version (`LeetCode_training.cpp`):**
  * Simple, lightweight console script for quick problem picking.

---

## 📚 Problem Set Breakdown

| Chapter | Module / Topic | Problem Pool (LeetCode IDs) |
| :--- | :--- | :--- |
| **Chapter 3** | Array & Matrix | `1732`, `3248`, `3142`, `3033`, `3028`, `1652`, `2951`, `561`, `977` |
| **Chapter 4** | Basic Algorithm | `905`, `1752` |
| **Chapter 5** | Linear List | `83`, `21`, `203`, `206` |
| **Chapter 6** | Stack & Queue | `20`, `1047`, `2000`, `682`, `1475`, `225`, `2073`, `232`, `950` |
| **Chapter 7** | String | `1684`, `459` |
| **Chapter 8** | Tree I | `700`, `938`, `897`, `108`, `701`, `1008` |
| **Chapter 9** | Tree II | `617`, `897`, `1845`, `1046`, `110`, `1382` |
| **Chapter 10** | Graphs | `1791`, `1971`, `547`, `841`, `3286` |
| **Chapter 11** | Efficient Searching | `1512`, `1832`, `2965`, `2744`, `1`, `690` |
| **Chapter 12** | Sorting Algorithm | `451` |

---

## 🚀 How to Run

You can run these scripts either through your favorite IDE/Compiler or directly from the terminal.

### 🐍 Option 1: Python GUI (Recommended)

#### Running in an IDE / Code Editor (Easiest)
1. Download `LeetCode_training.py`.
2. Open the file in your preferred IDE (PyCharm, VS Code, Thonny, IDLE, etc.).
3. Click the **Run** button (or press `F5` / `Shift + F10` depending on your IDE).

#### Running via Terminal
```bash
python LeetCode_training.py
```

**How to Use:**
1. Check/uncheck chapter filters on the left panel.
2. Click **Pick a Question**.
3. Search for the generated question number on [LeetCode](https://leetcode.com/) and start solving!

---

### ⚙️ Option 2: C++ Version

#### Running in an IDE / Compiler
1. Download `LeetCode_training.cpp`.
2. Open it in your C++ IDE (Dev-C++, Code::Blocks, CLion, Visual Studio, Xcode, etc.).
3. Click **Build & Run** (or `F11` in Dev-C++ / Code::Blocks).

#### Running via Terminal
1. Compile the code:
   ```bash
   g++ LeetCode_training.cpp -o randomizer
   ```
2. Run the program:
   * **Windows:** `randomizer.exe`
   * **macOS / Linux:** `./randomizer`
