#? stdlib
`pskill` <- function (pid, signal = SIGTERM) 
invisible(.Call(C_ps_kill, pid, signal))

# Examples
