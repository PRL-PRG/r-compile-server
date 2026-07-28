#? stdlib
`system` <- function (command, intern = FALSE, ignore.stdout = FALSE, ignore.stderr = FALSE, 
    wait = TRUE, input = NULL, show.output.on.console = TRUE, 
    minimized = FALSE, invisible = TRUE, timeout = 0, receive.console.signals = wait) 
{
    if (!missing(show.output.on.console) || !missing(minimized) || 
        !missing(invisible)) 
        message("arguments 'show.output.on.console', 'minimized' and 'invisible' are for Windows only")
    if (!is.logical(intern) || is.na(intern)) 
        stop("'intern' must be TRUE or FALSE")
    if (!is.logical(ignore.stdout) || is.na(ignore.stdout)) 
        stop("'ignore.stdout' must be TRUE or FALSE")
    if (!is.logical(ignore.stderr) || is.na(ignore.stderr)) 
        stop("'ignore.stderr' must be TRUE or FALSE")
    if (!is.logical(wait) || is.na(wait)) 
        stop("'wait' must be TRUE or FALSE")
    if (!is.logical(receive.console.signals) || is.na(receive.console.signals)) 
        stop("'receive.console.signals' must be TRUE or FALSE")
    if (ignore.stdout) 
        command <- paste(command, ">/dev/null")
    if (ignore.stderr) 
        command <- paste(command, "2>/dev/null")
    if (!is.null(input)) {
        if (!is.character(input)) 
            stop("'input' must be a character vector or 'NULL'")
        f <- tempfile()
        on.exit(unlink(f))
        writeLines(input, f)
        command <- paste("<", shQuote(f), command)
    }
    if (!wait && !intern) 
        command <- paste(command, "&")
    .Internal(system(command, intern, timeout, receive.console.signals))
}

# Examples
# list all files in the current directory using the -F flag


# t1 is a character vector, each element giving a line of output from who
# (if the platform has who)
t1 <- try(system("who", intern = TRUE))

try(system("ls fizzlipuzzli", intern = TRUE, ignore.stderr = TRUE))
# zero-length result since file does not exist, and will give warning.

