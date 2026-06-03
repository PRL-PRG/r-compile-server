#? stdlib
`isInsideQuotes` <- function () 
{
    (.CompletionEnv[["start"]] > 0 && {
        linebuffer <- .CompletionEnv[["linebuffer"]]
        lbss <- head.default(unlist(strsplit(linebuffer, "")), 
            .CompletionEnv[["end"]])
        ((sum(lbss == "'")%%2 == 1) || (sum(lbss == "\"")%%2 == 
            1))
    })
}
