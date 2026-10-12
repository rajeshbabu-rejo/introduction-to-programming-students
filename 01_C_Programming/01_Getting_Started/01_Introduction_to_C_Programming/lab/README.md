# Guided exercise: an orientation welcome display

## Goal

Create a terminal prototype for the first semester orientation desk at Woxsen University. New students and parents need a consistent welcome and check-in direction. You will run the starter, add two messages, observe the result, and explain what changed.

## Before you begin

- Have VS Code and the lesson folder available.
- Your computer needs a C compiler. Your instructor will identify the compiler installed in the Next Gen Lab.
- Keep a place to save your completed `.c` file and a capture of its output.

## Step 1: Open the starter

1. Open VS Code.
2. Choose **File → Open Folder** and select this lesson's `lab` folder.
3. In the Explorer panel, click `welcome_starter.c`.
4. Find the line beginning `printf("Welcome`. Read its message.

**Predict:** What text will the program display? Write your prediction before running it.

## Step 2: Build and run

Open **Terminal → New Terminal** in VS Code. Use the command for the lab computer:

| Lab computer | Build | Run |
| --- | --- | --- |
| Windows with GCC | `gcc welcome_starter.c -o welcome.exe` | `.\welcome.exe` |
| macOS or Linux with Clang/GCC | `cc welcome_starter.c -o welcome` | `./welcome` |

If the terminal says the compiler command is not found, stop and tell your instructor. The class will use the lab's approved compiler setup.

**Checkpoint 1:** The output should be exactly:

```text
Welcome to Woxsen University!
```

Record whether your prediction matched the result: ____________________

## Step 3: Add two messages

Below the existing `printf` line, add two more `printf` statements. Use one message to tell visitors what to do next and another to offer help. End each message with `\n` so that it appears on a new line.

Save the file. Build and run it again using the same commands.

**Checkpoint 2:** You should now see three lines. Write the two lines you added:

1. ____________________________________________________________
2. ____________________________________________________________

## Step 4: Change and observe

1. Temporarily remove `\n` from your second message.
2. Save, build, and run again.
3. Observe what happens to the following message.
4. Restore `\n` and run once more.

What changed, and why? _________________________________________

## Extend

Add one line showing a favourite book or song title and its creator. Run the program and confirm the line appears where you expected.

## Submit

- Your completed `welcome_starter.c` file.
- A capture of your final program output.
- One sentence explaining what `printf` does.

