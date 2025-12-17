#? stdlib
`system2` <- function (command, args = character(), stdout = "", stderr = "", 
    stdin = "", input = NULL, env = character(), wait = TRUE, 
    minimized = FALSE, invisible = TRUE, timeout = 0, receive.console.signals = wait) 
{
    if (!missing(minimized) || !missing(invisible)) 
        message("arguments 'minimized' and 'invisible' are for Windows only")
    if (!is.logical(wait) || is.na(wait)) 
        stop("'wait' must be TRUE or FALSE")
    if (!is.logical(receive.console.signals) || is.na(receive.console.signals)) 
        stop("'receive.console.signals' must be TRUE or FALSE")
    intern <- FALSE
    command <- paste(c(env, shQuote(command), args), collapse = " ")
    if (is.null(stdout)) 
        stdout <- FALSE
    if (is.null(stderr)) 
        stderr <- FALSE
    else if (isTRUE(stderr)) {
        if (!isTRUE(stdout)) 
            warning("setting stdout = TRUE")
        stdout <- TRUE
    }
    if (identical(stdout, FALSE)) 
        command <- paste(command, ">/dev/null")
    else if (isTRUE(stdout)) 
        intern <- TRUE
    else if (is.character(stdout)) {
        if (length(stdout) != 1L) 
            stop("'stdout' must be of length 1")
        if (nzchar(stdout)) {
            command <- if (identical(stdout, stderr)) 
                paste(command, ">", shQuote(stdout), "2>&1")
            else paste(command, ">", shQuote(stdout))
        }
    }
    if (identical(stderr, FALSE)) 
        command <- paste(command, "2>/dev/null")
    else if (isTRUE(stderr)) {
        command <- paste(command, "2>&1")
    }
    else if (is.character(stderr)) {
        if (length(stderr) != 1L) 
            stop("'stderr' must be of length 1")
        if (nzchar(stderr) && !identical(stdout, stderr)) 
            command <- paste(command, "2>", shQuote(stderr))
    }
    if (!is.null(input)) {
        if (!is.character(input)) 
            stop("'input' must be a character vector or 'NULL'")
        f <- tempfile()
        on.exit(unlink(f))
        writeLines(input, f)
        command <- paste(command, "<", shQuote(f))
    }
    else if (nzchar(stdin)) 
        command <- paste(command, "<", shQuote(stdin))
    if (!wait && !intern) 
        command <- paste(command, "&")
    .Internal(system(command, intern, timeout, receive.console.signals))
}
