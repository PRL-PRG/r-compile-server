#? stdlib
`.system_with_capture` <- function (command, args = character(), env = character(), stdin = "", 
    input = NULL, timeout = 0) 
{
    outfile <- tempfile("xshell")
    errfile <- tempfile("xshell")
    on.exit(unlink(c(outfile, errfile)))
    status <- system2(command, args, env = env, stdout = outfile, 
        stderr = errfile, stdin = stdin, input = input, timeout = timeout)
    list(status = status, stdout = readLines(outfile, warn = FALSE), 
        stderr = readLines(errfile, warn = FALSE))
}
