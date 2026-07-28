#? stdlib
`inFunction` <- function (line = .CompletionEnv[["linebuffer"]], cursor = .CompletionEnv[["start"]]) 
{
    parens <- sapply(c("(", ")"), function(s) gregexpr(s, substr(line, 
        1L, cursor), fixed = TRUE)[[1L]], simplify = FALSE)
    parens <- lapply(parens, function(x) x[x > 0])
    temp <- data.frame(i = c(parens[["("]], parens[[")"]]), c = rep.int(c(1, 
        -1), lengths(parens)))
    if (nrow(temp) == 0) 
        return(character())
    temp <- temp[order(-temp$i), , drop = FALSE]
    wp <- which(cumsum(temp$c) > 0)
    if (length(wp)) {
        index <- temp$i[wp[1L]]
        prefix <- substr(line, 1L, index - 1L)
        suffix <- substr(line, index + 1L, cursor + 1L)
        if ((length(grep("=", suffix, fixed = TRUE)) == 0L) && 
            (length(grep(",", suffix, fixed = TRUE)) == 0L)) 
            setIsFirstArg(TRUE)
        if ((length(grep("=", suffix, fixed = TRUE))) && (length(grep(",", 
            substr(suffix, tail.default(gregexpr("=", suffix, 
                fixed = TRUE)[[1L]], 1L), 1000000L), fixed = TRUE)) == 
            0L)) {
            return(character())
        }
        else {
            possible <- suppressWarnings(strsplit(prefix, breakRE, 
                perl = TRUE))[[1L]]
            possible <- possible[nzchar(possible)]
            if (length(possible)) 
                return(tail.default(possible, 1))
            else return(character())
        }
    }
    else {
        return(character())
    }
}
