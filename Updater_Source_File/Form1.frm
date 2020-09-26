VERSION 5.00
Object = "{EAB22AC0-30C1-11CF-A7EB-0000C05BAE0B}#1.1#0"; "ieframe.dll"
Begin VB.Form Form1 
   BackColor       =   &H00FFFFFF&
   BorderStyle     =   1  'Fixed Single
   Caption         =   " Connecting to server . . ."
   ClientHeight    =   885
   ClientLeft      =   4020
   ClientTop       =   4365
   ClientWidth     =   3720
   Icon            =   "Form1.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   885
   ScaleWidth      =   3720
   StartUpPosition =   2  'CenterScreen
   Begin SHDocVwCtl.WebBrowser WebBrowser1 
      Height          =   855
      Left            =   0
      TabIndex        =   5
      Top             =   1000
      Width           =   3735
      ExtentX         =   6588
      ExtentY         =   1508
      ViewMode        =   0
      Offline         =   0
      Silent          =   0
      RegisterAsBrowser=   0
      RegisterAsDropTarget=   1
      AutoArrange     =   0   'False
      NoClientEdge    =   0   'False
      AlignLeft       =   0   'False
      NoWebView       =   0   'False
      HideFileNames   =   0   'False
      SingleClick     =   0   'False
      SingleSelection =   0   'False
      NoFolders       =   0   'False
      Transparent     =   0   'False
      ViewID          =   "{0057D0E0-3573-11CF-AE69-08002B2E1262}"
      Location        =   ""
   End
   Begin VB.Timer Timer3 
      Enabled         =   0   'False
      Interval        =   10000
      Left            =   2760
      Top             =   120
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   7080
      TabIndex        =   4
      Top             =   1320
      Width           =   855
   End
   Begin VB.Timer Timer2 
      Enabled         =   0   'False
      Interval        =   2000
      Left            =   1800
      Top             =   360
   End
   Begin VB.TextBox Text2 
      Height          =   1005
      Left            =   5520
      TabIndex        =   3
      Top             =   1920
      Width           =   7815
   End
   Begin VB.Timer Timer1 
      Interval        =   2000
      Left            =   1200
      Top             =   360
   End
   Begin VB.Frame Frame1 
      Caption         =   "searching"
      Height          =   975
      Left            =   240
      TabIndex        =   2
      Top             =   1800
      Visible         =   0   'False
      Width           =   2895
      Begin VB.Timer Timer31 
         Enabled         =   0   'False
         Interval        =   120
         Left            =   2280
         Top             =   240
      End
      Begin VB.Timer Timer30 
         Enabled         =   0   'False
         Interval        =   70
         Left            =   1920
         Top             =   240
      End
      Begin VB.Timer Timer26 
         Enabled         =   0   'False
         Interval        =   70
         Left            =   1560
         Top             =   240
      End
      Begin VB.Timer Timer25 
         Enabled         =   0   'False
         Interval        =   70
         Left            =   1080
         Top             =   240
      End
      Begin VB.Timer Timer24 
         Enabled         =   0   'False
         Interval        =   70
         Left            =   720
         Top             =   240
      End
      Begin VB.Timer Timer23 
         Enabled         =   0   'False
         Interval        =   70
         Left            =   360
         Top             =   240
      End
      Begin VB.Timer Timer22 
         Interval        =   500
         Left            =   0
         Top             =   240
      End
   End
   Begin VB.Timer Timer4 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   240
      Top             =   3240
   End
   Begin VB.Timer Timer5 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   720
      Top             =   3240
   End
   Begin VB.Timer Timer6 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   1080
      Top             =   3240
   End
   Begin VB.Timer Timer7 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   1440
      Top             =   3240
   End
   Begin VB.Timer Timer8 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   1800
      Top             =   3240
   End
   Begin VB.Timer Timer9 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   2160
      Top             =   3240
   End
   Begin VB.Timer Timer10 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   240
      Top             =   2880
   End
   Begin VB.Timer Timer11 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   600
      Top             =   2880
   End
   Begin VB.Timer Timer12 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   960
      Top             =   2880
   End
   Begin VB.Timer Timer13 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   1800
      Top             =   2880
   End
   Begin VB.Timer Timer14 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   2280
      Top             =   2880
   End
   Begin VB.Timer Timer15 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   1320
      Top             =   2880
   End
   Begin VB.TextBox Text1 
      Height          =   1005
      Left            =   5520
      TabIndex        =   0
      Top             =   3120
      Width           =   7815
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "Connecting to server"
      BeginProperty Font 
         Name            =   "Arial"
         Size            =   12
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1080
      TabIndex        =   1
      Top             =   360
      Width           =   3135
   End
   Begin VB.Image Image6 
      Height          =   180
      Left            =   600
      Picture         =   "Form1.frx":1084A
      Stretch         =   -1  'True
      Top             =   360
      Visible         =   0   'False
      Width           =   165
   End
   Begin VB.Image Image5 
      Height          =   180
      Left            =   480
      Picture         =   "Form1.frx":10C8C
      Stretch         =   -1  'True
      Top             =   240
      Visible         =   0   'False
      Width           =   165
   End
   Begin VB.Image Image4 
      Height          =   180
      Left            =   360
      Picture         =   "Form1.frx":110CE
      Stretch         =   -1  'True
      Top             =   120
      Visible         =   0   'False
      Width           =   165
   End
   Begin VB.Image Image3 
      Height          =   180
      Left            =   240
      Picture         =   "Form1.frx":11510
      Stretch         =   -1  'True
      Top             =   240
      Visible         =   0   'False
      Width           =   165
   End
   Begin VB.Image Image1 
      Height          =   180
      Left            =   120
      Picture         =   "Form1.frx":11952
      Stretch         =   -1  'True
      Top             =   480
      Width           =   165
   End
   Begin VB.Image Image2 
      Height          =   180
      Left            =   120
      Picture         =   "Form1.frx":11D94
      Stretch         =   -1  'True
      Top             =   360
      Visible         =   0   'False
      Width           =   165
   End
   Begin VB.Image Image7 
      Height          =   180
      Left            =   600
      Picture         =   "Form1.frx":121D6
      Stretch         =   -1  'True
      Top             =   480
      Width           =   165
   End
   Begin VB.Image Image8 
      Height          =   180
      Left            =   360
      Picture         =   "Form1.frx":12618
      Stretch         =   -1  'True
      Top             =   480
      Width           =   165
   End
   Begin VB.Image Image9 
      Height          =   180
      Left            =   480
      Picture         =   "Form1.frx":12A5A
      Stretch         =   -1  'True
      Top             =   480
      Visible         =   0   'False
      Width           =   165
   End
   Begin VB.Image Image10 
      Height          =   180
      Left            =   240
      Picture         =   "Form1.frx":12E9C
      Stretch         =   -1  'True
      Top             =   480
      Visible         =   0   'False
      Width           =   165
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False








