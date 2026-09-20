import tkinter as tk
from tkinter import messagebox
import random

# List of questions categorized by chapters
QUESTIONS_DATA = {
    "Chapter 3: Array & Matrix": [1732, 3248, 3142, 3033, 3028, 1652, 2951, 561, 977],
    "Chapter 4: Basic Algorithm": [905, 1752],
    "Chapter 5: Linear List": [83, 21, 203, 206],
    "Chapter 6: Stack & Queue": [20, 1047, 2000, 682, 1475, 225, 2073, 232, 950],
    "Chapter 7: String": [1684, 459],
    "Chapter 8: Tree I": [700, 938, 897, 108, 701, 1008],
    "Chapter 9: Tree II" : [617, 897, 1845, 1046, 110, 1382],
    "Chapter 10: Graphs" : [1791, 1971, 547, 841, 3286],
    "Chapter 11: Efficient Searching" : [1512, 1832, 2965, 2744, 1, 690],
    "Chapter 12: Sorting Algorithm" : [451]

}

# Variable to manage the animation loop
animation_running = False

def update_scramble():
    """Updates the question label with random noise during animation."""
    global animation_running
    if not animation_running:
        return
        
    # Generate 4 random digits to simulate scrambling
    fake_num = random.randint(1000, 9999)
    question_label.config(text=f"LeetCode {fake_num}")
    
    # Schedule the next visual update in 50ms (creates the fast flickering effect)
    root.after(50, update_scramble)

def start_selection():
    """Validates input, disables the button, and starts the scrambling."""
    global animation_running
    
    # 1. Gather active pool
    active_pool = []
    for chapter, var in checkbox_variables.items():
        if var.get() == 1:
            for q in QUESTIONS_DATA[chapter]:
                active_pool.append((q, chapter))
                
    # 2. Safety check
    if not active_pool:
        messagebox.showwarning("No Chapters Selected", "Please select at least one chapter!")
        return
    
    # 3. Disable button and update instructions
    pick_button.config(state=tk.DISABLED, text="Searching...")
    chapter_label.config(text="Simulating selection...", fg="#ffa116") # Orange color
    
    # 4. Pre-select the *real* final answer now (we hide it until later)
    final_q, final_chapter = random.choice(active_pool)
    
    # 5. Start the flickering animation loop
    animation_running = True
    update_scramble()
    
    # 6. Schedule the animation to stop after 1500ms (1.5 seconds)
    # and call reveal_final_answer, passing the real selection.
    root.after(1500, lambda: reveal_final_answer(final_q, final_chapter))

def reveal_final_answer(q_num, c_name):
    """Stops animation, enables button, and shows true question."""
    global animation_running
    animation_running = False
    
    # Re-enable the button
    pick_button.config(state=tk.NORMAL, text="Pick another Question")
    
    # Update displays with the real selection
    question_label.config(text=f"LeetCode {q_num}")
    chapter_label.config(text=c_name, fg="#888888") # Reset color

# --- GUI Setup ---
root = tk.Tk()
root.title("LeetCode Question Picker v2.0")
root.geometry("620x350")  # Adjusted size slightly
root.configure(bg="#1e1e1e")

# Checkbox tracking variables
checkbox_variables = {}

# --- Left Frame: Chapter Selector ---
left_frame = tk.LabelFrame(
    root, text=" Filter Chapters ", font=("Arial", 10, "bold"),
    fg="#aaaaaa", bg="#1e1e1e", bd=1, padx=10, pady=10
)
left_frame.pack(side=tk.LEFT, fill=tk.BOTH, expand=True, padx=20, pady=20)

for chapter in QUESTIONS_DATA.keys():
    var = tk.IntVar(value=1)
    checkbox_variables[chapter] = var
    cb = tk.Checkbutton(
        left_frame, text=chapter, variable=var,
        font=("Arial", 10), fg="#ffffff", bg="#1e1e1e",
        activebackground="#1e1e1e", activeforeground="#ffffff",
        selectcolor="#2d2d2d", anchor="w"
    )
    cb.pack(fill=tk.X, pady=3)

# --- Right Frame: Display and Trigger ---
right_frame = tk.Frame(root, bg="#1e1e1e")
right_frame.pack(side=tk.RIGHT, fill=tk.BOTH, expand=True, padx=20, pady=20)

tk.Label(
    right_frame, text="Your Next Challenge:", font=("Arial", 12),
    fg="#aaaaaa", bg="#1e1e1e"
).pack(pady=(30, 5))

# Big Question Number Display
question_label = tk.Label(
    right_frame, text="Ready?", font=("Arial", 28, "bold"),
    fg="#ffa116", bg="#1e1e1e"
)
question_label.pack(pady=5)

# Subtitle showing the Chapter/Topic
chapter_label = tk.Label(
    right_frame, text="Select filters and hit 'Pick'",
    font=("Arial", 11, "italic"), fg="#888888", bg="#1e1e1e"
)
chapter_label.pack(pady=(0, 20))

pick_button = tk.Button(
    right_frame, text="Pick a Question", font=("Arial", 12, "bold"),
    command=start_selection, # New starting function
    bg="#2cbb5d", fg="white", activebackground="#209647",
    activeforeground="white", padx=15, pady=8, bd=0, cursor="hand2"
)
pick_button.pack()

root.mainloop()