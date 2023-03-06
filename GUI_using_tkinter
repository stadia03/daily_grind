from tkinter import *


def finder(str):
    
    if(str=='A'):
      return 10
    elif str=='B':
       return 9
    elif str=='C':
       return 8
    elif str=='D':
       return 7
    else  :
      return 0

def cal():
    # print(onee.get())
    sub1=finder(onee.get())
    sub2=finder(twoe.get())
    sub3=finder(threee.get())
    sub4=finder(foure.get())

    sub1=sub1*4
    sub2=sub2*4
    sub3=sub3*3
    sub4=sub4*4

    one3.config(text=sub1)
    two3.config(text=sub2)
    three3.config(text=sub3)
    four3.config(text=sub4)
    res=sub1+sub2+sub3+sub4
    tot_res.config(text=res)
    tot_sgpa_res.config(text=res/15)
    




root = Tk()

root.title("gaurab's GUI")
root.geometry("800x800")
lbl = Label(root, text="Name").grid(column=0, row=0)

entry= Entry(root).grid(column=1, row=0)

lbl2 = Label(root, text="Section").grid(column=0, row=1)

entry2= Entry(root).grid(column=1, row=1)



lbl3 = Label(root, text="Reg.No").grid(column=3, row=0)

entry3= Entry(root).grid(column=4, row=0)

srl = Label(root,text="Srl.No").grid(column=0,row=2)

one = Label(root,text="1").grid(column=0,row=3)
two = Label(root,text="2").grid(column=0,row=4)
three = Label(root,text="3").grid(column=0,row=5)
four = Label(root,text="4").grid(column=0,row=6)





sub = Label(root,text="Subject").grid(column=1,row=2)

one1 = Label(root,text="DAA").grid(column=1,row=3)
two1 = Label(root,text="APP").grid(column=1,row=4)
three1 = Label(root,text="CC").grid(column=1,row=5)
four1 = Label(root,text="OS").grid(column=1,row=6)



grade = Label(root,text="Grade").grid(column=2,row=2)

onee = Entry(root)
onee.grid(column=2,row=3,sticky=W)
# print(one2.get())
twoe = Entry(root)
twoe.grid(column=2,row=4)
threee = Entry(root)
threee.grid(column=2,row=5)
foure = Entry(root)
foure.grid(column=2,row=6)



sub_credit = Label(root,text="  Subject Credit").grid(column=3,row=2)

one2 = Label(root,text="4").grid(column=3,row=3)
two2 = Label(root,text="4").grid(column=3,row=4)
three2 = Label(root,text="3").grid(column=3,row=5)
four2= Label(root,text="4").grid(column=3,row=6)




credit_obtained = Label(root,text="Credit Obtained").grid(column=4,row=2)

one3 = Label(root,text='')
one3.grid(column=4,row=3)
two3 = Label(root,text='')
two3.grid(column=4,row=4)
three3 = Label(root,text='')
three3.grid(column=4,row=5)
four3 = Label(root,text='')
four3.grid(column=4,row=6)




tot_credit= Label(root,text="Total Credit => ").grid(column=3,row=7)
tot_res= Label(root,text="")
tot_res.grid(column=4,row=7)




tot_sgpa= Label(root,text="   SGPA => ").grid(column=3,row=8)
tot_sgpa_res= Label(root,text="")
tot_sgpa_res.grid(column=4,row=8)




but= Button(root,text="Calculate", command=cal).grid(column=1,row=8)








root.mainloop()
