#? stdlib
`.completeToken` <- function (custom = TRUE) 
{
    custom.completer <- rc.getOption("custom.completer")
    if (custom && is.function(custom.completer)) 
        return(custom.completer(.CompletionEnv))
    text <- .CompletionEnv[["token"]]
    if (isInsideQuotes()) {
        if (.CompletionEnv$settings[["quotes"]]) {
            fullToken <- .guessTokenFromLine(update = FALSE)
            probablyHelp <- (fullToken$start >= 2L && ((substr(.CompletionEnv[["linebuffer"]], 
                fullToken$start - 1L, fullToken$start - 1L)) == 
                "?"))
            if (probablyHelp) {
                fullToken$prefix <- .guessTokenFromLine(end = fullToken$start - 
                  2, update = FALSE)$token
            }
            probablyName <- ((fullToken$start > 2L && ((substr(.CompletionEnv[["linebuffer"]], 
                fullToken$start - 1L, fullToken$start - 1L)) == 
                "$")) || (fullToken$start > 3L && ((substr(.CompletionEnv[["linebuffer"]], 
                fullToken$start - 2L, fullToken$start - 1L)) == 
                "[[")))
            probablyNamespace <- (fullToken$start > 3L && ((substr(.CompletionEnv[["linebuffer"]], 
                fullToken$start - 2L, fullToken$start - 1L)) %in% 
                c("::")))
            probablySpecial <- probablyHelp || probablyName || 
                probablyNamespace
            tentativeCompletions <- if (probablyHelp) {
                substring(helpCompletions(fullToken$prefix, fullToken$token), 
                  2L + nchar(fullToken$prefix), 1000L)
            }
            else if (!probablySpecial) 
                fileCompletions(fullToken$token)
            else if (is.function(fcustomQuote <- rc.getOption("custom.quote.completer"))) 
                fcustomQuote(fullToken)
            .setFileComp(FALSE)
            .CompletionEnv[["comps"]] <- substring(tentativeCompletions, 
                1L + nchar(fullToken$token) - nchar(text), 1000L)
        }
        else {
            .CompletionEnv[["comps"]] <- character()
            .setFileComp(TRUE)
        }
    }
    else {
        .setFileComp(FALSE)
        setIsFirstArg(FALSE)
        guessedFunction <- if (.CompletionEnv$settings[["args"]]) 
            inFunction(.CompletionEnv[["linebuffer"]], .CompletionEnv[["start"]])
        else ""
        .CompletionEnv[["fguess"]] <- guessedFunction
        fargComps <- functionArgs(guessedFunction, text)
        if (getIsFirstArg() && length(guessedFunction) && guessedFunction %in% 
            c("library", "require", "data")) {
            .CompletionEnv[["comps"]] <- fargComps
            return()
        }
        lastArithOp <- tail.default(gregexpr("[\"'^/*+-]", text)[[1L]], 
            1)
        if (haveArithOp <- (lastArithOp > 0)) {
            prefix <- substr(text, 1L, lastArithOp)
            text <- substr(text, lastArithOp + 1L, 1000000L)
        }
        spl <- specialOpLocs(text)
        comps <- if (length(spl)) 
            specialCompletions(text, spl)
        else {
            appendFunctionSuffix <- !any(guessedFunction %in% 
                c("help", "args", "formals", "example", "do.call", 
                  "environment", "page", "apply", "sapply", "lapply", 
                  "tapply", "mapply", "methods", "fix", "edit"))
            normalCompletions(text, check.mode = appendFunctionSuffix)
        }
        if (haveArithOp && length(comps)) {
            comps <- paste0(prefix, comps)
        }
        comps <- c(fargComps, comps)
        if (is.function(fcustom <- rc.getOption("custom.argument.completer"))) 
            comps <- c(fcustom(guessedFunction, text), comps)
        .CompletionEnv[["comps"]] <- comps
    }
}
