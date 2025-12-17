#? stdlib
`Rdiff` <- function (from, to, useDiff = FALSE, forEx = FALSE, nullPointers = TRUE, 
    Log = FALSE) 
{
    clean <- function(txt) {
        if (!length(txt)) 
            return(txt)
        if (length(top <- grep("^(R version|R : Copyright|R Under development)", 
            txt, perl = TRUE, useBytes = TRUE)) && length(bot <- grep("quit R.$", 
            txt, perl = TRUE, useBytes = TRUE))) 
            txt <- txt[-(top[1L]:bot[1L])]
        ll <- grep("</HEADER>", txt, fixed = TRUE, useBytes = TRUE)
        if (length(ll)) 
            txt <- txt[-seq_len(max(ll))]
        ll <- grep("<FOOTER>", txt, fixed = TRUE, useBytes = TRUE)
        if (length(ll)) 
            txt <- txt[seq_len(max(ll) - 1L)]
        if (forEx) {
            ll <- grep("\".old_wd\"", txt, fixed = TRUE, useBytes = TRUE)
            if (length(ll)) 
                txt <- txt[-ll]
        }
        nl <- length(txt)
        if (nl > 3L && startsWith(txt[nl - 2L], "> proc.time()")) 
            txt <- txt[1:(nl - 3L)]
        txt <- txt[(cumsum(txt == "> ## IGNORE_RDIFF_BEGIN") <= 
            cumsum(txt == "> ## IGNORE_RDIFF_END"))]
        if (nullPointers) {
            txt <- gsub("<(environment|bytecode|pointer|promise): [x[:xdigit:]]+>", 
                "<\\1: 0>", txt, useBytes = TRUE)
            txt <- sub("<hashtable.*>", "<hashtable output>", 
                txt, useBytes = TRUE)
        }
        txt <- .canonicalize_quotes(txt)
        if (.Platform$OS.type == "windows") {
            txt <- gsub(paste0("(", rawToChar(as.raw(145)), "|", 
                rawToChar(as.raw(146)), ")"), "'", txt, perl = TRUE, 
                useBytes = TRUE)
            txt <- gsub(paste0("(", rawToChar(as.raw(147)), "|", 
                rawToChar(as.raw(148)), ")"), "\"", txt, perl = TRUE, 
                useBytes = TRUE)
        }
        txt <- txt[!grepl("options(pager = \"console\")", txt, 
            fixed = TRUE, useBytes = TRUE)]
        pat <- "(^Time |^Loading required package|^Package [A-Za-z][A-Za-z0-9]+ loaded|^<(environment|promise|pointer|bytecode):|^End.Don't show)"
        txt[!grepl(pat, txt, perl = TRUE, useBytes = TRUE)]
    }
    clean2 <- function(txt) {
        eoh <- grep("^> options\\(warn = 1\\)$", txt, useBytes = TRUE)
        if (length(eoh)) 
            txt[-(1L:eoh[1L])]
        else txt
    }
    trimPDF <- function(txt) {
        if (length(txt) < 2L || !startsWith(txt[1L], "%PDF")) 
            stop("not a PDF file")
        txt <- if (startsWith(txt[1L], "%")) 
            txt[-(1:2)]
        else txt[-1L]
        pat <- "(^/CreationDate |^/ModDate |^/Producer)"
        txt[!grepl(pat, txt, perl = TRUE, useBytes = TRUE)]
    }
    useDiff0 <- useDiff
    left <- readLines(from)
    right <- readLines(to)
    asPDF <- length(left) >= 1L && startsWith(left[1L], "%PDF")
    if (useDiff && !nzchar(Sys.which("diff"))) {
        if (!asPDF) 
            warning("'diff' is not available so useDiff = FALSE will be used")
        useDiff <- FALSE
    }
    if (asPDF) {
        if (!useDiff) {
            out <- if (!useDiff0) 
                "comparing PDF files requires useDiff = TRUE"
            else "comparing PDF files requires 'diff'"
            if (Log) 
                return(list(status = 0L, out = out))
            else {
                message(out)
                return(invisible(0L))
            }
        }
        left <- trimPDF(left)
        right <- trimPDF(right)
    }
    else {
        left <- clean(left)
        right <- clean(right)
        if (forEx) {
            left <- clean2(left)
            left <- filtergrep("[.](format_|)ptime", left, useBytes = TRUE)
            right <- clean2(right)
        }
    }
    if (!useDiff) {
        if (length(left) == length(right)) {
            bleft <- gsub("[[:space:]]*$", "", left, useBytes = TRUE)
            bright <- gsub("[[:space:]]*$", "", right, useBytes = TRUE)
            bleft <- gsub("[[:space:]]+", " ", bleft, useBytes = TRUE)
            bright <- gsub("[[:space:]]+", " ", bright, useBytes = TRUE)
            if (all(bleft == bright)) 
                return(if (Log) list(status = 0L, out = character()) else 0L)
            cat("\n")
            diff <- bleft != bright
            for (i in which(diff)) cat(i, "c", i, "\n< ", left[i], 
                "\n", "---\n> ", right[i], "\n", sep = "")
            if (Log) {
                i <- which(diff)
                out <- paste0(i, "c", i, "\n< ", left[i], "\n", 
                  "---\n> ", right[i])
                list(status = 1L, out = out)
            }
            else invisible(1L)
        }
        else {
            out <- "files differ in number of lines"
            if (Log) 
                list(status = 2L, out = out)
            else {
                message(out)
                invisible(2L)
            }
        }
    }
    else {
        out <- character()
        a <- tempfile("Rdiffa")
        writeLines(left, a)
        b <- tempfile("Rdiffb")
        writeLines(right, b)
        if (Log) {
            tf <- tempfile()
            status <- system2("diff", c("-bw", shQuote(a), shQuote(b)), 
                stdout = tf, stderr = tf)
            list(status = status, out = c(out, readLines(tf)))
        }
        else system(paste("diff -bw", shQuote(a), shQuote(b)))
    }
}
