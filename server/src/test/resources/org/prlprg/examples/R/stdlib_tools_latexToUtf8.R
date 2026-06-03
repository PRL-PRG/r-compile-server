#? stdlib
`latexToUtf8` <- function (x) 
{
    i <- 0L
    whitespace <- c(" ", "\t", "\n")
    while (i < length(x)) {
        i <- i + 1L
        a <- x[[i]]
        tag <- attr(a, "latex_tag")
        if (tag == "MACRO") {
            numargs <- latexArgCount[a]
            if (!is.na(numargs)) {
                args <- vector("list", numargs)
                j <- i
                getNext <- TRUE
                k <- 1L
                while (k <= numargs) {
                  if (getNext) {
                    j <- j + 1L
                    if (j > length(x)) {
                      warning("argument for ", c(a), " not found", 
                        domain = NA)
                      nextobj <- latex_tag("", "TEXT")
                      nexttag <- "TEXT"
                      nextchars <- ""
                    }
                    else {
                      nextobj <- x[[j]]
                      nexttag <- attr(nextobj, "latex_tag")
                      if (nexttag == "TEXT") 
                        nextchars <- strsplit(nextobj, "")[[1L]]
                    }
                    getNext <- FALSE
                  }
                  switch(nexttag, TEXT = {
                    args[[k]] <- latex_tag(nextchars[1L], "TEXT")
                    nextchars <- nextchars[-1L]
                    if (!length(nextchars)) getNext <- TRUE
                    if (args[[k]] %in% whitespace) next
                    k <- k + 1L
                  }, COMMENT = getNext <- TRUE, MACRO = {
                    args[[k]] <- nextobj
                    k <- k + 1L
                  }, BLOCK = , ENVIRONMENT = , MATH = , DISPLAYMATH = {
                    args[[k]] <- latexToUtf8(nextobj)
                    k <- k + 1L
                    getNext <- TRUE
                  }, `NULL` = stop("Internal error:  NULL tag", 
                    domain = NA))
                }
                index <- a
                for (i1 in seq_along(args)) {
                  if (is.null(latexTable[[index]])) 
                    break
                  nextobj1 <- args[[i1]]
                  nexttag1 <- attr(nextobj1, "latex_tag")
                  index <- c(index, switch(nexttag1, MACRO = , 
                    TEXT = nextobj1, BLOCK = if (length(nextobj1)) deparseLatex(nextobj1, 
                      dropBraces = TRUE) else " "))
                }
                subst <- latex_tag(latexTable[[index]], "TEXT")
                if (!is.null(subst) && !is.list(subst)) {
                  x[[i]] <- subst
                  if (numargs) {
                    if (nexttag == "TEXT" && length(nextchars)) {
                      nextobj[1L] <- paste(nextchars, collapse = "")
                      x[[j]] <- nextobj
                      j <- j - 1L
                    }
                    while (j > i) {
                      x[[j]] <- NULL
                      j <- j - 1L
                    }
                  }
                }
                else i <- j
            }
        }
        else if (tag == "BLOCK") 
            x[[i]] <- latexToUtf8(a)
    }
    x
}
