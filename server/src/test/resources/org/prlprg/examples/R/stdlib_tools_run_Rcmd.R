#? stdlib
`run_Rcmd` <- function (args, out = "", env = "", timeout = 0) 
{
    status <- if (.Platform$OS.type == "windows") 
        system2(file.path(R.home("bin"), "Rcmd.exe"), args, out, 
            out, timeout = get_timeout(timeout))
    else system2(file.path(R.home("bin"), "R"), c("CMD", args), 
        out, out, env = env, timeout = get_timeout(timeout))
    if (identical(status, 124L)) 
        report_timeout(timeout)
    status
}
