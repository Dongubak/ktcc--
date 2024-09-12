; Alt key with no action
!::Return

; Basic send commands
!j::Send("{Down}")
!k::Send("{Up}")
!h::Send("{Left}")
!l::Send("{Right}")
!u::Send("{Home}")
!i::Send("{End}")

!p::Send("{PgUp}")
!;::Send("{PgDn}")

; Control + Alt key combinations for word navigation without Shift
^!h::Send("^+{Left}")
^!l::Send("^+{Right}")

; Shift + Control + Alt key combinations (if needed for some commands)
+^!h::Send("^+{Left}")
+^!l::Send("^+{Right}")

; Shift + Alt key combinations for additional commands
+!j::Send("+{Down}")
+!k::Send("+{Up}")
+!u::Send("+{Home}")
+!i::Send("+{End}")

+!p::Send("+{PgUp}")
+!;::Send("+{PgDn}")
+!h::Send("+{Left}")
+!l::Send("+{Right}")
