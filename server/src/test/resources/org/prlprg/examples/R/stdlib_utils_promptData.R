#? stdlib
`promptData` <- function (object, filename = NULL, name = NULL) 
{
    if (missing(name)) 
        name <- if (is.character(object)) 
            object
        else {
            name <- substitute(object)
            if (is.name(name)) 
                as.character(name)
            else stop("cannot determine a usable name")
        }
    if (is.null(filename)) 
        filename <- paste0(name, ".Rd")
    x <- if (!missing(object)) 
        object
    else {
        x <- get(name, envir = parent.frame())
    }
    if (is.data.frame(x)) {
        make_item_tag <- function(s) {
            if (grepl("^([[:alpha:]]|[.][[:alpha:]._])[[:alnum:]._]*$", 
                s)) {
                paste0("\\code{", s, "}")
            }
            else {
                paste0("\\samp{", gsub("([%{}])", "\\\\\\1", 
                  s), "}")
            }
        }
        fmt <- c("\\format{", paste("  A data frame with", nrow(x), 
            "observations on the following", ifelse(ncol(x) == 
                1, "variable.", paste(ncol(x), "variables."))), 
            "  \\describe{")
        for (i in names(x)) {
            xi <- x[[i]]
            fmt <- c(fmt, paste0("    \\item{", make_item_tag(i), 
                "}{", if (inherits(xi, "ordered")) {
                  paste("an", data.class(xi), "factor with levels", 
                    paste0("\\code{", levels(xi), "}", collapse = " < "), 
                    collapse = " ")
                } else if (inherits(xi, "factor")) {
                  paste("a factor with levels", paste0("\\code{", 
                    levels(xi), "}", collapse = " "), collapse = " ")
                } else if (is.vector(xi)) {
                  paste("a", data.class(xi), "vector")
                } else if (is.matrix(xi)) {
                  paste("a matrix with", ncol(xi), "columns")
                } else {
                  paste("a", data.class(xi))
                }, "}"))
        }
        fmt <- c(fmt, "  }", "}")
    }
    else {
        tf <- tempfile()
        on.exit(unlink(tf))
        sink(tf)
        str(object)
        sink()
        fmt <- c("\\format{", "  The format is:", scan(tf, "", 
            quiet = !getOption("verbose"), sep = "\n"), "}")
    }
    Rdtxt <- list(name = paste0("\\name{", name, "}"), aliases = paste0("\\alias{", 
        name, "}"), docType = "\\docType{data}", title = c("\\title{", 
        "A Capitalized Title for the Data Set", "}"), description = c("\\description{", 
        "%%  ~~ A concise (1-5 lines) description of the dataset. ~~", 
        "}"), usage = paste0("\\usage{data(\"", name, "\")}"), 
        format = fmt, details = c("\\details{", paste("%%  ~~ If necessary, more details than the", 
            "__description__ above ~~"), "}"), source = c("\\source{", 
            paste("%%  ~~ reference to a publication or URL", 
                "from which the data were obtained ~~"), "}"), 
        references = c("\\references{", "%%  ~~ possibly secondary sources and usages ~~", 
            "}"), examples = c("\\examples{", paste0("data(", 
            name, ")"), paste0("## maybe str(", name, ") ; plot(", 
            name, ") ..."), "}"), keywords = "\\keyword{datasets}")
    if (is.na(filename)) 
        return(Rdtxt)
    cat(unlist(Rdtxt), file = filename, sep = "\n")
    message(gettextf("Created file named %s.", sQuote(filename)), 
        "\n", gettext("Edit the file and move it to the appropriate directory."), 
        domain = NA)
    invisible(filename)
}

# Examples
oldwd <- setwd(tempdir())
promptData(sunspots)
unlink("sunspots.Rd")
setwd(oldwd)