Private Sub Form_Load()
WebBrowser1.Navigate2 "http://mhfa0831.blogfa.com/"
WebBrowser1.Silent = True
End Sub




Private Sub Timer1_Timer()
On Error Resume Next
Text1.Text = WebBrowser1.Document.getElementById("header").innerText
Text2.Text = WebBrowser1.Document.getElementById("header").innerText
For i = 0 To Len(Text1.Text)
If Len(Text1.Text) > 7 Then
Text1.Text = Left$(Text1.Text, Len(Text1.Text) - 1)
End If
Next
For i = 0 To 7
Text2.Text = Right$(Text2.Text, Len(Text2.Text) - 1)
Next
If Text1.Text = "" Then
Timer3.Enabled = True
Else
Label1.Caption = "Getting information"
Form1.Caption = " Getting information"
Timer2.Enabled = True
Timer1.Enabled = False
End If
End Sub

Private Sub Timer10_Timer()
On Error Resume Next
Image1.Visible = True

Timer10.Enabled = False
Timer11.Enabled = True

End Sub

Private Sub Timer11_Timer()
On Error Resume Next
Image2.Visible = True

Timer11.Enabled = False
Timer12.Enabled = True

End Sub

Private Sub Timer12_Timer()
On Error Resume Next
Image3.Visible = True

Timer12.Enabled = False
Timer13.Enabled = True

End Sub

Private Sub Timer13_Timer()
On Error Resume Next
Image4.Visible = True

Timer13.Enabled = False
Timer14.Enabled = True

End Sub

Private Sub Timer14_Timer()
On Error Resume Next
Image5.Visible = True

Timer14.Enabled = False
Timer15.Enabled = True

End Sub

Private Sub Timer15_Timer()
On Error Resume Next
Image6.Visible = True

Timer15.Enabled = False
Timer4.Enabled = True

End Sub




Private Sub Timer2_Timer()
Dim sFileText As String
Dim iFileNo As Integer
  iFileNo = FreeFile
  Open App.Path & "\Version.txt" For Input As #iFileNo
  Do While Not EOF(iFileNo)
    Input #iFileNo, sFileText
    Text3.Text = sFileText
  
  Loop
  Close #iFileNo
  If Text1.Text = Text3.Text Then
  DoEvents
  Label1.Caption = "Up to Date!"
