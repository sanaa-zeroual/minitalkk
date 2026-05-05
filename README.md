# 📡 Minitalk

A small client-server communication program built in C using **UNIX signals** — a 42 School project.

---

## 📖 About

Minitalk implements inter-process communication (IPC) between a **client** and a **server** using only two UNIX signals: `SIGUSR1` and `SIGUSR2`. The client encodes each character of a message into bits and sends them one by one to the server, which reconstructs and displays the original string in real time.

This project explores low-level signal handling in C without using any standard communication tools like sockets or pipes.

---

## ⚙️ How It Works

- The **server** starts first and prints its PID (Process ID).
- The **client** takes the server's PID and a message string as arguments.
- Each character is broken into 8 bits:
  - `SIGUSR1` → bit `1`
  - `SIGUSR2` → bit `0`
- The server listens for signals and reconstructs each character bit by bit, then prints the full message once the null terminator is received.

---

## 🗂️ Project Structure

```
minitalkk/
├── client.c        # Sends a message to the server via signals
├── server.c        # Receives signals and reconstructs the message
├── Makefile        # Build rules
├── Libft/          # Custom C library (libft)
└── Ft_printf/      # Custom printf implementation
```

---

## 🚀 Usage

### Build
```bash
make
```

### Run the Server
```bash
./server
```
The server will print its PID. Keep it running.

### Send a Message (Client)
```bash
./client <SERVER_PID> "your message here"
```

**Example:**
```bash
./server
# Output: PID: 12345

./client 12345 "Hello, 42!"
# Server output: Hello, 42!
```

---

## 📋 Requirements

- GCC or Clang
- Unix/Linux OS (macOS or Linux)
- `make`

---

## 🛠️ Makefile Targets

| Target | Description |
|--------|-------------|
| `make` | Compile client and server |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and binaries |
| `make re` | Full recompile |

---

## 📚 Concepts Covered

- UNIX signal handling (`sigaction`, `kill`)
- Bitwise operations for encoding/decoding characters
- Inter-process communication (IPC)
- Process IDs (PIDs)
- Custom C library integration (Libft, Ft_printf)

---

## 👩‍💻 Author

**Sanaa Zeroual** — [@sanaa-zeroual](https://github.com/sanaa-zeroual)  

