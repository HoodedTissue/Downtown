; ===== Style: Default =====

[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1
MouseOverAction=[!ShowMeterGroup Controls][!Redraw]
MouseLeaveAction=[!HideMeterGroup Controls][!Redraw]

;===== Meter Styles=====
;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=CentralW01-Bold
FontColor=0,0,0
SolidColor=#TransparentWhite3#
FontSize=9
stringAlign=CenterCenter
AntiAlias=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)

[LblCurrSty]
StringStyle=Bold

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=0,0,0
FontFace=CentralW01-Bold
FontSize=9
stringAlign=center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
StringStyle=Bold
DynamicVariables=1
Group=WindowsColorGroup

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=#SolidGreyText#

[NextMonth]
FontColor=#SolidGreyText#

[HolidayStyle]
FontColor=#YouTubeRed#
StringStyle=Bold

[WeekendStyle]

;========== METERS ==========
;These are not required.
[BackgroundStyle]
SolidColor=#BackgroundColor#
W=800
H=#BackgroundHeight#

[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)
Y=(#Bumper.top#-4)
H=#C.h#
FontColor=0,0,0
FontFace=Ginger
FontSize=11
stringAlign=Center
AntiAlias=1
DynamicVariables=1

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=#Bumper.top#
X=((#C.w#*6+#Space.x#*6)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]

;Date Indicator
[TodayHL]
Meter=image
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#)
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)-3)
H=#C.h#
W=#C.w#
;(#C.w#-6)
SolidColor=#WindowsColor#
Hidden=#NotCurrentMonth#
DynamicVariables=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)