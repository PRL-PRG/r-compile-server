#? stdlib
`promptMethods` <- function (f, filename = NULL, methods) 
{
    escape <- function(txt) gsub("%", "\\%", txt, fixed = TRUE)
    packageString <- ""
    fdef <- getGeneric(f)
    if (!isGeneric(f, fdef = fdef)) 
        stop(gettextf("no generic function found corresponding to %s", 
            sQuote(f)), domain = NA)
    if (missing(methods)) {
        methods <- findMethods(fdef)
        where <- .genEnv(fdef, topenv(parent.frame()))
        if (!identical(where, .GlobalEnv)) 
            packageString <- sprintf("in Package \\pkg{%s}", 
                getPackageName(where))
    }
    fullName <- utils:::topicName("methods", f)
    n <- length(methods)
    labels <- character(n)
    aliases <- character(n)
    signatures <- findMethodSignatures(methods = methods, target = TRUE)
    args <- colnames(signatures)
    for (i in seq_len(n)) {
        sigi <- signatures[i, ]
        labels[[i]] <- sprintf("\\code{signature(%s)}", paste(sprintf("%s = \"%s\"", 
            args, escape(sigi)), collapse = ", "))
        aliases[[i]] <- paste0("\\alias{", utils:::topicName("method", 
            c(f, signatures[i, ])), "}")
    }
    text <- paste0("\n\\item{", labels, "}{\n%%  ~~describe this method here~~\n}")
    text <- c("\\section{Methods}{\n\\describe{", text, "}}")
    aliasText <- c(paste0("\\alias{", escape(fullName), "}"), 
        escape(aliases))
    if (isFALSE(filename)) 
        return(c(aliasText, text))
    if (is.null(filename) || isTRUE(filename)) 
        filename <- paste0(fullName, ".Rd")
    Rdtxt <- list(name = paste0("\\name{", fullName, "}"), type = "\\docType{methods}", 
        aliases = aliasText, title = sprintf("\\title{ ~~ Methods for Function \\code{%s} %s ~~}", 
            f, packageString), description = paste0("\\description{\n ~~ Methods for function", 
            " \\code{", f, "} ", sub("^in Package", "in package", 
                packageString), " ~~\n}"), `section{Methods}` = text, 
        keywords = c("\\keyword{methods}", "\\keyword{ ~~ other possible keyword(s) ~~ }"))
    if (is.na(filename)) 
        return(Rdtxt)
    cat(unlist(Rdtxt), file = filename, sep = "\n")
    .message("A shell of methods documentation has been written", 
        .fileDesc(filename), ".\n")
    invisible(filename)
}

# Examples