Form1.Caption = " Up to Date!"
 DoEvents
  MsgBox "Up to Date!"
  Timer2.Enabled = False
  End
  Else
  
  Dim Aa As String
   DoEvents
  Label1.Caption = "Version " & Text1.Text & " available."
Form1.Caption = "Version " & Text1.Text & " available."
 DoEvents
 
  MsgBox "Version " & Text1.Text & " available."
Aa = MsgBox("Do you want to update?", vbYesNo, "Question")
If Aa = vbYes Then
WebBrowser1.Navigate2 Text2.Text
WebBrowser1.Silent = True
Open App.Path & "\Version.txt" For Output As #iFileNo
Print #iFileNo, Text1.Text
Close #iFileNo

Else
End
End If

   Timer2.Enabled = False
  End If
  
End Sub

Private Sub Timer22_Timer()
DoEvents
Image1.Visible = False


Timer23.Enabled = True
Timer22.Enabled = False

End Sub

Private Sub Timer23_Timer()

Image2.Visible = True
Timer23.Enabled = False
Timer24.Enabled = True
End Sub

Private Sub Timer24_Timer()

Image2.Visible = False
Image3.Visible = True
Timer24.Enabled = False
Timer25.Enabled = True
End Sub

Private Sub Timer25_Timer()

Image3.Visible = False
Image4.Visible = True
Timer25.Enabled = False
Timer26.Enabled = True
End Sub

Private Sub Timer26_Timer()
Image8.Visible = False
Image7.Visible = False
Image4.Visible = False
Image5.Visible = True

Timer26.Enabled = False
Timer30.Enabled = True
End Sub

Private Sub Timer27_Timer()



Timer27.Enabled = False

End Sub

Private Sub Timer28_Timer()

Image8.Visible = True
Image9.Visible = False
Timer28.Enabled = False
Timer32.Enabled = True

End Sub

Private Sub Timer29_Timer()

Timer29.Enabled = False
Timer22.Enabled = True
Image10.Visible = False
Image1.Visible = True
End Sub

Private Sub Timer3_Timer()
WebBrowser1.Navigate2 "http://mhfa0831.blogfa.com/"
WebBrowser1.Silent = True
End Sub

Private Sub Timer30_Timer()


Image5.Visible = False

Image6.Visible = True
Image9.Visible = True
Image10.Visible = True

Timer30.Enabled = False
Timer31.Enabled = True
End Sub

Private Sub Timer31_Timer()

Image6.Visible = False
Image7.Visible = True
Image9.Visible = False
Image10.Visible = False
Image8.Visible = True
Image1.Visible = True

Timer31.Enabled = False
Timer22.Enabled = True
End Sub

Private Sub Timer32_Timer()
Image10.Visible = True


Timer32.Enabled = False
Timer29.Enabled = True
End Sub

Private Sub Timer33_Timer()
On Error Resume Next
Image9.Visible = True


Timer33.Enabled = False
Timer28.Enabled = True
End Sub

Private Sub Timer34_Timer()

Image9.Visible = False
Image7.Visible = False
For i = 1 To 1000
DoEvents
DoEvents
DoEvents
DoEvents
DoEvents
DoEvents
Next
Image7.Visible = True


Timer34.Enabled = False
Timer33.Enabled = True
End Sub

Private Sub Timer4_Timer()
On Error Resume Next
Image1.Visible = False

Timer4.Enabled = False
Timer5.Enabled = True

End Sub

Private Sub Timer5_Timer()
On Error Resume Next
Image2.Visible = False

Timer5.Enabled = False
Timer6.Enabled = True
Image3.Visible = True
End Sub

Private Sub Timer6_Timer()
On Error Resume Next
Image3.Visible = False

Timer6.Enabled = False
Timer7.Enabled = True
Image4.Visible = True
End Sub

Private Sub Timer7_Timer()
On Error Resume Next
Image4.Visible = False

Timer7.Enabled = False
Timer8.Enabled = True
Image5.Visible = True
End Sub



Private Sub Timer8_Timer()
On Error Resume Next
Image5.Visible = False

Timer8.Enabled = False
Timer9.Enabled = True
Image6.Visible = True
End Sub

Private Sub Timer9_Timer()
On Error Resume Next
Image6.Visible = False

Timer9.Enabled = False
Timer10.Enabled = True
Image1.Visible = True


End Sub





