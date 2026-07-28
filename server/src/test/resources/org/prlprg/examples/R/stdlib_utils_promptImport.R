#? stdlib
`promptImport` <- function (object, filename = NULL, name = NULL, importedFrom = NULL, 
    importPage = name, ...) 
{
    if (missing(name)) 
        name <- if (is.character(object)) 
            object
        else {
            name <- substitute(object)
            if (is.name(name)) 
                as.character(name)
            else if (is.language(name) && length(name) == 3 && 
                identical(name[[1]], as.name("::"))) 
                as.character(name[[3]])
            else stop("cannot determine a usable name")
        }
    if (is.null(filename)) 
        filename <- paste0(name, ".Rd")
    x <- if (!missing(object)) 
        object
    else {
        x <- get(name, envir = parent.frame())
    }
    if (is.null(importedFrom)) {
        if (is.function(x)) 
            importedFrom <- getNamespaceName(environment(x))
        else stop("cannot determine import name")
    }
    Rdtxt <- list(name = paste0("\\name{", name, "}"), aliases = paste0("\\alias{", 
        name, "}"), docType = "\\docType{import}", title = paste0("\\title{Import from package \\pkg{", 
        importedFrom, "}}"), description = c("\\description{", 
        paste0("The \\code{", name, "} object is imported from package \\pkg{", 
            importedFrom, "}."), paste0("Help is available here:  \\code{\\link[", 
            importedFrom, ":", importPage, "]{", importedFrom, 
            "::", importPage, "}}."), "}"))
    if (is.na(filename)) 
        return(Rdtxt)
    cat(unlist(Rdtxt), file = filename, sep = "\n")
    message(gettextf("Created file named %s.", sQuote(filename)), 
        "\n", gettext("Edit the file and move it to the appropriate directory."), 
        domain = NA)
}
