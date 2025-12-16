#? stdlib
`prompt.default` <- function (object, filename = NULL, name = NULL, force.function = FALSE, 
    ...) 
{
    is.missing.arg <- function(arg) typeof(arg) == "symbol" && 
        deparse(arg) == ""
    if (missing(name)) 
        name <- if (is.character(object)) 
            object
        else {
            name <- substitute(object)
            if (is.name(name)) 
                as.character(name)
            else if (is.call(name) && (as.character(name[[1L]]) %in% 
                c("::", ":::", "getAnywhere"))) {
                name <- as.character(name)
                name[length(name)]
            }
            else stop("cannot determine a usable name")
        }
    if (is.null(filename)) 
        filename <- paste0(name, ".Rd")
    x <- if (!missing(object)) 
        object
    else {
        x <- get(name, envir = parent.frame())
    }
    if (!(is.function(x) || force.function)) 
        return(promptData(x, filename = filename, name = name))
    n <- length(argls <- formals(x))
    if (n) {
        arg.names <- arg.n <- names(argls)
        arg.n[arg.n == "..."] <- "\\dots"
    }
    Call <- paste0(name, "(")
    for (i in seq_len(n)) {
        Call <- paste0(Call, arg.names[i], if (!is.missing.arg(argls[[i]])) 
            paste0(" = ", deparse1(argls[[i]], "\n", backtick = TRUE)))
        if (i != n) 
            Call <- paste0(Call, ", ")
    }
    x.def <- deparse(x)
    if (any(br <- startsWith(x.def, "}"))) 
        x.def[br] <- paste0("  ", x.def[br])
    x.def <- gsub("%", "\\%", x.def, fixed = TRUE)
    Call <- gsub("%", "\\%", Call, fixed = TRUE)
    Rdtxt <- list(name = paste0("\\name{", name, "}"), aliases = c(paste0("\\alias{", 
        name, "}"), paste("%- Also NEED an '\\alias' for EACH other topic", 
        "documented here.")), title = c("\\title{", "A Capitalized Title (ideally limited to 65 characters)", 
        "}"), description = c("\\description{", paste("%%  ~~ A concise (1-5 lines) description of what", 
        "the function does. ~~"), "}"), usage = c("\\usage{", 
        paste0(Call, ")"), "}", paste("%- maybe also 'usage' for other objects", 
            "documented here.")), arguments = NULL, details = c("\\details{", 
        paste("%%  ~~ If necessary, more details than the", "description above ~~"), 
        "}"), value = c("\\value{", "%%  ~Describe the value returned", 
        "%%  If it is a LIST, use", "%%  \\item{comp1 }{Description of 'comp1'}", 
        "%%  \\item{comp2 }{Description of 'comp2'}", "%% ...", 
        "}"), references = paste("\\references{\n%% ~put references to the", 
        "literature/web site here ~\n}"), author = "\\author{\n%%  ~~who you are~~\n}", 
        note = c("\\note{\n%%  ~~further notes~~\n}", "", paste("%% ~Make other sections like Warning with", 
            "\\section{Warning }{....} ~"), ""), seealso = paste("\\seealso{\n%% ~~objects to See Also as", 
            "\\code{\\link{help}}, ~~~\n}"), examples = c("\\examples{", 
            "##---- Should be DIRECTLY executable !! ----", "##-- ==>  Define data, use random,", 
            "##--\tor standard data sets, see data().", "", "## The function is currently defined as", 
            x.def, "}"), keywords = c("% Add one or more standard keywords, see file 'KEYWORDS' in the", 
            "% R documentation directory (show via RShowDoc(\"KEYWORDS\")):", 
            "% \\keyword{ ~kwd1 }", "% \\keyword{ ~kwd2 }", "% Use only one keyword per line.", 
            "% For non-standard keywords, use \\concept instead of \\keyword:", 
            "% \\concept{ ~cpt1 }", "% \\concept{ ~cpt2 }", "% Use only one concept per line."))
    Rdtxt$arguments <- if (n) 
        c("\\arguments{", paste0("  \\item{", arg.n, "}{", "\n%%     ~~Describe \\code{", 
            arg.n, "} here~~\n}"), "}")
    if (is.na(filename)) 
        return(Rdtxt)
    cat(unlist(Rdtxt), file = filename, sep = "\n")
    message(gettextf("Created file named %s.", sQuote(filename)), 
        "\n", gettext("Edit the file and move it to the appropriate directory."), 
        domain = NA)
    invisible(filename)
}
