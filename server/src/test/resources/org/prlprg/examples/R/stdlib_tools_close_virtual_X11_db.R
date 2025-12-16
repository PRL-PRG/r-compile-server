#? stdlib
`close_virtual_X11_db` <- function (pid) 
{
    pskill(pid)
    if (is.na(dis <- attr(pid, "display"))) 
        Sys.unsetenv("DISPLAY")
    else Sys.setenv(DISPLAY = dis)
}
