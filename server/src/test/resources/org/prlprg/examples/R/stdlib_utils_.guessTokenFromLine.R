#? stdlib
`.guessTokenFromLine` <- function (linebuffer = .CompletionEnv[["linebuffer"]], end = .CompletionEnv[["end"]], 
    update = TRUE) 
{
    linebuffer <- substr(linebuffer, 1L, end)
    insideQuotes <- {
        lbss <- head.default(unlist(strsplit(linebuffer, "")), 
            .CompletionEnv[["end"]])
        ((sum(lbss == "'")%%2 == 1) || (sum(lbss == "\"")%%2 == 
            1))
    }
    start <- if (insideQuotes) 
        suppressWarnings(gregexpr("['\"]", linebuffer, perl = TRUE))[[1L]]
    else suppressWarnings(gregexpr("[^\\.\\w:?$@[\\]]+", linebuffer, 
        perl = TRUE))[[1L]]
    start <- if (all(start < 0L)) 
        0L
    else tail.default(start + attr(start, "match.length"), 1L) - 
        1L
    token <- substr(linebuffer, start + 1L, end)
    if (update) {
        .CompletionEnv[["start"]] <- start
        .CompletionEnv[["token"]] <- token
        .CompletionEnv[["token"]]
    }
    else list(start = start, token = token)
}
