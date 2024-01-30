import tkinter as tk

def on_button_click():
    label.config(text="你好，" + entry.get())

app = tk.Tk()
app.title("简单的Python APP")

frame = tk.Frame(app)
frame.pack(padx=10, pady=10)

label = tk.Label(frame, text="请输入你的名字：")
label.grid(row=0, column=0)

entry = tk.Entry(frame)
entry.grid(row=0, column=1)

button = tk.Button(frame, text="点击我", command=on_button_click)
button.grid(row=1, columnspan=2)

app.mainloop()
