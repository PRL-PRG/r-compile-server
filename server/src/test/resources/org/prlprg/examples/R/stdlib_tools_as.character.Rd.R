#? stdlib
`as.character.Rd` <- function (x, deparse = FALSE, ...) 
{
    ZEROARG <- c("\\cr", "\\dots", "\\ldots", "\\R", "\\tab")
    MULTIARG <- c("\\section", "\\subsection", "\\item", "\\enc", 
        "\\method", "\\S3method", "\\S4method", "\\tabular", 
        "\\if", "\\href", "\\ifelse")
    USERMACROS <- c("USERMACRO", "\\newcommand", "\\renewcommand")
    EQN <- c("\\deqn", "\\eqn", "\\figure")
    modes <- c(RLIKE = 1L, LATEXLIKE = 2L, VERBATIM = 3L, INOPTION = 4L, 
        COMMENTMODE = 5L, UNKNOWNMODE = 6L)
    tags <- c(RCODE = 1L, TEXT = 2L, VERB = 3L, COMMENT = 5L, 
        UNKNOWN = 6L)
    state <- c(braceDepth = 0L, inRString = 0L)
    needBraces <- FALSE
    inEqn <- 0L
    pr <- function(x, quoteBraces) {
        tag <- attr(x, "Rd_tag")
        if (is.null(tag) || tag == "LIST") 
            tag <- ""
        if (is.list(x)) {
            savestate <- state
            state <<- c(0L, 0L)
            needBraces <<- FALSE
            if (tag == "Rd") {
                result <- character()
                for (i in seq_along(x)) result <- c(result, pr(x[[i]], 
                  quoteBraces))
            }
            else if (startsWith(tag, "#")) {
                if (deparse) {
                  dep <- deparseRdElement(x[[1L]][[1L]], c(state, 
                    modes["LATEXLIKE"], inEqn, as.integer(quoteBraces)))
                  result <- c(tag, dep[[1L]])
                }
                else result <- c(tag, x[[1L]][[1L]])
                for (i in seq_along(x[[2L]])) result <- c(result, 
                  pr(x[[2L]][[i]], quoteBraces))
                result <- c(result, "#endif\n")
            }
            else if (tag %in% ZEROARG) {
                result <- tag
                needBraces <<- TRUE
            }
            else if (tag %in% MULTIARG) {
                result <- tag
                for (i in seq_along(x)) result <- c(result, pr(x[[i]], 
                  quoteBraces))
            }
            else if (tag %in% EQN) {
                result <- tag
                inEqn <<- 1L
                result <- c(result, pr(x[[1L]], quoteBraces))
                inEqn <<- 0L
                if (length(x) > 1L) 
                  result <- c(result, pr(x[[2L]], quoteBraces))
            }
            else {
                result <- tag
                if (!is.null(option <- attr(x, "Rd_option"))) 
                  result <- c(result, "[", pr(option, quoteBraces), 
                    "]")
                result <- c(result, "{")
                for (i in seq_along(x)) result <- c(result, pr(x[[i]], 
                  quoteBraces))
                result <- c(result, "}")
            }
            if (state[1L]) 
                result <- pr(x, TRUE)
            state <<- savestate
        }
        else if (tag %in% USERMACROS) {
            result <- c()
        }
        else {
            if (deparse) {
                dep <- deparseRdElement(as.character(x), c(state, 
                  tags[tag], inEqn, as.integer(quoteBraces)))
                result <- dep[[1L]]
                state <<- dep[[2L]][1L:2L]
            }
            else {
                if (inherits(x, "Rd")) 
                  class(x) <- setdiff(class(x), "Rd")
                result <- as.character(x)
            }
            if (needBraces) {
                if (grepl("^[[:alpha:]]", result)) 
                  result <- c("{}", result)
                needBraces <<- FALSE
            }
        }
        result
    }
    if (is.null(attr(x, "Rd_tag"))) 
        attr(x, "Rd_tag") <- "Rd"
    pr(x, quoteBraces = FALSE)
}
