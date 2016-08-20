; l4d2 scripts by an entire sleeve of fig newtons
; http://steamcommunity.com/id/fignewtons
; this will only work with AutoHotkey_L, not regular AutoHotKey

;To-do
;Null-canceling movement
;holding use key turns on autouse with m1
;Config parsers to auto-populate user hotkeys
;If mumble exists, chat to mumble. Otherwise, chat in-game.

#Persistent
#NoEnv
SendMode Input  ; speed, reliability
#SingleInstance, Force  ;prevent multiple instances
#IfWinActive Left 4 Dead 2 ahk_class Valve001 ;don't send input when l4d2 is not the active window
CoordMode, Mouse, Screen

;set your own path for sounds
SoundDir = D`:\Steam\steamapps\common\Left 4 Dead 2\left4dead2\sound\buttons

; Global variables and settings 
;all delays set to -1 so that input will be sent as fast as possible, even when being spammed
SetMouseDelay, -1
SetKeyDelay, -1
SetBatchLines, -1
SetDefaultMouseSpeed, 0 ;fastest possible


/* ######################################################################

    KEY BINDS. Define your personal config settings here. 

If you don't want the script to work with a key, simply leave
that field blank and the hotkey will not be bound

Hotkey_ signifies a key to be pressed by the user
InputKey_ signifies a key to be sent by the script

*/
{
    ;Keys for interacting with the game. Usually pass-through hotkeys
    
    ;Keys for interacting with the script. 
    
    ;Uncomment and configure these lines for AHK glows
    
    Hotkey_TeamModeSurvivor         = Numpad1
    ;Config key that increments survivor glows
    InputKey_GlowSurvivorFlash          = F8
	InputKey_GlowSurvivorFlash2         = F9
	InputKey_GlowSurvivorFlash3         = F10
	InputKey_GlowSurvivorFlash4         = F11
    
    ;User hotkey to enter infected mode
    Hotkey_TeamModeInfected         = Numpad2
    ;Config key that increments infected glows
    InputKey_GlowInfectedFlash         = F7
	InputKey_GlowInfectedFlash2        = F8
	InputKey_GlowInfectedFlash3        = F9

	;User hotkey to toggle autofire
	
    ;User hotkey to enter spectate mode
    ;Hotkey_TeamModeSpectate         = Numpad0
    
    ;Hotkey_LWin = LWin
    ;Hotkey_RWin = RWin 
    
    HotKey, %Hotkey_TeamModeSurvivor%, TeamMode_Survivor
    HotKey, %Hotkey_TeamModeInfected%, TeamMode_Infected
    ;HotKey, %Hotkey_TeamModeSpectate%, TeamMode_Spectate
    
    ;Uncomment these for AHK spawn timer
    
    ;Spawn timer tick = F7
    ;Spawn timer timereset = F8

    ;HotKey, %Hotkey_LWin%, Label_LWin
    ;HotKey, %Hotkey_RWin%, Label_RWin

}

/* ######################################################################
        Glow flashing
*/
{
    TEAM_MODE = HALT

    ;By default, GlowInfectedFlash is 125ms and GlowSurvivorFlash is 50ms.
    ;Customize these to taste.
    SetTimer, GlowInfectedFlash, 125
    Settimer, GlowSurvivorFlash, 50
    SetTimer, GlowInfectedFlash, Off
    Settimer, GlowSurvivorFlash, Off
    
    TeamMode_Survivor:
    {
        TEAM_MODE = SURVIVOR
        SetTimer, GlowSurvivorFlash, On
        SetTimer, GlowInfectedFlash, Off
        ComObjCreate("SAPI.SpVoice").Speak("Survivor")    ;SAPI.SpVoice may cause CPU lag depending on your configuration. Comment these lines if you experience performance lag.
        Return
    }
    
    TeamMode_Infected:
    {
        TEAM_MODE = Infected
        SetTimer, GlowSurvivorFlash, Off
        SetTimer, GlowInfectedFlash, On
        ComObjCreate("SAPI.SpVoice").Speak("Infected")
        Return
    }
    
    GlowSurvivorFlash:
        IfWinActive, Left 4 Dead 2 ahk_class Valve001
        {
            If (!A_IsSuspended) {
                SendInput {%InputKey_GlowSurvivorFlash%}
				SendInput {%InputKey_GlowSurvivorFlash2%}
				SendInput {%InputKey_GlowSurvivorFlash3%}
				SendInput {%InputKey_GlowSurvivorFlash4%}
            }
        }
    Return
    
    GlowInfectedFlash:
        IfWinActive, Left 4 Dead 2 ahk_class Valve001
        {
            If (!A_IsSuspended) {
                SendInput {%InputKey_GlowInfectedFlash%}
				SendInput {%InputKey_GlowInfectedFlash2%}
				SendInput {%InputKey_GlowInfectedFlash3%}
            }
        }
    Return
}