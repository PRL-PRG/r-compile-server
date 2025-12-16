#? stdlib
`Rd2ex` <- function (Rd, out = "", defines = .Platform$OS.type, stages = "render", 
    outputEncoding = "UTF-8", commentDontrun = TRUE, commentDonttest = FALSE, 
    ...) 
{
    WriteLines <- function(x, con, outputEncoding, ...) {
        if (outputEncoding != "UTF-8") {
            x <- iconv(x, "UTF-8", outputEncoding, mark = FALSE)
            if (anyNA(x)) 
                x <- iconv(x, "UTF-8", outputEncoding, sub = "byte", 
                  mark = FALSE)
        }
        writeLines(x, con, useBytes = TRUE, ...)
    }
    dropNewline <- FALSE
    of0 <- function(...) of1(paste0(...))
    of1 <- function(text) {
        if (dropNewline && length(text)) {
            text[1L] <- psub("^\n", "", text[1L])
            dropNewline <<- FALSE
        }
        WriteLines(text, con, outputEncoding, sep = "")
    }
    wr <- function(x) paste0("###", strwrap(remap(x), 73L, indent = 1L, 
        exdent = 3L), collapse = "\n")
    remap <- function(x) {
        if (!length(x)) 
            return(x)
        x <- psub("\\\\(link|var)\\{([^}]+)\\}", "\\2", x)
        x <- psub("(?<!\\\\)\\\\([%{])", "\\1", x)
        x
    }
    render <- function(x, prefix = "") {
        renderDont <- function(txt, comment, label = TRUE, xtra1 = comment) {
            if (length(txt) == 1L) {
                label1 <- paste0(txt, ": ")
                label2 <- paste0("End(", txt, ")")
            }
            else {
                label1 <- txt[1L]
                label2 <- txt[2L]
            }
            if (label) 
                of0("## ", label1)
            if (xtra1 && length(x) == 1L) {
                render(x[[1L]], prefix)
            }
            else {
                if (!grepl("^\n", x[[1L]][1L], perl = TRUE) && 
                  RdTags(x)[1L] != "COMMENT") {
                  writeLines("", con)
                  render(x[[1L]], paste0(if (comment) 
                    "##D ", prefix))
                }
                else render(x[[1L]], prefix)
                for (i in seq_along(x)[-1]) render(x[[i]], paste0(if (comment) 
                  "##D ", prefix))
                last <- x[[length(x)]]
                if (!grepl("\n$", last[length(last)], perl = TRUE)) 
                  writeLines("", con)
                if (label) {
                  of0("## ", label2, "\n")
                  dropNewline <<- TRUE
                }
            }
        }
        tag <- attr(x, "Rd_tag")
        if (tag %in% c("\\dontshow", "\\testonly")) {
            renderDont("Don't show", comment = FALSE)
        }
        else if (tag == "\\dontdiff") {
            renderDont(c("IGNORE_RDIFF_BEGIN", "IGNORE_RDIFF_END"), 
                comment = FALSE)
        }
        else if (tag == "\\dontrun") {
            renderDont("Not run", commentDontrun, label = commentDontrun)
        }
        else if (tag == "\\donttest") {
            renderDont("No test", commentDonttest, xtra1 = FALSE)
        }
        else if (tag == "COMMENT") {
            if (attr(x, "srcref")[2L] == 1L) 
                dropNewline <<- TRUE
        }
        else if (tag %in% c("\\dots", "\\ldots")) {
            of1("...")
        }
        else if (tag == "\\if" || tag == "\\ifelse") {
            if (testRdConditional("example", x, Rdfile)) 
                for (i in seq_along(x[[2L]])) render(x[[2L]][[i]], 
                  prefix)
            else if (tag == "\\ifelse") 
                for (i in seq_along(x[[3L]])) render(x[[3L]][[i]], 
                  prefix)
        }
        else if (tag == "\\out") {
            for (i in seq_along(x)) of1(x[[i]])
        }
        else if (tag %in% c("USERMACRO", "\\newcommand", "\\renewcommand")) {
        }
        else {
            txt <- unlist(x)
            of0(prefix, remap(txt))
        }
    }
    Rd <- prepare_Rd(Rd, defines = defines, stages = stages, 
        ...)
    Rdfile <- attr(Rd, "Rdfile")
    sections <- RdTags(Rd)
    where <- which(sections == "\\examples")
    if (length(where)) {
        if (is.character(out)) {
            if (out == "") {
                con <- stdout()
            }
            else {
                con <- file(out, "wt")
                on.exit(close(con))
            }
        }
        else {
            con <- out
            out <- summary(con)$description
        }
        if (length(where) > 1L) 
            warning("more than one \\examples section, using the first")
        ex <- Rd[[where[1L]]]
        exl <- unlist(ex)
        if (length(exl) && any(Encoding(exl) != "unknown")) {
            if (any(f <- sections == "\\encoding")) {
                encoding <- unlist(Rd[which(f)])[1L]
                if (nzchar(outputEncoding)) 
                  encoding <- outputEncoding
                else outputEncoding <- encoding
                of0("### Encoding: ", encoding, "\n")
            }
        }
        nameblk <- sections == "\\name"
        if (any(nameblk)) {
            name <- as.character(Rd[[which.max(nameblk)]])
            of0("### Name: ", name, "\n")
        }
        title <- .Rd_format_title(.Rd_get_title(Rd))
        if (!length(title)) 
            title <- "No title found"
        of0(wr(paste0("Title: ", title)), "\n")
        aliasblks <- sections == "\\alias"
        if (any(aliasblks)) {
            aliases <- unlist(Rd[aliasblks])
            sp <- grep(" ", aliases, fixed = TRUE)
            aliases[sp] <- paste0("'", aliases[sp], "'")
            of0(wr(paste0("Aliases: ", paste(aliases, collapse = " "))), 
                "\n")
        }
        keyblks <- sections == "\\keyword"
        if (any(keyblks)) {
            keys <- trimws(unlist(Rd[keyblks])) %w/o% .Rd_keywords_auto
            if (length(keys)) {
                of0(wr(paste("Keywords: ", paste0(keys, collapse = " "))), 
                  "\n")
            }
        }
        writeLines(c("", "### ** Examples"), con)
        for (i in seq_along(ex)) render(ex[[i]])
        of1("\n\n\n")
    }
    invisible(out)
}
