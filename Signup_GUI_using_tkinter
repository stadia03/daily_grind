from tkinter import *
from tkinter import messagebox


def submit():
    name = name_entry.get()
    last = last_entry.get()
    Pass = pass_entry.get()
    verify = verify_entry.get()
    

    if name == '' or  Pass == '' or verify== '':
        messagebox.showwarning("Invalid Input", "Please fill all the fields!")
    elif Pass!=verify:
        messagebox.showwarning("Invalid Input", "Passwords do not match!")
    else:
        messagebox.showinfo("Success", f"Hello {name}! Your account has been created.")

def clear_entry():
    name_entry.delete(0, END)
    last_entry.delete(0, END)
    age_entry.delete(0,END)
    gen.set(None)
    
    city_entry.delete(0,END)
    address_entry.delete(0,END)
    user_entry.delete(0,END)
    pass_entry.delete(0, END)
    verify_entry.delete(0, END)
    

def back():
   root.destroy()

root = Tk()
root.title("Signup Form")
root.geometry("800x600")
gen=StringVar()
gen.set(None)

# entries banayo

header = Label(text="Signup",font="Arial  25 bold")
name_label = Label(root, text="First Name:",font="Arial  12 bold")
name_entry = Entry(root,width=40)

last_label = Label(root, text="Last Name:",font="Arial  12 bold")
last_entry = Entry(root,width=40)

age_label = Label(root, text="Age:",font="Arial  12 bold")
age_entry = Entry(root,width=40)

gender_label = Label(root, text="First Name:",font="Arial  12 bold")

male_entry = Radiobutton(root,text="Male" ,variable=gen,value='a',font="Arial  8 bold")
female_entry= Radiobutton(root,text="Female", variable=gen,value='b',font="Arial  8 bold")


city_label = Label(root, text="City:",font="Arial  12 bold")
city_entry = Entry(root,width=40)

address_label = Label(root, text="Address:",font="Arial  12 bold")
address_entry = Entry(root,width=40)

user_label = Label(root, text="User Name:",font="Arial  12 bold")
user_entry = Entry(root,width=40)

pass_label = Label(root, text="Password:",font="Arial  12 bold")
pass_entry = Entry(root,width=40)

verify_label = Label(root, text="Verify Password:",font="Arial  12 bold")
verify_entry = Entry(root,width=40)


submit_button = Button(root, text="Signup",font="Arial  12 bold", command=submit)

clear_button = Button(root, text="Clear",font="Arial  12 bold", command=clear_entry)

switch = Button(root, text="Switch To Login",font="Arial  6 italic", command=back)

# sabko pack kardo

header.pack(padx=50,pady=30,anchor=NW)

name_label.place(x=55,y=110)

last_label.place(x=55,y=150)

age_label.place(x=55,y=190)

gender_label.place(x=55,y=230)

city_label.place(x=55,y=270)

address_label.place(x=55,y=310)

user_label.place(x=55,y=350)

pass_label.place(x=55,y=390)

verify_label.place(x=55,y=430)




name_entry.place(x=300,y=110)

last_entry.place(x=300,y=150)

age_entry.place(x=300,y=190)

male_entry.place(x=300,y=230)
female_entry.place(x=380,y=230)

city_entry.place(x=300,y=270)

address_entry.place(x=300,y=310)

user_entry.place(x=300,y=350)

pass_entry.place(x=300,y=390)

verify_entry.place(x=300,y=430)


submit_button.place(x=300,y=480)
clear_button.place(x=400,y=480)
switch.place(x=538,y=40)

root.mainloop()
