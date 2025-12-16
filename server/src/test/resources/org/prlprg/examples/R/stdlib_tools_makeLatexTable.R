#? stdlib
`makeLatexTable` <- function (utf8table) 
{
    all <- list()
    for (i in seq_along(utf8table)) {
        if (grepl("^[{].*[}]$", c <- utf8table[i])) 
            all[[as.character(i)]] <- parseLatex(c)[[1L]]
    }
    table <- list()
    for (i in names(all)) {
        codepoint <- as.numeric(i)
        macro <- all[[i]][[1L]]
        args <- all[[i]][-1L]
        index <- macro
        getNext <- TRUE
        repeat {
            if (getNext) {
                if (!length(args)) 
                  break
                nextobj <- args[[1L]]
                args <- args[-1L]
                nexttag <- attr(nextobj, "latex_tag")
                if (nexttag == "TEXT") 
                  nextchars <- strsplit(nextobj, "")[[1L]]
                else nextchars <- character()
                getNext <- FALSE
            }
            if (nexttag == "TEXT") {
                if (length(nextchars)) {
                  arg <- nextchars[1L]
                  nextchars <- nextchars[-1L]
                }
                else {
                  getNext <- TRUE
                  next
                }
            }
            else if (nexttag == "BLOCK") {
                if (!length(nextobj)) {
                  arg <- " "
                  getNext <- TRUE
                }
                else {
                  arg <- nextobj[[1L]]
                  nextobj <- nextobj[-1L]
                  argtag <- attr(arg, "latex_tag")
                  if (argtag != "TEXT") 
                    stop("internal error", domain = NA)
                }
            }
            else if (nexttag == "MACRO") {
                arg <- nextobj[1L]
                getNext <- TRUE
            }
            index <- c(index, arg)
        }
        repeat {
            oldArgCount <- latexArgCount[macro]
            argCount <- length(index) - 1L
            if (is.na(oldArgCount)) 
                latexArgCount[macro] <<- argCount
            else if (oldArgCount != length(index) - 1L) 
                stop("Inconsistent arg count for ", macro, domain = NA)
            for (i in seq_along(index)) {
                if (is.null(entry <- table[[index[1L:i]]])) {
                  if (i < length(index)) 
                    table[[index[1L:i]]] <- list()
                  else table[[index]] <- intToUtf8(codepoint)
                }
                else if (!is.list(entry)) 
                  warning("entry for ", codepoint, "=", index[1L:i], 
                    " already defined to be", entry, domain = NA)
            }
            if (index[1L] != "\\a") 
                break
            index <- index[-1L]
            index[1L] <- macro <- sub("^", "\\\\", index[1L])
        }
    }
    table[["\\textemdash"]] <- "—"
    latexArgCount[["\\textemdash"]] <<- 0
    table[["\\AA"]] <- "Å"
    latexArgCount[["\\AA"]] <<- 0
    table[["\\aa"]] <- "å"
    latexArgCount[["\\aa"]] <<- 0
    for (accent in c("`", "'", "^", "\"")) {
        table[[c(paste0("\\", accent), "i")]] <- table[[c(paste0("\\", 
            accent), "\\i")]]
        if (accent %in% c("'", "`")) 
            table[[c("\\a", accent, "i")]] <- table[[c("\\a", 
                accent, "\\i")]]
    }
    table[["\\&"]] <- "&"
    latexArgCount[["\\&"]] <<- 0
    table[["\\~"]][[" "]] <- "~"
    table[["\\%"]] <- "%"
    latexArgCount[["\\%"]] <<- 0
    table
}
