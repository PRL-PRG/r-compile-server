#? stdlib
`.eval_with_capture` <- function (expr, type = NULL) 
{
    if (is.null(type)) 
        capture_output <- capture_message <- TRUE
    else {
        type <- match.arg(type, c("output", "message"))
        capture_output <- type == "output"
        capture_message <- !capture_output
    }
    outcon <- file(open = "w+", encoding = "UTF-8")
    msgcon <- file(open = "w+", encoding = "UTF-8")
    if (capture_output) {
        sink(outcon, type = "output")
        on.exit(sink(type = "output"))
    }
    if (capture_message) {
        sink(msgcon, type = "message")
        on.exit(sink(type = "message"), add = capture_output)
    }
    on.exit({
        close(outcon)
        close(msgcon)
    }, add = TRUE)
    value <- eval(expr)
    list(value = value, output = readLines(outcon, warn = FALSE), 
        message = readLines(msgcon, warn = FALSE))
}
