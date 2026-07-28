#? stdlib
`R_runR` <- function (cmd = NULL, Ropts = "", env = "", stdout = TRUE, stderr = TRUE, 
    stdin = NULL, arch = "", timeout = 0) 
{
    timeout <- get_timeout(timeout)
    out <- if (.Platform$OS.type == "windows") {
        if (!is.null(cmd)) {
            Rin <- tempfile("Rin")
            on.exit(unlink(Rin))
            writeLines(cmd, Rin)
        }
        else Rin <- stdin
        suppressWarnings(system2(if (nzchar(arch)) 
            file.path(R.home(), "bin", arch, "Rterm.exe")
        else file.path(R.home("bin"), "Rterm.exe"), c(Ropts, 
            paste("-f", shQuote(Rin))), stdout, stderr, env = env, 
            timeout = timeout))
    }
    else {
        suppressWarnings(system2(file.path(R.home("bin"), "R"), 
            c(if (nzchar(arch)) paste0("--arch=", arch), Ropts), 
            stdout, stderr, stdin, input = cmd, env = env, timeout = timeout))
    }
    if (identical(out, 124L) || identical(attr(out, "status"), 
        124L)) 
        report_timeout(timeout)
    out
}
