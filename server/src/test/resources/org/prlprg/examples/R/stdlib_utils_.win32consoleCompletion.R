#? stdlib
`.win32consoleCompletion` <- function (linebuffer, cursorPosition, check.repeat = TRUE, minlength = -1) 
{
    isRepeat <- if (check.repeat) 
        (linebuffer == .CompletionEnv[["linebuffer"]] && cursorPosition == 
            .CompletionEnv[["end"]])
    else TRUE
    .assignLinebuffer(linebuffer)
    .assignEnd(cursorPosition)
    .guessTokenFromLine()
    token <- .CompletionEnv[["token"]]
    comps <- if (nchar(token, type = "chars") < minlength) 
        character()
    else {
        .completeToken()
        .retrieveCompletions()
    }
    if (length(comps) == 0L) {
        addition <- ""
        possible <- character()
    }
    else if (length(comps) == 1L) {
        addition <- substr(comps, nchar(token, type = "chars") + 
            1L, 100000L)
        possible <- character()
    }
    else if (length(comps) > 1L) {
        additions <- substr(comps, nchar(token, type = "chars") + 
            1L, 100000L)
        if (length(table(substr(additions, 1L, 1L))) > 1L) {
            addition <- ""
            possible <- if (isRepeat) 
                capture.output(cat(format(comps, justify = "left"), 
                  fill = TRUE))
            else character()
        }
        else {
            keepUpto <- 1
            while (length(table(substr(additions, 1L, keepUpto))) == 
                1L) keepUpto <- keepUpto + 1L
            addition <- substr(additions[1L], 1L, keepUpto - 
                1L)
            possible <- character()
        }
    }
    list(addition = addition, possible = possible, comps = paste(comps, 
        collapse = " "))
}
