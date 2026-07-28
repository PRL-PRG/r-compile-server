#? stdlib
`?` <- function (e1, e2) 
{
    if (missing(e2)) {
        type <- NULL
        topicExpr <- substitute(e1)
    }
    else {
        type <- substitute(e1)
        topicExpr <- substitute(e2)
    }
    search <- (is.call(topicExpr) && topicExpr[[1L]] == quote(`?`))
    if (search) {
        topicExpr <- topicExpr[[2L]]
        if (is.call(te <- topicExpr) && te[[1L]] == quote(`?`) && 
            is.call(te <- topicExpr[[2L]]) && te[[1L]] == quote(`?`)) {
            cat("Contacting Delphi...")
            flush.console()
            Sys.sleep(2 + stats::rpois(1, 2))
            cat("the oracle is unavailable.\nWe apologize for any inconvenience.\n")
            return(invisible())
        }
    }
    if (is.call(topicExpr) && (topicExpr[[1L]] == quote(`::`) || 
        topicExpr[[1L]] == quote(`:::`))) {
        package <- as.character(topicExpr[[2L]])
        topicExpr <- topicExpr[[3L]]
    }
    else package <- NULL
    if (search) {
        if (is.null(type)) 
            return(eval(substitute(help.search(TOPIC, package = PACKAGE), 
                list(TOPIC = as.character(topicExpr), PACKAGE = package))))
        else return(eval(substitute(help.search(TOPIC, fields = FIELD, 
            package = PACKAGE), list(TOPIC = as.character(topicExpr), 
            FIELD = as.character(type), PACKAGE = package))))
    }
    else {
        if (is.null(type)) {
            if (is.call(topicExpr)) 
                return(.helpForCall(topicExpr, parent.frame()))
            topic <- if (is.name(topicExpr)) 
                as.character(topicExpr)
            else e1
            return(eval(substitute(help(TOPIC, package = PACKAGE), 
                list(TOPIC = topic, PACKAGE = package))))
        }
        else {
            type <- if (is.name(type)) 
                as.character(type)
            else e1
            topic <- if (is.name(topicExpr)) 
                as.character(topicExpr)
            else {
                if (is.call(topicExpr) && identical(type, "method")) 
                  return(.helpForCall(topicExpr, parent.frame(), 
                    FALSE))
                e2
            }
            if (type == "package") 
                package <- topic
            h <- .tryHelp(topicName(type, topic), package = package)
            if (is.null(h)) {
                if (is.language(topicExpr)) 
                  topicExpr <- deparse(topicExpr)
                stop(gettextf("no documentation of type %s and topic %s (or error in processing help)", 
                  sQuote(type), sQuote(topicExpr)), domain = NA)
            }
            h
        }
    }
}
