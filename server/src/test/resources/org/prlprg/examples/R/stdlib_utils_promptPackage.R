#? stdlib
`promptPackage` <- function (package, lib.loc = NULL, filename = NULL, name = NULL, 
    final = FALSE) 
{
    insert1 <- function(field, new) {
        prev <- Rdtxt[[field]]
        Rdtxt[[field]] <<- c(prev[-length(prev)], new, prev[length(prev)])
    }
    insert2 <- function(field, new) insert1(field, paste("%%  ~~", 
        new, "~~"))
    if (missing(name)) 
        name <- paste0(package, "-package")
    if (is.null(filename)) 
        filename <- paste0(name, ".Rd")
    Rdtxt <- list(name = paste0("\\name{", name, "}"), aliases = paste0("\\alias{", 
        c(name, package), "}"), docType = "\\docType{package}", 
        title = c("\\title{", "}"), description = c("\\description{", 
            "}"), details = character(0L), author = c("\\author{", 
            "}"), references = character(0L), keywords = "\\keyword{package}")
    insert1("title", paste0("\\packageTitle{", package, "}"))
    insert1("description", paste0("\\packageDescription{", package, 
        "}"))
    insert1("author", c(paste0("\\packageAuthor{", package, "}"), 
        "", paste("Maintainer:", paste0("\\packageMaintainer{", 
            package, "}"))))
    if (!final) {
        Rdtxt$details <- c("\\details{", "}")
        insert2("details", c("An overview of how to use the package,", 
            "including the most important functions"))
        Rdtxt$meta <- c("", paste0("%% Uncomment below to imitate parts of library(help = ", 
            package, ")"), paste0("%\\section{The \\file{DESCRIPTION} File}{", 
            "\\packageDESCRIPTION{", package, "}}"), paste0("%\\section{Documentation Index}{", 
            "\\packageIndices{", package, "}}"), "")
        Rdtxt$references <- c("\\references{", paste("%%  ~~", 
            "Literature or other references for background information", 
            "~~"), "}")
        Rdtxt$seealso <- c("\\seealso{", "}")
        insert2("seealso", c("Optional links to other man pages, e.g.", 
            "\\code{\\link[<pkg>:<pkg>-package]{<pkg>}}"))
        Rdtxt$examples <- c("\\examples{", "%%  ~~ Optional simple examples of the most important functions ~~", 
            "}")
    }
    if (is.na(filename)) 
        return(Rdtxt[lengths(Rdtxt) > 0L])
    cat(unlist(Rdtxt), file = filename, sep = "\n")
    message(gettextf("Created file named %s.", sQuote(filename)), 
        "\n", gettext("Edit the file and move it to the appropriate directory."), 
        domain = NA)
    invisible(filename)
}

# Examples
filename <- tempfile()
\dontdiff{promptPackage("utils", filename = filename)}
file.show(filename)
unlink(filename)

