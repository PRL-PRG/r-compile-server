#? stdlib
`transformMethod` <- function (i, blocks, Rdfile) 
{
    editblock <- function(block, newtext) list(tagged(newtext, 
        attr(block, "Rd_tag"), attr(block, "srcref")))
    chars <- NULL
    char <- NULL
    j <- NULL
    findOpen <- function(i) {
        j <- i
        char <- NULL
        while (j < length(blocks)) {
            j <- j + 1L
            tag <- attr(blocks[[j]], "Rd_tag")
            if (tag == "RCODE") {
                chars <- strsplit(blocks[[j]], "")[[1]]
                parens <- cumsum((chars == "(") - (chars == ")"))
                if (any(parens > 0)) {
                  char <- which.max(parens > 0)
                  break
                }
            }
        }
        if (is.null(char)) 
            stopRd(block, Rdfile, sprintf("no parenthesis following %s", 
                blocktag))
        chars <<- chars
        char <<- char
        j <<- j
    }
    findComma <- function(i) {
        j <- i
        level <- 1L
        char <- NULL
        while (j < length(blocks)) {
            j <- j + 1L
            tag <- attr(blocks[[j]], "Rd_tag")
            if (tag == "RCODE") {
                chars <- strsplit(blocks[[j]], "")[[1]]
                parens <- level + cumsum((chars == "(") - (chars == 
                  ")"))
                if (any(parens == 1 & chars == ",")) {
                  char <- which.max(parens == 1 & chars == ",")
                  break
                }
                if (any(parens == 0)) 
                  break
                level <- parens[length(parens)]
            }
        }
        if (is.null(char)) 
            stopRd(block, Rdfile, sprintf("no comma in argument list following %s", 
                blocktag))
        chars <<- chars
        char <<- char
        j <<- j
    }
    findClose <- function(i) {
        j <- i
        level <- 1L
        char <- NULL
        while (j < length(blocks)) {
            j <- j + 1L
            tag <- attr(blocks[[j]], "Rd_tag")
            if (tag == "RCODE") {
                chars <- strsplit(blocks[[j]], "")[[1]]
                parens <- level + cumsum((chars == "(") - (chars == 
                  ")"))
                if (any(parens == 0)) {
                  char <- which(parens == 0)[1]
                  break
                }
                level <- parens[length(parens)]
            }
        }
        if (is.null(char)) 
            stopRd(block, Rdfile, sprintf("no closing parenthesis following %s", 
                blocktag))
        chars <<- chars
        char <<- char
        j <<- j
    }
    rewriteBlocks <- function() c(blocks[seq_len(j - 1L)], editblock(blocks[[j]], 
        paste(chars[seq_len(char)], collapse = "")), if (char < 
        length(chars)) editblock(blocks[[j]], paste(chars[-seq_len(char)], 
        collapse = "")), if (j < length(blocks)) blocks[-seq_len(j)])
    deleteBlanks <- function() {
        while (char < length(chars)) {
            if (chars[char + 1] == " ") {
                char <- char + 1
                chars[char] <- ""
            }
            else break
        }
        char <<- char
        chars <<- chars
    }
    block <- blocks[[i]]
    blocktag <- attr(block, "Rd_tag")
    srcref <- attr(block, "srcref")
    class <- block[[2L]]
    generic <- as.character(block[[1L]])
    default <- as.character(class) == "default"
    if (generic %in% c("[", "[[", "$")) {
        findOpen(i)
        chars[char] <- ""
        blocks <- c(blocks[seq_len(j - 1L)], editblock(blocks[[j]], 
            paste(chars[seq_len(char)], collapse = "")), if (char < 
            length(chars)) editblock(blocks[[j]], paste(chars[-seq_len(char)], 
            collapse = "")), if (j < length(blocks)) blocks[-seq_len(j)])
        findComma(j)
        chars[char] <- generic
        deleteBlanks()
        blocks <- rewriteBlocks()
        findClose(j)
        chars[char] <- switch(generic, `[` = "]", `[[` = "]]", 
            `$` = "")
        blocks[j] <- editblock(blocks[[j]], paste(chars, collapse = ""))
        methodtype <- if (grepl("<-", blocks[[j]])) 
            "replacement "
        else ""
    }
    else if (grepl(sprintf("^%s$", paste(c("\\+", "\\-", "\\*", 
        "\\/", "\\^", "<=?", ">=?", "!=?", "==", "\\&", "\\|", 
        "!", "\\%[[:alnum:][:punct:]]*\\%"), collapse = "|")), 
        generic)) {
        findOpen(i)
        if (generic != "!") {
            chars[char] <- ""
            blocks <- rewriteBlocks()
            findComma(j)
            chars[char] <- paste0(" ", generic, " ")
            deleteBlanks()
            blocks <- rewriteBlocks()
        }
        else {
            chars[char] <- "!"
            blocks <- rewriteBlocks()
        }
        findClose(j)
        chars[char] <- ""
        blocks[j] <- editblock(blocks[[j]], paste(chars, collapse = ""))
        methodtype <- ""
    }
    else {
        findOpen(i)
        chars[char] <- paste0(generic, "(")
        blocks <- rewriteBlocks()
        findClose(j)
        methodtype <- if (grepl("<-", blocks[[j]])) 
            "replacement "
        else ""
    }
    if (blocktag == "\\S4method") {
        blocks <- if (nchar(class) > 50L) {
            cl <- paste0("'", as.character(class), "'")
            if (nchar(cl) > 70L) {
                cl <- strsplit(cl, ",")[[1L]]
                ncl <- length(cl)
                cl[-ncl] <- paste0(cl[-ncl], ",")
                cl[-1L] <- paste0("  ", cl[-1L])
            }
            cl <- paste("##", cl, collapse = "\n")
            c(blocks[seq_len(i - 1L)], list(tagged(paste0("## S4 ", 
                methodtype, "method for signature \n"), "RCODE", 
                srcref)), list(tagged(cl, "TEXT", srcref)), list(tagged("\n", 
                "RCODE", srcref)), blocks[-seq_len(i)])
        }
        else c(blocks[seq_len(i - 1L)], list(tagged(paste0("## S4 ", 
            methodtype, "method for signature '"), "RCODE", srcref)), 
            class, list(tagged("'\n", "RCODE", srcref)), blocks[-seq_len(i)])
    }
    else if (default) 
        blocks <- c(blocks[seq_len(i - 1)], list(tagged(paste0("## Default S3 ", 
            methodtype, "method:\n"), "RCODE", srcref)), blocks[-seq_len(i)])
    else blocks <- c(blocks[seq_len(i - 1)], list(tagged(paste0("## S3 ", 
        methodtype, "method for class '"), "RCODE", srcref)), 
        class, list(tagged("'\n", "RCODE", srcref)), blocks[-seq_len(i)])
    blocks
}
