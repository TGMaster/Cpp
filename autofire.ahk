;///////////////////////////////////////////////////////////////////////////////////////////////////////////////
;///////////////////////////////MOUSE WHEEL FOR ON OFF ALL MACRO'S//////////////////////////////////////////////
;///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#IfWinActive, Left 4 Dead 2
#MaxThreadsPerHotkey 2
#SingleInstance force
*~Numpad3::
*~u::
*~y::
*~`::
*~3::
*~4::
*~5::
Suspend, On
ComObjCreate("SAPI.SpVoice").Speak("Deactivated")
return
*~Numpad0::
Suspend, off
ComObjCreate("SAPI.SpVoice").Speak("Activated")
return
;///////////////////////////////////////////////////////////////////////////////////////////////////////////////
;///////////////////////////////LEFT MOUSE RAPIDFIRE////////////////////////////////////////////////////////////
;///////////////////////////////////////////////////////////////////////////////////////////////////////////////
~*LButton::
SetMouseDelay 21
Loop
{
Click
If (GetKeyState("LButton","P")=0)
Break
}
return